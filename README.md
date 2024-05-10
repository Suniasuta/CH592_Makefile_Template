CH592 Makefile Template
=======================

A Makefile template for the [openwch/ch592](https://github.com/openwch/ch592) to remove the need for MounRiver Studio.\
Based on [rgoulter/ch592-ble-hid-keyboard-example](https://github.com/rgoulter/ch592-ble-hid-keyboard-example)


The elf can be flashed to the CH592 using [wchisp](https://github.com/ch32-rs/wchisp). (Enter the CH592 bootloader by holding down BOOT when connecting it using USB).\
The SDK for CH592 from the openwch EVT is vendored under ``sdk/``. (Encoding has been changed from gbk to utf-8). 

``make`` to complie \
``make clean`` to clean/remove the compiled elf \
``make flash`` to flash \
``make f`` to compile and flash.



To install the toolchain using Gentoo native tools\
``crossdev --target riscv-none-elf --with-arch=rv32imca_zicsr --with-abi=ilp32``\
``echo "cross-riscv-none-elf/newlib nano" >> /etc/portage/package.use/embedded``\
``emerge -a cross-riscv-none-elf/newlib``
