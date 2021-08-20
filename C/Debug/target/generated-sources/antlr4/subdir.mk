################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../target/generated-sources/antlr4/CBaseVisitor.cpp \
../target/generated-sources/antlr4/CLexer.cpp \
../target/generated-sources/antlr4/CParser.cpp \
../target/generated-sources/antlr4/CVisitor.cpp 

OBJS += \
./target/generated-sources/antlr4/CBaseVisitor.o \
./target/generated-sources/antlr4/CLexer.o \
./target/generated-sources/antlr4/CParser.o \
./target/generated-sources/antlr4/CVisitor.o 

CPP_DEPS += \
./target/generated-sources/antlr4/CBaseVisitor.d \
./target/generated-sources/antlr4/CLexer.d \
./target/generated-sources/antlr4/CParser.d \
./target/generated-sources/antlr4/CVisitor.d 


# Each subdirectory must supply rules for building sources it contributes
target/generated-sources/antlr4/%.o: ../target/generated-sources/antlr4/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++0x -D__GXX_EXPERIMENTAL_CXX0X__ -I"/Users/sarahlau/eclipse-workspace/C" -I"/Users/sarahlau/eclipse-workspace/C/target/generated-sources/antlr4" -I/usr/local/include/antlr4-runtime -I/Users/sarahlau/eclipse-workspace/boost_1_69_0 -O0 -g3 -Wall -c -fmessage-length=0 -std=c++11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


