################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../wci/intermediate/icodeimpl/ICodeImpl.cpp \
../wci/intermediate/icodeimpl/ICodeNodeImpl.cpp 

OBJS += \
./wci/intermediate/icodeimpl/ICodeImpl.o \
./wci/intermediate/icodeimpl/ICodeNodeImpl.o 

CPP_DEPS += \
./wci/intermediate/icodeimpl/ICodeImpl.d \
./wci/intermediate/icodeimpl/ICodeNodeImpl.d 


# Each subdirectory must supply rules for building sources it contributes
wci/intermediate/icodeimpl/%.o: ../wci/intermediate/icodeimpl/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++0x -D__GXX_EXPERIMENTAL_CXX0X__ -I"/Users/sarahlau/eclipse-workspace/C" -I"/Users/sarahlau/eclipse-workspace/C/target/generated-sources/antlr4" -I/usr/local/include/antlr4-runtime -I/Users/sarahlau/eclipse-workspace/boost_1_69_0 -O0 -g3 -Wall -c -fmessage-length=0 -std=c++11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


