################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CMD_SRCS += \
../EKS_LM4F232.cmd 

CFG_SRCS += \
../testio.cfg 

C_SRCS += \
../EKS_LM4F232.c \
../testio.c 

OBJS += \
./EKS_LM4F232.obj \
./testio.obj 

GEN_SRCS += \
./configPkg/compiler.opt \
./configPkg/linker.cmd 

C_DEPS += \
./EKS_LM4F232.pp \
./testio.pp 

GEN_MISC_DIRS += \
./configPkg/ 

GEN_CMDS += \
./configPkg/linker.cmd 

GEN_OPTS += \
./configPkg/compiler.opt 

GEN_SRCS__QUOTED += \
"configPkg\compiler.opt" \
"configPkg\linker.cmd" 

GEN_MISC_DIRS__QUOTED += \
"configPkg\" 

C_DEPS__QUOTED += \
"EKS_LM4F232.pp" \
"testio.pp" 

OBJS__QUOTED += \
"EKS_LM4F232.obj" \
"testio.obj" 

C_SRCS__QUOTED += \
"../EKS_LM4F232.c" \
"../testio.c" 

GEN_OPTS__FLAG += \
--cmd_file="./configPkg/compiler.opt" 

GEN_CMDS__FLAG += \
-l"./configPkg/linker.cmd" 


