#include <linux/kernel.h>

asmlinkage long sys_getnbpages(void){

	printk("Get number of pages\n");
	return 0;

}
