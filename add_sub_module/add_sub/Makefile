ifeq  ($(KERNELRELEASE),)
	KERNELDIR ?= /linux-5.3.0/linux-source-5.3.0
	PWD := $(shell pwd)
	PRINT_INC = $(shell pwd)/include
	EXTRA_CFLAGS += -I $(PRINT_INC) 
modules:
	$(MAKE) -C  $(KERNELDIR) M=$(PWD) modules
modules_install:
	$(MAKE) -C $(KERNELDIR) M=$(PWD) modules_install
clean:
	rm -rf   *.o  *~ core .depend .*.cmd *.ko *.mod.c .tmp_versions *.mod  *.order  *.symvers
else
	obj-m :=  add_sub.o
endif
.PHONY: modules modules_install clean