## THIS IS A GENERATED FILE -- DO NOT EDIT
.configuro: .libraries,em4f linker.cmd \
  package/cfg/empty_pem4f.oem4f \

linker.cmd: package/cfg/empty_pem4f.xdl
	$(SED) 's"^\"\(package/cfg/empty_pem4fcfg.cmd\)\"$""\"C:/Users/Marci/Fejleszt/SZIMETOUR/szimetestio/.config/xconfig_empty/\1\""' package/cfg/empty_pem4f.xdl > $@
