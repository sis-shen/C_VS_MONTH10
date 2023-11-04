#define  _CRT_SECURE_NO_WARNINGS 1

//题目一
//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int step = 1;
//	int m = 1;
//
//	unsigned long long sum = 0;
//	while (step <= n)
//	{
//		m *= step;
//		sum += m;
//		step++;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//*************************
//题目二
//#include <stdio.h>
//
//int main()
//{
//	int sum = 0;
//
//	int num = 1;
//
//	do {
//		if (num % 3 == 2 && num % 5 == 3 && num % 7 == 2)
//		{
//			printf("%d\n", num);
//			sum += num;
//		}
//
//		num++;
//
//	} while(num<=200);
//
//	printf("sum = %d", sum);
//
//	return 0;
//}

//**************************************
//题目三
//#include <stdio.h>
//
//int main()
//{
//	for (int i = 100; i <= 999; i++)
//	{
//		int sum = 0;
//		int copy = i;
//		while (copy)
//		{
//			int last = copy % 10;
//			sum += last * last * last;
//			copy /= 10;
//		}
//
//		if (sum == i)
//		{
//			printf("%d\n", i);
//		}
//	}
//
//	return 0;
//}

//-**********************
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char str[50] = { 0 };
//	scanf("%s", str);
//	int sz = strlen(str);
//	for (int i = 0; i < sz; i++)
//	{
//		if ('a' <= str[i] && 'z' >= str[i])
//		{
//			str[i] += 3;
//			if (str[i] > 'z')
//			{
//				str[i] -= 26;
//			}
//		}
//		else
//		{
//			str[i] += 3;
//			if (str[i] > 'Z')
//			{
//				str[i] -= 26;
//			}
//		}
//		
//	}
//
//	printf("%s\n", str);
//
//
//	return 0;
//}