#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//
//void* function(char* str);//����һ������������ֵ��void*ָ��

void print(char* str)
{
	printf(str);
}


int main()
{
	void (*pf)(char* str);//����һ������ָ�룬ָ��ĺ����ķ���ֵ��void,�β���char* str

	char strr[] = "hello";
	pf = print;//������ָ�븳ֵ
	printf("%p\n", print);

	printf("%p\n", pf);
	pf(strr);
	return 0;
}