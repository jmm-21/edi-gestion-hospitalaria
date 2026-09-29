################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/ColaPaciente.cpp \
../src/FechaYHora.cpp \
../src/Hospital.cpp \
../src/Informe.cpp \
../src/ListaMedicos.cpp \
../src/ListaPacientes.cpp \
../src/Medico.cpp \
../src/PilasInformes.cpp \
../src/Servicio.cpp \
../src/main.cpp \
../src/paciente.cpp \
../src/pruebaInformes.cpp \
../src/pruebaListaPacientes.cpp \
../src/pruebaServicio.cpp \
../src/pruebasColaPaciente.cpp \
../src/pruebasListaMedico.cpp \
../src/pruebasMedico.cpp \
../src/pruebasPaciente.cpp \
../src/pruebasPilaInformes.cpp 

CPP_DEPS += \
./src/ColaPaciente.d \
./src/FechaYHora.d \
./src/Hospital.d \
./src/Informe.d \
./src/ListaMedicos.d \
./src/ListaPacientes.d \
./src/Medico.d \
./src/PilasInformes.d \
./src/Servicio.d \
./src/main.d \
./src/paciente.d \
./src/pruebaInformes.d \
./src/pruebaListaPacientes.d \
./src/pruebaServicio.d \
./src/pruebasColaPaciente.d \
./src/pruebasListaMedico.d \
./src/pruebasMedico.d \
./src/pruebasPaciente.d \
./src/pruebasPilaInformes.d 

OBJS += \
./src/ColaPaciente.o \
./src/FechaYHora.o \
./src/Hospital.o \
./src/Informe.o \
./src/ListaMedicos.o \
./src/ListaPacientes.o \
./src/Medico.o \
./src/PilasInformes.o \
./src/Servicio.o \
./src/main.o \
./src/paciente.o \
./src/pruebaInformes.o \
./src/pruebaListaPacientes.o \
./src/pruebaServicio.o \
./src/pruebasColaPaciente.o \
./src/pruebasListaMedico.o \
./src/pruebasMedico.o \
./src/pruebasPaciente.o \
./src/pruebasPilaInformes.o 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/ColaPaciente.d ./src/ColaPaciente.o ./src/FechaYHora.d ./src/FechaYHora.o ./src/Hospital.d ./src/Hospital.o ./src/Informe.d ./src/Informe.o ./src/ListaMedicos.d ./src/ListaMedicos.o ./src/ListaPacientes.d ./src/ListaPacientes.o ./src/Medico.d ./src/Medico.o ./src/PilasInformes.d ./src/PilasInformes.o ./src/Servicio.d ./src/Servicio.o ./src/main.d ./src/main.o ./src/paciente.d ./src/paciente.o ./src/pruebaInformes.d ./src/pruebaInformes.o ./src/pruebaListaPacientes.d ./src/pruebaListaPacientes.o ./src/pruebaServicio.d ./src/pruebaServicio.o ./src/pruebasColaPaciente.d ./src/pruebasColaPaciente.o ./src/pruebasListaMedico.d ./src/pruebasListaMedico.o ./src/pruebasMedico.d ./src/pruebasMedico.o ./src/pruebasPaciente.d ./src/pruebasPaciente.o ./src/pruebasPilaInformes.d ./src/pruebasPilaInformes.o

.PHONY: clean-src

