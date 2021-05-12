#include <linux/kernel.h>

asmlinkage long sys_getreadpages(void){

	printk("Get read pages\n");
	return 0;

}
