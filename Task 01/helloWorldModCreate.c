#include<linux/kernel.h>
#include<linux/init.h>
#include<linux/module.h>

MODULE_LICENSE("GPL");

static char *who = "ravneet";
module_param(who, charp,S_IRUGO);

static int hello_init(void){
 printk(KERN_ALERT "Hello World! I go by the name of %s\n", who);
 return 0;
}

static void hello_exit(void){
 printk(KERN_ALERT "Bye World! Until next time %s\n", who);
}

module_init(hello_init);
module_exit(hello_exit);
