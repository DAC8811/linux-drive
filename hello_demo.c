#include <linux/module.h>
#include <linux/init.h>

static int hello_init(void)
{
    printk(KERN_ALERT  "Hello world!");
    return 0;
}

static void hello_exit(void)
{
    printk(KERN_ALERT  "Goodbye world");
}

module_init(hello_init);   //指定模块加载函数
module_exit(hello_exit); //指定模块卸载函数
MODULE_LICENSE("Dual BSD/GPL");//指定许可权
