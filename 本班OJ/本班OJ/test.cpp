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
//	while (~scanf("%d", &n))
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
//���� H: 22-ѭ��-2-����n��     !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!ʱ�䳬��
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
//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	char str[20] = { 0};
//	int count = 0;
//	while (scanf("%s", &str)!=EOF )
//	{
//
//		int cur = 0;
//		//��ȡ��һ����
//		char str_num1[4] = { 'z'};
//		while (('0' <= str[cur] && str[cur] <= '9'))
//		{
//			str_num1[cur] = str[cur];
//			cur++;
//		}
//		int num1 = atoi(str_num1);
//
//		//��ȡ���������
//		char sign = str[cur];
//		cur++;
//
//		//��ȡ�ڶ�����
//		char str_num2[4] = { 0};
//		int tmp_cur = 0;
//		while (('0' <= str[cur] && str[cur] <= '9'))
//		{
//			str_num2[tmp_cur] = str[cur];
//			cur++;
//			tmp_cur++;
//		}
//		int num2 = atoi(str_num2);
//
//		cur++;//�����Ⱥ�
//
//		if (str[cur] == '?')
//		{
//			continue;
//		}
//
//		//��ȡ��������
//		char str_num3[4] = { 0};
//		tmp_cur = 0;
//		while (('0' <= str[cur] && str[cur] <= '9'))
//		{
//			str_num3[tmp_cur] = str[cur];
//			cur++;
//			tmp_cur++;
//		}
//		int num3 = atoi(str_num3);
//
//		if (sign == '+')
//		{
//			if (num1 + num2 == num3)
//			{
//				count++;
//			}
//		}
//		else
//		{
//			if (num1 - num2 == num3)
//			{
//				count++;
//			}
//		}
//		
//	}
//	printf("%d", count);
//	return 0;
//}

//*************************
//���� T: 22-ѭ��-1-����ͬ԰
//#include <stdio.h>
//
//int main()
//{
//	int head = 0;
//	int feet = 0;
//	scanf("%d %d", &head, &feet);
//	while (head + feet)
//	{
//		int gugugu = (head * 4 - feet) / 2;
//		int rabbit = (feet - head * 2) / 2;
//		if (gugugu < 0 || rabbit < 0)
//		{
//			printf("Error\n");
//		}
//		else if ((gugugu * 2 + rabbit * 4 != feet) || (gugugu + rabbit != head))
//		{
//			printf("Error\n");
//
//		}
//		else
//		{
//			printf("%d %d\n", gugugu, rabbit);
//		}
//		scanf("%d %d", &head, &feet);
//
//	}
//	return 0;
//}
// 
// �������
//
//#include <stdio.h>
//
//int main()
//{
//	int head = 0;
//	int feet = 0;
//	scanf("%d %d", &head, &feet);
//	while (head + feet)
//	{
//		int gugugu = 0;
//		int flag = 0;
//		for (gugugu = 0; gugugu < head; gugugu++)
//		{
//			if (gugugu * 2 + (head - gugugu) * 4 == feet)
//			{
//				printf("%d %d\n", gugugu, head - gugugu);
//				flag = 1;
//				break;
//			}
//		}
//		if (flag)
//		{
//			scanf("%d %d", &head, &feet);
//			continue;
//		}
//
//		printf("Error\n");
//
//
//		scanf("%d %d", &head, &feet);
//	}
//
//
//	return 0;
//}

//*********************************

//���� I: 22-ѡ��-1-��ƻ��
//#include <stdio.h>
//
//int main()
//{
//	int n = 0, m = 0,k=0;
//	scanf("%d %d %d", &n, &m, &k);
//	int left = n - m;
//	if (left > 0 && left % k == 0)
//	{
//		printf("Happy!");
//	}
//	else
//	{
//		printf("UnHappy!");
//	}
//
//	return 0;
//}

//***********************
//????????????????????????????????????????????????????????????????????
//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	int cost = 0;
//	int city = 1;
//	int min = 0;
//	int flag = 1;
//	scanf("%d", &n);
//	scanf("%d", &min);//�ѵ�һ�����еķ��÷���min
//	for (int new_city = 2; new_city <= n; new_city++)
//	{
//		//ѭ���ӵڶ������п�ʼ
//		scanf(" %d", &cost);
//		if (min == cost)
//		{
//			flag = 0;
//		}
//		else if (cost < min)
//		{
//			min = cost;
//			city = new_city;
//			flag = 1;//����flag
//		}
//	}
//	if (flag == 0)
//	{
//		printf("Fail\n");
//	}
//	else
//	{
//		printf("%d\n", city);
//	}
//	return 0;
//}

//***************************************
//���� J: 22-����-1-�����㷨
//#include <stdio.h>
//
//int main()
//{
//	int num = 0;
//	while (scanf("%d", &num) != EOF)
//	{
//		int arr[4] = { 0 };
//		for (int i = 0; i < 4; i++)
//		{
//			arr[3 - i] = num % 10;
//			num /= 10;
//		}
//
//		for (int i = 0; i < 4; i++)
//		{
//			arr[i] = (arr[i] + 9) % 10;
//		}
//		int ret = arr[2] * 1000 + arr[3] * 100 + arr[0] * 10 + arr[1];
//		printf("The encrypted number is %d\n", ret);
//	}
//	return 0;
//}

//***************************
//���� N: 22-����-2-��������

//�汾һ���ٶ��Ӵ�С����
//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int mode = 0;
//	int mode_sum = 1;
//	int n = 0;
//	int num = 0;
//	int num_sum = 1;
//	scanf("%d", &n);
//	scanf("%d", &num);
//	mode = num;
//	for (int i = 0; i < n-1; i++)
//	{
//		int prev = num;
//		scanf("%d", &num);
//		if (num == prev)
//		{
//			num_sum++;
//		}
//		else
//		{
//			mode_sum = mode_sum > num_sum ? mode_sum : num_sum;
//			mode = mode_sum > num_sum ? mode : prev;
//			num_sum = 1;
//
//		}
//	}
//	mode_sum = mode_sum > num_sum ? mode_sum : num_sum;
//	mode = mode_sum > num_sum ? mode : num;
//
//	printf("%d\n%d", mode,mode_sum);
//
//
//
//	return 0;
//}

//�汾��
//#include <stdio.h>
//#include <stdlib.h>
//
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int* arr = (int*)malloc(sizeof(int) * n);
//	//��������
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	qsort(arr, n, sizeof(int), cmp_int);
//
//	int left = 0;
//	int right = 0;
//	int mode = 0;
//	int mode_sum = 0;
//	for (right = 0; right < n; right++)
//	{
//		if (arr[left] != arr[right])
//		{
//			if (right - left > mode_sum)
//			{
//				mode_sum = right - left;
//				mode = arr[left];
//			}
//			left = right;
//		}
//	}
//	if (right - left > mode_sum)
//	{
//		mode_sum = right - left;
//		mode = arr[left];
//	}
//	printf("%d\n%d", mode, mode_sum);
//	return 0;
//}

//***********************************************
//���� O: 22-����-2-���Ӳ��
//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	while (num)
//	{
//		int ret = 0;
//		if (num == 1)
//		{
//			printf("0\n");
//		}
//		while ((pow(3, ret) - 1) /2 < num)
//		{
//			ret++;
//		}
//		printf("%d\n", ret);
//		scanf("%d", &num);
//	}
//	return 0;
//}

//************************************
//���� Q: 22-ѭ��-1-ƽ������������
#include <stdio.h>

int main()
{
	int left = 0;
	int right = 0;
	while (scanf("%d %d", &left, &right) != EOF)
	{
		int even = 0;
		int odd = 0;
		
		int step = 1;
		while (step * step < right)
		{

		}
	}
	return 0;
}