################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CU_SRCS += \
../src/convolution/one_dimension.cu 

CC_SRCS += \
../src/convolution/convolution.cc 

CC_DEPS += \
./src/convolution/convolution.d 

OBJS += \
./src/convolution/convolution.o \
./src/convolution/one_dimension.o 

CU_DEPS += \
./src/convolution/one_dimension.d 


# Each subdirectory must supply rules for building sources it contributes
src/convolution/%.o: ../src/convolution/%.cc
	@echo 'Building file: $<'
	@echo 'Invoking: NVCC Compiler'
	/usr/local/cuda-9.2/bin/nvcc -G -g -O0 -gencode arch=compute_30,code=sm_30  -odir "src/convolution" -M -o "$(@:%.o=%.d)" "$<"
	/usr/local/cuda-9.2/bin/nvcc -G -g -O0 --compile  -x c++ -o  "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/convolution/%.o: ../src/convolution/%.cu
	@echo 'Building file: $<'
	@echo 'Invoking: NVCC Compiler'
	/usr/local/cuda-9.2/bin/nvcc -G -g -O0 -gencode arch=compute_30,code=sm_30  -odir "src/convolution" -M -o "$(@:%.o=%.d)" "$<"
	/usr/local/cuda-9.2/bin/nvcc -G -g -O0 --compile --relocatable-device-code=false -gencode arch=compute_30,code=compute_30 -gencode arch=compute_30,code=sm_30  -x cu -o  "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


