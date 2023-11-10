#define  _CRT_SECURE_NO_WARNINGS 1


//#include <math.h>
//#include <stdio.h>
//int main()
//{
//	//char arr1[20] = { 0 };
//	//char arr2[20] = { 0 };
//	//scanf("%s %s", arr1, arr2);
//	//printf("%d", arr1 == arr2);
//	printf("%d", 20 % 40);
//	return 0;
//}

//int main()
//{
//	int a, b, c, d;
//	scanf("%d/%d+%d/%d", &a, &b, &c, &d);
//	printf("%d %d %d %d", a, b, c, d);
//
//	return 0;
//
//}

//int main()
//{
//	int n = 0;
//	printf("输入:>");
//	while (~scanf("%d", &n))
//	{
//		
//		unsigned long long ret = (1 + pow(10, n)) * (pow(10, n)) / 2;
//		printf("输出:>%llu\n", ret);
//		printf("输入:>");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);//获取循环次数n
//    for (int i = 0; i < n; i++)//创建循环
//    {
//        //以下完成一组输入输出
//        int sum = 0;//声明一个局部变量，下次循环时会自动重声明
//        int num = 0;//储存输入的数字
//        for (int j = 0; j < 3; j++)
//        {
//            scanf("%d", &num);
//            sum += num;
//        }
//        printf("%d\n", sum);
//        //本次循环走完后变量sum被销毁，然后进入下一次循环,完成重置
//    }
//    return 0;
//}

//******************************
//#include <stdio.h>
//
//int isprime(int x)
//{
//	if (x == 1) return 0;
//	if (x == 2) return 1;
//
//	for (int i = 2; i < x; i++)
//	{
//		if (x % i == 0) return 0;
//	}
//	return 1;
//}
//
//int b[1005] = { 0 };
//int len;
//char str[1005];
//void Eratosthenes() {
//	b[0] = b[1] = 1;
//	for (int i = 2; i * i <= 1000; i++)
//		if (b[i] == 0)
//			for (int j = i * 2; j <= 1000; j += i)
//				b[j] = 1;
//}
//
//
//
//int main()
//{
//	Eratosthenes();
//	int prime_arr[1008] = { 0 };
//	for (int i = 2; i < 1000; i++)
//	{
//		if (isprime(i))
//		{
//			prime_arr[i] = 1;
//		}
//	}
//	int sum = 0;
//	for (int i = 0; i < 1000; i++)
//	{
//		sum += (b[i] & prime_arr[i]);
//	}
//
//	printf("%d\n", sum);
//
//
//
//	return 0;
//}

//
//#include <stdio.h>
//#include <string.h>
//
//int i;
//
//
//int main()
//{
//	i--;
//	printf("%d", i>(unsigned)4);
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char str[100] = { 0 };
//	scanf("%s", str);
//	int len = strlen(str);
//	int sz = sizeof(str) / sizeof(str[0]);
//	printf("数组str的长度是:%d\n", sz);
//	printf("str里存的字符串长度是:%d", len);
//	return 0;
//}



//
//
//
//
//int main()
//{
//	char str[] = "abcdef";//声明字符数组str并用字符串初始化
//	return 0;
//}





//
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	//声明一个没有'\0'结尾的数组
//
//	char str[] = { 'a','b','c','d','e','f' };
//	printf("%s\n", str);
//
//	int sz = strlen(str);
//	printf("长度为: %d", sz);
//	return 0;
//}

//#include <stdio.h>
//void functionP(char* str){printf(str);
//                                     }void(*fun(void (*input)(char* str)))(char(*str)){
//	return input;}int main()
//{char(str[]) = "hello world";{
//	;}				{void(*pp)(char* str) = fun(functionP);pp(str);}
//		return 0;
//				}




//int num = '6' - '0';//减去'0'把字符转成整型










//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char str[] = { 'a','b','c','d','e','f' };
//	printf("%s\n", str);
//	int len = strlen(str);
//	printf("%d", len);
//
//	return 0;
//}









//#include <stdio.h>
//
//int main()
//{
//	char str3[10] = { 0 };
//
//	char str4[10] = "abc";
//
//	char str5[10] = { 'a','b','c','d' };
//
//	return 0;
//}





#include <stdio.h>

int main()
{
	const char* pstr = "abc";
	return 0;
}

















