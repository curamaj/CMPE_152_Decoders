################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../wci/Globals.cpp 

OBJS += \
./wci/Globals.o 

CPP_DEPS += \
./wci/Globals.d 


# Each subdirectory must supply rules for building sources it contributes
wci/%.o: ../wci/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++0x -D__GXX_EXPERIMENTAL_CXX0X__ -I"/Users/sarahlau/eclipse-workspace/C" -I"/Users/sarahlau/eclipse-workspace/C/target/generated-sources/antlr4" -I/usr/local/include/antlr4-runtime -I/Users/sarahlau/eclipse-workspace/boost_1_69_0 -O0 -g3 -Wall -c -fmessage-length=0 -std=c++11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


