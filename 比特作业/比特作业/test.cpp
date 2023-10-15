#define  _CRT_SECURE_NO_WARNINGS 1

////九九乘法表
//#include <stdio.h>
//
//int main()
//{
//	for (int i = 1; i <= 9; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%d x %d = %d |", i, j, i * j);
//		}
//		printf("\n");
//	}
//
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	printf("请输入十个整数\n");
//	int max = 0;
//	//第一个数
//	scanf("%d", &max);
//	//后9个数
//	for (int i = 0; i < 9; i++)
//	{
//		int tmp = 0;
//		scanf("%d", &tmp);
//		if (tmp > max)
//		{
//			max = tmp;
//		}
//	}
//	printf("%d\n", max);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int sign = 1;
//	double sum = 0;
//	for (double i = 1.0; i <= 100; i++)
//	{
//		sum += sign * 1.0 / i;
//		sign *= -1;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}
//
//#include <stdio.h>
//
//int is_leep_year(int year)
//{
//	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	for (int year = 1000; year <= 2000; year++)
//	{
//		if (is_leep_year(year))
//		{
//			printf("%d |", year);
//
//		}
//	}
//	return 0;
//}

#include <stdio.h>

int main()
{
	int count = 0;
	for (int i = 1; i <= 100; i++)
	{
		int copy = i;
		while (copy)
		{
			if (copy % 10 == 9)
			{
				count++;
			}

			copy /= 10;
		}
	}
	printf("%d\n", count);
	return 0;
}