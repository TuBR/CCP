/*two_func.c -- 一个文件中包含两个函数*/
#include<stdio.h>
void butler(void);/*ANSI/ISO C函数原型*/
int main()
{
	printf("I will summon the butler function.\n");
	butler();
	printf("Yes.Bring me some tea and writeable DVDs.\n");

	return 0;
}
void butler(void)/*函数定义重新开始*/
{
	printf("You lang,sir?\n");
}