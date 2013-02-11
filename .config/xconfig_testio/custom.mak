## THIS IS A GENERATED FILE -- DO NOT EDIT
.configuro: .libraries,em4f linker.cmd \
  package/cfg/testio_pem4f.oem4f \

linker.cmd: package/cfg/testio_pem4f.xdl
	$(SED) 's"^\"\(package/cfg/testio_pem4fcfg.cmd\)\"$""\"C:/Users/endre/workspace_v5_3/szimetestio/.config/xconfig_testio/\1\""' package/cfg/testio_pem4f.xdl > $@
