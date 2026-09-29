################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Consulta.cpp \
../src/FechaYHora.cpp \
../src/Hospital.cpp \
../src/Medico.cpp \
../src/PruebasConsuta.cpp \
../src/VoVConsultas.cpp \
../src/VoVMedicos.cpp \
../src/VoVPacientes.cpp \
../src/main.cpp \
../src/paciente.cpp \
../src/pruebaVoVConsulta.cpp \
../src/pruebasMedico.cpp \
../src/pruebasPaciente.cpp \
../src/pruebasVoVMedico.cpp \
../src/pruebasVoVPaciente.cpp 

CPP_DEPS += \
./src/Consulta.d \
./src/FechaYHora.d \
./src/Hospital.d \
./src/Medico.d \
./src/PruebasConsuta.d \
./src/VoVConsultas.d \
./src/VoVMedicos.d \
./src/VoVPacientes.d \
./src/main.d \
./src/paciente.d \
./src/pruebaVoVConsulta.d \
./src/pruebasMedico.d \
./src/pruebasPaciente.d \
./src/pruebasVoVMedico.d \
./src/pruebasVoVPaciente.d 

OBJS += \
./src/Consulta.o \
./src/FechaYHora.o \
./src/Hospital.o \
./src/Medico.o \
./src/PruebasConsuta.o \
./src/VoVConsultas.o \
./src/VoVMedicos.o \
./src/VoVPacientes.o \
./src/main.o \
./src/paciente.o \
./src/pruebaVoVConsulta.o \
./src/pruebasMedico.o \
./src/pruebasPaciente.o \
./src/pruebasVoVMedico.o \
./src/pruebasVoVPaciente.o 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/Consulta.d ./src/Consulta.o ./src/FechaYHora.d ./src/FechaYHora.o ./src/Hospital.d ./src/Hospital.o ./src/Medico.d ./src/Medico.o ./src/PruebasConsuta.d ./src/PruebasConsuta.o ./src/VoVConsultas.d ./src/VoVConsultas.o ./src/VoVMedicos.d ./src/VoVMedicos.o ./src/VoVPacientes.d ./src/VoVPacientes.o ./src/main.d ./src/main.o ./src/paciente.d ./src/paciente.o ./src/pruebaVoVConsulta.d ./src/pruebaVoVConsulta.o ./src/pruebasMedico.d ./src/pruebasMedico.o ./src/pruebasPaciente.d ./src/pruebasPaciente.o ./src/pruebasVoVMedico.d ./src/pruebasVoVMedico.o ./src/pruebasVoVPaciente.d ./src/pruebasVoVPaciente.o

.PHONY: clean-src

