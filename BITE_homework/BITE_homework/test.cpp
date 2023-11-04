#define  _CRT_SECURE_NO_WARNINGS 1

//打印100~200之间的素数
//#include <stdio.h>
//#include <math.h>
//
//int is_prime(int x)
//{
//	for (int i = 2; i < sqrt(x); i++)
//	{
//		if (x % i == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int main()
//{
//	for (int i = 100; i <= 200; i++)
//	{
//		if (is_prime(i))
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}

//***************************************************
//给定两个数，求这两个数的最大公约数
//#include <stdio.h>
//
//int main()
//{
//	int result = 1;
//	int max, min;
//	scanf("%d %d", &max, &min);
//	if (max < min)
//	{
//		int tmp = max;
//		max = min;
//		min = tmp;
//	}
//	for (int i = 1; i <= min; i++)
//	{
//		if (max % i == 0 && min % 1 == 0)
//		{
//			result = i;
//		}
//	}
//
//	printf("%d\n",result);
//	return 0;
//}

//*************************************************
////【一维数组】输入10个整数，求平均值
//#include <stdio.h>
//
//int main()
//{
//	int sum = 0;
//	int arr[10] = { 0 };
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//		sum += arr[i];
//	}
//
//	double avg = sum / 10.0;
//	printf("平均值=%lf", avg);
//
//	return 0;
//}

//****************************
//交换数组内容

//void exchangeContent(void* arr1,void*arr2, int sz, int typeSize)
//{
//	char* copy1 = (char*)arr1;
//	char* copy2 = (char*)arr2;
//
//	for (int i = 0; i < sz * typeSize; i++)
//	{
//		char tmp = copy1[i];
//		copy1[i] = copy2[i];
//		copy2[i] = tmp;
//	}
//}

//***********************************************
//#include <stdio.h>
//
//void function(int n)
//{
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		function(n);
//	}
//	return 0;
//}

//*****************************
//#include <stdio.h>
//#include <math.h>
//
//int is_prime(int num1)
//{
//	if (num1 <= 1) return 0;
//
//
//	for (int i = 2; i <= sqrt(num1); i++)
//	{
//		if (num1 % i == 0)
//		{
//			return 0;
//		}
//	}
//
//	return 1;
//}
//
//int main()
//{
//	for (int i = 101; i <= 200; i+=2)
//	{
//		if (is_prime(i))
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//****************************************
//#include <stdio.h>
//
//void init(int arr[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//
//void print(int arr[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void reverse(int arr[], int sz)
//{
//	int left = 0;
//	int rignt = sz - 1;
//	while (left < rignt)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[rignt];
//		arr[rignt] = tmp;
//		left++;
//		rignt--;
//	}
//}
//
//int main()
//{
//	int arr[6] = { 1,2,3,4,5,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	reverse(arr, sz);
//	print(arr, sz);
//
//	init(arr, sz);
//	print(arr, sz);
//	return 0;
//}

////
//
//#include <stdio.h>
//
//int main()
//{
//	char x = 0;
//	scanf("%c", &x);
//	if ('a' <= x && x <= 'z')
//	{
//		x = x - 'a' + 'A';
//		printf("%c %d", x, x);
//	}
//	else if ('A' <= x && x <= 'Z')
//	{
//		x = x - 'A' + 'a';
//		printf("%c %d", x, x);
//	}
//	else
//	{
//		printf("%c %d", x, x);
//	}
//
//	return 0;
//}

////*********************************
//#include <stdio.h>
//
//int main()
//{
//	int sum = 0;
//	int money = 20;
//	int out = 0;
//	while (money)
//	{
//		sum += money;
//		money += out;
//		if (money % 2 == 1)
//		{
//			out = 1;
//		}
//		else
//		{
//			out = 0;
//		}
//		money /= 2;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//*********************
//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 1; j <= 2 * n - 1; j++)
//		{
//			if (j >= n - i && j <= n + i)
//			{
//				printf("*");
//			}
//			else
//			{
//				printf(" ");
//			}
//		}
//		printf("\n");
//	}
//	for (int i = n-2; i>=0; i--)
//	{
//		for (int j = 1; j <= 2 * n - 1; j++)
//		{
//			if (j >= n - i && j <= n + i)
//			{
//				printf("*");
//			}
//			else
//			{
//				printf(" ");
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}

//------************************
//打印水仙花数
//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//	for (int num = 0; num < 100000; num++)
//	{
//		int copy = num;
//		int digit = 0;
//		do
//		{
//			digit++;
//			copy /= 10;
//		} while (copy);
//		
//		copy = num;
//
//		int sum = 0;
//		while (copy)
//		{
//			sum += pow(copy % 10, digit);
//			copy /= 10;
//		}
//		if (sum == num)
//		{
//			printf("%d ", num);
//		}
//	}
//
//
//	return 0;
//}

//***************
#include <stdio.h>

int main()
{
	int n = 0;
	scanf("%d", &n);
	int sum = 0;
	int add = n;
	for (int i = 0; i < 5; i++)

	{
		sum += add;
		add = add * 10 + n;
	}
	printf("%d", sum);
	return 0;
}