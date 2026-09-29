################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Prog_principal.cpp \
../src/PruebasEnsayoclinico.cpp \
../src/ensayoclinico.cpp \
../src/paciente.cpp \
../src/timer.cpp 

CPP_DEPS += \
./src/Prog_principal.d \
./src/PruebasEnsayoclinico.d \
./src/ensayoclinico.d \
./src/paciente.d \
./src/timer.d 

OBJS += \
./src/Prog_principal.o \
./src/PruebasEnsayoclinico.o \
./src/ensayoclinico.o \
./src/paciente.o \
./src/timer.o 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/Prog_principal.d ./src/Prog_principal.o ./src/PruebasEnsayoclinico.d ./src/PruebasEnsayoclinico.o ./src/ensayoclinico.d ./src/ensayoclinico.o ./src/paciente.d ./src/paciente.o ./src/timer.d ./src/timer.o

.PHONY: clean-src

