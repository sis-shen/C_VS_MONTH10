#define  _CRT_SECURE_NO_WARNINGS 1

////���� A: 22-ѭ��-1-���޷�
//#include  <stdio.h>
//
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int num = 0;
//		
//		for (int i = 0; i < n; i++)
//		{
//			int score = 0;
//			scanf("%d", &score);
//			if (score < 60)
//			{
//				num++;
//			}
//		}
//
//		printf("%d\n", 200 * num);
//	}
//	return 0;
//}

//***************************************************
//���� B: 22-ѭ��-2-��˹���
//#include <stdio.h>
//#include <math.h>
//
//void int_print(int num)
//{
//	printf("5");
//	for (int i = 0; i < num - 1; i++)
//	{
//		printf("0");
//	}
//}
//
//int main()
//{
//	int n = 0;
//	int num = 0;
//	scanf("%d",&n);
//	while(scanf("%d", &num) != EOF)
//	{
//		if (num == 0)
//		{
//			printf("1\n");
//		}
//
//		else
//		{
//			int_print(num);
//			int_print(num);
//			printf("\n");
//		}
//
//	}
//	return 0;
//}

////*****************************
////���� C: 22-ѭ��-2-��Ϧ��
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		int num = 0;
//		scanf("%d", &num);
//
//		int ret = 1;
//		int j = 2;
//		for ( j = 2; j < sqrt(num); j++)
//		{
//			if (num % j == 0)
//			{
//
//				ret += j;
//				ret += num / j;
//			}
//		}
//		if (j == sqrt(num))
//		{
//			ret += j;
//		}
//		printf("%d\n", ret);
//	}
//	return 0;
//}

//************************************
////���� D: 22-ѭ��-2-������������
//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	while (scanf("%d",&n) != EOF)
//	{
//		int countA = 0;
//		int countB = 0;
//		for (int i = 1; i <= n; i++)
//		{
//			int tmp = i;
//			int count1 = 0;
//			int count0 = 0;
//			while (tmp)
//			{
//				if (tmp % 2 == 1)
//				{
//					count1++;
//				}
//				else
//				{
//					count0++;
//				}
//				tmp /= 2;
//			}
//			if (count1 > count0)
//			{
//				countA++;
//			}
//			else
//			{
//				countB++;
//			}
//		}
//		printf("%d %d\n", countA, countB);
//	}
//	return 0;
//}

//*******************************************
//���� AB: 20�����л���-С˧����0��10�֣�

//#include <stdio.h>
//
//int main()
//{
//	int num = 0;
//	while (scanf("%d", &num) != EOF)
//	{
//		int count10 = 0;
//		int count5 = 0;
//		for (int tmp = num; tmp > 0; tmp--)
//		{
//			int copy = tmp;
//			if (tmp % 10 == 0)
//			{
//				while (1)//ͳ�Ʋ�����0
//				{
//					if (copy % 10 != 0)
//					{
//						break;
//					}
//					else
//					{
//						count10++;
//					}
//					copy /= 10;
//				}
//			}
//
//			if (copy % 5 == 0)
//			{
//				while (1)//ͳ�Ʋ�����0
//				{
//					if (copy % 5 != 0)
//					{
//						break;
//					}
//					else
//					{
//						count5++;
//					}
//					copy /= 5;
//				}
//			}
//
//		}
//		int count = count5 + count10;
//		printf("%d\n", count);
//	}
//	return 0;
//}

//********************************
//���� F: 22-����-1-�������
//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	while (scanf("%d %d",&a,&b) != EOF)
//	{
//		printf("%d\n", a + b);
//	}
//	return 0;
//}

//**************************
////���� E: 22-��ѧ-1-�����ֵ
//#include <stdio.h>
//
//int main()
//{
//	long long num = 0;
//	while (scanf("%lld", &num) != EOF)
//	{
//
//		long long ret = 0;
//		if (num > 1)
//		{
//			ret = num * 2 - 1;
//			printf("%lld\n", ret);
//		}
//		else
//		{
//			printf("2\n");
//		}
//	}
//	
//
//	return 0;
//}
//*****************************
////���� G: 22-ѭ��-1-�������ֽ�
//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		for (int i = 2; i < sqrt(n); i++)
//		{
//			if (n % i == 0)
//			{
//				printf("%d\n", n / i);
//				break;
//			}
//		}
//	}
//	return 0;
//}
//************************************
//���� H: 22-ѭ��-2-����n��     !!!!!!!!!!!!!!ʱ�䳬��
//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int sum = 1;
//		for (int copy = n; copy > 0; copy--)
//		{
//			sum *= copy % 2009;
//			sum %= 2009;
//		}
//		printf("%d\n", sum);
//	}
//	return 0;
//}

//****************************
//���� K: �ܵܵ���ҵ
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char str[20] = { 0};
	int count = 0;
	while (scanf("%s", &str)!=EOF )
	{

		int cur = 0;
		//��ȡ��һ����
		char str_num1[4] = { 'z'};
		while (('0' <= str[cur] && str[cur] <= '9'))
		{
			str_num1[cur] = str[cur];
			cur++;
		}
		int num1 = atoi(str_num1);

		//��ȡ���������
		char sign = str[cur];
		cur++;

		//��ȡ�ڶ�����
		char str_num2[4] = { 0};
		int tmp_cur = 0;
		while (('0' <= str[cur] && str[cur] <= '9'))
		{
			str_num2[tmp_cur] = str[cur];
			cur++;
			tmp_cur++;
		}
		int num2 = atoi(str_num2);

		cur++;//�����Ⱥ�

		if (str[cur] == '?')
		{
			continue;
		}

		//��ȡ��������
		char str_num3[4] = { 0};
		tmp_cur = 0;
		while (('0' <= str[cur] && str[cur] <= '9'))
		{
			str_num3[tmp_cur] = str[cur];
			cur++;
			tmp_cur++;
		}
		int num3 = atoi(str_num3);

		if (sign == '+')
		{
			if (num1 + num2 == num3)
			{
				count++;
			}
		}
		else
		{
			if (num1 - num2 == num3)
			{
				count++;
			}
		}
		
	}
	printf("%d", count);
	return 0;
}

char arr[] = "abcd";