#include "../add_sub/include/add_sub.h"

static long a = 1;
static long b = 1;
static int AddOrSub = 1;
static int test_init(void)
{
    long result = 0;
    printk(KERN_ALERT "test init\n");
    if(AddOrSub==1)
    {
        result = add_integer(a,b);
    }
    else
    {
        result = sub_integer(a,b);
    }
    printk(KERN_ALERT "The result of %s is %ld",AddOrSub == 1?"Add":"Sub",result);
    return 0;
}
static void test_exit(void)
{
    printk(KERN_ALERT "test exit\n");
}
module_init(test_init);
module_exit(test_exit);
module_param(a,long,S_IRUGO);
module_param(b,long,S_IRUGO);
module_param(AddOrSub,int,S_IRUGO);
MODULE_LICENSE("Dual BSD/GPL");

