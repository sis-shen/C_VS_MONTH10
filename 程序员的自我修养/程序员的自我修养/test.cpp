#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int gloabal_uninit_var;

int main()
{
	static int init_var;
	printf("%d \n", init_var);

	printf("%d\n", gloabal_uninit_var);
	return 0;
}