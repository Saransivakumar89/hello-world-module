#include<linux/module.h>

static int __init helloworld_init(void)
{
    pr_info("Hello World\n");
    return 0;
}

static void __exit helloworld_exit(void)
{
    pr_info("Good Bye\n");
}

module_init(helloworld_init);
module_exit(helloworld_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("SARAN SIVAKUMAR");
MODULE_DESCRIPTION("Hello World Module");
MODULE_INFO(Board,"Beagle Bone Black Rev C");
