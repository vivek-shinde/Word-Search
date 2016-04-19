################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/Word\ Search.c 

OBJS += \
./src/Word\ Search.o 

C_DEPS += \
./src/Word\ Search.d 


# Each subdirectory must supply rules for building sources it contributes
src/Word\ Search.o: ../src/Word\ Search.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Word Search.d" -MT"src/Word\ Search.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


