#
_XDCBUILDCOUNT = 
ifneq (,$(findstring path,$(_USEXDCENV_)))
override XDCPATH = C:/ti/mcusdk_1_00_01_74/packages;C:/ti/mcusdk_1_00_01_74/products/bios_6_33_04_39/packages;C:/ti/mcusdk_1_00_01_74/products/ipc_1_24_02_27/packages;C:/ti/mcusdk_1_00_01_74/products/ndk_2_21_01_38/packages;C:/ti/mcusdk_1_00_01_74/products/uia_1_01_01_14/packages;C:/ti/mcusdk_1_00_01_74/products/xdctools_3_23_05_61/packages;C:/ti/ccsv5/ccs_base;C:/Users/Marci/Fejleszt/SZIMETOUR/szimetestio/.config
override XDCROOT = C:/ti/xdctools_3_24_05_48
override XDCBUILDCFG = ./config.bld
endif
ifneq (,$(findstring args,$(_USEXDCENV_)))
override XDCARGS = 
override XDCTARGETS = 
endif
#
ifeq (0,1)
PKGPATH = C:/ti/mcusdk_1_00_01_74/packages;C:/ti/mcusdk_1_00_01_74/products/bios_6_33_04_39/packages;C:/ti/mcusdk_1_00_01_74/products/ipc_1_24_02_27/packages;C:/ti/mcusdk_1_00_01_74/products/ndk_2_21_01_38/packages;C:/ti/mcusdk_1_00_01_74/products/uia_1_01_01_14/packages;C:/ti/mcusdk_1_00_01_74/products/xdctools_3_23_05_61/packages;C:/ti/ccsv5/ccs_base;C:/Users/Marci/Fejleszt/SZIMETOUR/szimetestio/.config;C:/ti/xdctools_3_24_05_48/packages;..
HOSTOS = Windows
endif
