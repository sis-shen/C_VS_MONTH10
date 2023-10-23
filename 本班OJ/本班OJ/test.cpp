#define  _CRT_SECURE_NO_WARNINGS 1

////问题 A: 22-循环-1-重修费
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
//问题 B: 22-循环-2-高斯求和
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
////问题 C: 22-循环-2-七夕节
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
////问题 D: 22-循环-2-二进制数问题
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
//问题 AB: 20级期中机试-小帅数数0（10分）

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
//				while (1)//统计并消除0
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
//				while (1)//统计并消除0
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
//问题 F: 22-基础-1-两数相加
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
////问题 E: 22-数学-1-求最大值
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
////问题 G: 22-循环-1-质因数分解
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
//问题 H: 22-循环-2-算算n！     
//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int sum = 1;
//		if (n >= 2009)
//		{
//			printf("0\n");
//			continue;
//		}
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
//问题 K: 弟弟的作业
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
//		//提取第一个数
//		char str_num1[4] = { 'z'};
//		while (('0' <= str[cur] && str[cur] <= '9'))
//		{
//			str_num1[cur] = str[cur];
//			cur++;
//		}
//		int num1 = atoi(str_num1);
//
//		//提取算数运算符
//		char sign = str[cur];
//		cur++;
//
//		//提取第二个数
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
//		cur++;//跳过等号
//
//		if (str[cur] == '?')
//		{
//			continue;
//		}
//
//		//提取第三个数
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
//问题 T: 22-循环-1-鸽兔同园
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
// 暴力求解
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

//问题 I: 22-选择-1-分苹果
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
//	scanf("%d", &min);//把第一个城市的费用放入min
//	for (int new_city = 2; new_city <= n; new_city++)
//	{
//		//循环从第二个城市开始
//		scanf(" %d", &cost);
//		if (min == cost)
//		{
//			flag = 0;
//		}
//		else if (cost < min)
//		{
//			min = cost;
//			city = new_city;
//			flag = 1;//重置flag
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
//问题 J: 22-基础-1-加密算法
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
//问题 N: 22-数组-2-众数问题

//版本一，假定从大到小输入
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

//版本二
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
//	//存入数据
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
//问题 O: 22-函数-2-真假硬币
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
//问题 Q: 22-循环-1-平方和与立方和
//#include <stdio.h>
//
//int main()
//{
//	int left = 0;
//	int right = 0;
//	while (scanf("%d %d", &left, &right) != EOF)
//	{
//		int even = 0;
//		int odd = 0;
//		
//		for (int i = left; i <= right; i++)
//		{
//			if (i % 2 == 0)
//			{
//				even += i * i;
//			}
//			else
//			{
//				odd += i * i * i;
//			}
//		}
//		printf("%d %d\n", even, odd);;
//	}
//	return 0;
//}

//**************************************
//问题 R: 幸运儿
//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int arr[50] = { 0 };
//		for (int i = 0; i < n; i++)
//		{
//			arr[i] = i + 1;
//		}
//		int sum = n;
//		int step = 2;
//		int begin = 1;
//		int count = 1;
//		while (sum > 1)
//		{
//			for (int i = begin; i < n; i += step)
//			{
//				if (sum == 2)
//				{
//					sum--;
//					printf("\n1 %d\n", arr[i]);
//					break;
//				}
//				sum--;
//				printf("%d ", arr[i]);
//				arr[i] = -1;
//
//			}
//			begin += step / 2;
//			step *= 2;
//
//		}
//	}
//	return 0;
//}

//*********************************************
////问题 S: 22-循环-2-敲七
//#include <stdio.h>
//
//int is_include7(int x)
//{
//	while (x)
//	{
//		if (x % 10 == 7)
//		{
//			return 1;
//		}
//		else
//		{
//			x /= 10;
//		}
//	}
//	return 0;
//}
//
//int is_7times(int x)
//{
//	if (x % 7 == 0)
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
//	int n = 0;
//	int sum = 0;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		if (is_include7(i) || is_7times(i))
//		{
//			sum++;
//		}
//	}
//	printf("%d", sum);
//	return 0;
//}

//****************************************************
//问题 W: 22-选择-2-表达式值
//#include <stdio.h>
//
//int main()
//{
//	int a, b, c;
//	while (scanf("%d %d %d", &a, &b, &c) != EOF)
//	{
//		int max = 0;
//		int result = a + b + c;
//		max = result > max ? result : max;
//		
//		result = (a + b) * c;
//		max = result > max ? result : max;
//
//		result = a * (b + c);
//		max = result > max ? result : max;
//
//		result = a * b * c;
//		max = result > max ? result : max;
//
//		printf("%d\n", max);
//
//
//	}
//	return 0;
//}

//***************************************
//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//	int t = 0;
//	scanf("%d", &t);
//	for (int i = 0; i < t; i++)
//	{
//		int n = 0;
//		scanf("%d", &n);
//		printf("%d\n", (int)pow(2, n - 1));
//	}
//	return 0;
//}

//******************************
//问题 Y: 22-循环-1-发工资
//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int sum = 0;
//		int cost = 0;
//		for (int i = 0; i < n; i++)
//		{
//			scanf("%d", &cost);
//			while (cost>=100)
//			{
//				sum++;
//				cost -= 100;
//			}
//			while (cost >= 50)
//			{
//				sum++;
//				cost -= 50;
//			}
//
//			while (cost >= 10)
//			{
//				sum++;
//				cost -= 10;
//			}
//			while (cost >= 5)
//			{
//				sum++;
//				cost -= 5;
//			}
//			while (cost >= 2)
//			{
//				sum++;
//				cost -= 2;
//			}
//			if (cost == 1)
//			{
//				sum++;
//			}
//
//		}
//
//		printf("%d\n", sum);
//
//
//	}
//
//	return 0;
//}

///********************
//问题 CN: Muniar的胡思乱写【1】—— 圆柱
//#include <stdio.h>
//
//const double PI = 3.14;
//
//int main()
//{
//	double d = 0;
//	double h = 0;
//	while (scanf("%lf %lf", &d, &h) != EOF)
//	{
//		double S = PI * d * d / 2 + PI * d * h;
//		double V = PI * d * d / 4 * h;
//		printf("%.2lf %.2lf\n", S, V);
//	}
//
//	return 0;
//}

//*********************************************
//问题 Z: WOWO爬水井                                 未知错误
//#include <stdio.h>
//
//int main()
//{
//	double height, up, down, fall;
//	while (scanf("%lf %lf %lf %lf",&height,&up,&down,&fall) != EOF)
//	{
//		double cur = 0;
//		double speed = up;
//		if (height + up + down + fall == 0)
//		{
//			break;
//		}
//
//		double step = up * fall / 100;
//		int day = 0;
//
//		while (1)
//		{
//			day++;
//			cur = cur + speed;
//			if (cur > height)
//			{
//				printf("success on day %d\n", day);
//				break;
//			}
//
//			speed -= step;
//			if (speed < 0)
//			{
//				speed = 0;
//			}
//
//			cur -= down;
//			if (cur < 0)
//			{
//				printf("failure on day %d\n", day);
//				break;
//			}
//		}
//
//	}
//	return 0;
//}

//**************************************************************
//问题 AC: 20级期中机试-小帅的沙漏（10分）
//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	for (int round = 0; round < n; round++)
//	{
//		int size = 0;
//		scanf("%d", &size);
//		//打印上盖子
//		for (int i = 0; i < size - 1; i++)
//		{
//			printf("-");
//		}
//		printf("\n");
//
//		printf("\\");
//		for (int i = 0; i < size - 3; i++) printf(" ");
//		printf("/\n");
//
//		for (int i = 0; i < size / 2 - 2; i++)
//		{
//			for (int j = 0; j < i + 1; j++) printf(" ");
//			printf("\\");
//			for (int j = 0; j < size-5 - i * 2; j++) printf("*");
//			printf("/\n");
//		}
//
//		for (int i = 0; i < size / 2 - 1; i++)
//		{
//			for (int j = 0; j < size/2-2 - i; j++) printf(" ");
//			printf("/");
//			for (int j = 0; j < i * 2 + 1; j++)
//			{
//				if (j == i)
//				{
//					printf("*");
//				}
//				else
//				{
//					printf(" ");
//				}
//			}
//			printf("\\\n");
//		}
//
//		for (int i = 0; i < size - 1; i++)
//		{
//			printf("-");
//		}
//		printf("\n\n");
//	}
//
//	return 0;
//}

//*************************************
//#include <stdio.h>
//
//int main()
//{
//	int x = 0;
//	while (scanf("%d", &x) != EOF)
//	{
//		if (x < 1)
//		{
//			printf("%d\n", x * x);
//		}
//		else if (1 <= x && x < 10)
//		{
//			printf("%d\n", 2 * x - 1);
//		}
//		else
//		{
//			printf("%d\n", 3 * x - 12);
//		}
//	}
//	return 0;
//}

//**********************
//问题 AE: 20级期中机试-小帅切西瓜（20分）
//#include <stdio.h>
//
//int main()
//{
//	int num = 0;
//	while (scanf("%d", &num) != EOF)
//	{
//		if (num % 2 == 0 && num>=4)
//		{
//			printf("YES\n");
//		}
//		else
//		{
//			printf("NO\n");
//		}
//	}
//	return 0;
//}

//******************************************
//问题 AF: 20级期中机试-小帅买包子（20分）
//#include <stdio.h>
//
//int main()
//{
//	int a, b, c, d, e, f;
//	while (scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f)!=EOF)
//	{
//		int money = a * 100 + b * 10 + c;
//		int cost = d * 100 + e * 10 + f;
//		printf("%d\n", money / cost);
//	}
//
//
//	return 0;
//}

//************************************
//问题 AG: 20级期中机试-小帅数CSU（20分）

#include <stdio.h>
#include <string.h>

int main()
{
	char arr[1000000] = { 0 };
	while (scanf("%s", arr) != EOF)
	{
		int C = 0;
		int S = 0;
		int U = 0;
		for (int i = 0; i < strlen(arr); i++)
		{
			if (arr[i] == 'C') C++;
			if (arr[i] == 'S') S++;
			if (arr[i] == 'U') U++;
		}

		int min = C;
		min = S < min ? S : min;
		min = U < min ? U : min;
		printf("%d\n", min);
	}
	return 0;
}