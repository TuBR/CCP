/*two_func.c -- һ���ļ��а�����������*/
#include<stdio.h>
void butler(void);/*ANSI/ISO C����ԭ��*/
int main()
{
	printf("I will summon the butler function.\n");
	butler();
	printf("Yes.Bring me some tea and writeable DVDs.\n");

	return 0;
}
void butler(void)/*�����������¿�ʼ*/
{
	printf("You lang,sir?\n");
}