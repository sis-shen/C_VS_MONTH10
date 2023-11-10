#define  _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
////
////void* function(char* str);//声明一个函数，返回值是void*指针
//
//void print(char* str)
//{
//	printf(str);
//}
//
//
//int main()
//{
//	void (*pf)(char* str);//声明一个函数指针，指向的函数的返回值是void,形参是char* str
//
//	char strr[] = "hello world";
//	pf = print;//给函数指针赋值
//	pf(strr);
//	return 0;
//}


#include <stdio.h>
//
//void* function(char* str);//声明一个函数，返回值是void*指针

void print(char* str){printf(str);}int main()
{void (*pf)(char* str);//声明一个函数指针，指向的函数的返回值是void,形参是char* str
								char strr[] = "hello world";pf = print;//给函数指针赋值
								{                    pf(strr);
								}return 0;                                             }