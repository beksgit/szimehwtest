################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Each subdirectory must supply rules for building sources it contributes
EKS_LM4F232.obj: ../EKS_LM4F232.c $(GEN_OPTS) $(GEN_SRCS)
	@echo 'Building file: $<'
	@echo 'Invoking: ARM Compiler'
	"C:/ti/ccsv5/tools/compiler/arm_5.0.1/bin/armcl" -mv7M4 --code_state=16 --float_support=FPv4SPD16 --abi=eabi -me -g --include_path="C:/ti/ccsv5/tools/compiler/arm_5.0.1/include" --include_path="C:/ti/mcusdk_1_00_01_74/products/StellarisWare_9107" --gcc --define=PART_LM4F232H5QD --define=TARGET_IS_TEMPEST_RB1 --diag_warning=225 --display_error_number --diag_wrap=off --gen_func_subsections=on --preproc_with_compile --preproc_dependency="EKS_LM4F232.pp" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

testio.obj: ../testio.c $(GEN_OPTS) $(GEN_SRCS)
	@echo 'Building file: $<'
	@echo 'Invoking: ARM Compiler'
	"C:/ti/ccsv5/tools/compiler/arm_5.0.1/bin/armcl" -mv7M4 --code_state=16 --float_support=FPv4SPD16 --abi=eabi -me -g --include_path="C:/ti/ccsv5/tools/compiler/arm_5.0.1/include" --include_path="C:/ti/mcusdk_1_00_01_74/products/StellarisWare_9107" --gcc --define=PART_LM4F232H5QD --define=TARGET_IS_TEMPEST_RB1 --diag_warning=225 --display_error_number --diag_wrap=off --gen_func_subsections=on --preproc_with_compile --preproc_dependency="testio.pp" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

configPkg/compiler.opt: ../testio.cfg
	@echo 'Building file: $<'
	@echo 'Invoking: XDCtools'
	"C:/ti/xdctools_3_24_05_48/xs" --xdcpath="C:/ti/mcusdk_1_00_01_74/packages;C:/ti/mcusdk_1_00_01_74/products/bios_6_33_04_39/packages;C:/ti/mcusdk_1_00_01_74/products/ipc_1_24_02_27/packages;C:/ti/mcusdk_1_00_01_74/products/ndk_2_21_01_38/packages;C:/ti/mcusdk_1_00_01_74/products/uia_1_01_01_14/packages;C:/ti/mcusdk_1_00_01_74/products/xdctools_3_23_05_61/packages;C:/ti/ccsv5/ccs_base;" xdc.tools.configuro -o configPkg -t ti.targets.arm.elf.M4F -p ti.platforms.stellaris:LM4F232H5QD -r release -c "C:/ti/ccsv5/tools/compiler/arm_5.0.1" "$<"
	@echo 'Finished building: $<'
	@echo ' '

configPkg/linker.cmd: configPkg/compiler.opt
configPkg/: configPkg/compiler.opt


