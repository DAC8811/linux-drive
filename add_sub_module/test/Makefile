obj-m :=  test.o
KERNELDIR ?= /linux-5.3.0/linux-source-5.3.0
PWD := $(shell pwd)
SYMBOL_INC = $(pwd)/../add_sub/include #头文件add_sub.h的路径
EXTRA_CFLAGS += -I $(SYMBOL_INC)  #给模块编译添加一个编译选项：头文件路径
KBUILD_EXTRA_SYMBOLS = $(obj)/../add_sub/Module.symvers #$(obj)是默认的当前工作目录，只能写这个，写其他的会报错，原因未知
modules:
	$(MAKE) -C  $(KERNELDIR) M=$(PWD) modules
modules_install:
	$(MAKE) -C $(KERNELDIR) M=$(PWD) modules_install
clean:
	rm -rf   *.o  *~ core .depend .*.cmd *.ko *.mod.c .tmp_versions *.mod  *.order  *.symvers
.PHONY: modules modules_install clean

