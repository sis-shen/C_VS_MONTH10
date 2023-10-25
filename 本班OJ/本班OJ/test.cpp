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
//		//if (!(height + up + down + fall))
//		//{
//		//	break;
//		//}
//
//		double step = up * fall / 100.0;
//		int day = 0;
//
//		while (height + up + down + fall)
//		{
//			day++;
//			cur = cur + speed;
//			if (cur - height >0)
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

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char arr[1000000] = { 0 };
//	while (scanf("%s", arr) != EOF)
//	{
//		int C = 0;
//		int S = 0;
//		int U = 0;
//		for (int i = 0; i < strlen(arr); i++)
//		{
//			if (arr[i] == 'C') C++;
//			if (arr[i] == 'S') S++;
//			if (arr[i] == 'U') U++;
//		}
//
//		int min = C;
//		min = S < min ? S : min;
//		min = U < min ? U : min;
//		printf("%d\n", min);
//	}
//	return 0;
//}

//***********************************************
//问题 AH: 22-循环-1-分数相加
//#include <stdio.h>
//
//int main()
//{
//	int deno1, deno2, member1, member2;
//	while (scanf("%d/%d+%d/%d", &member1, &deno1, &member2, &deno2) != EOF)
//	{
//		//相加
//		int new_deno = deno1 * deno2;
//		int new_member = member1 * deno2 + member2 * deno1;
//
//		//化简
//		if (new_member % new_deno == 0)
//		{
//			printf("%d\n", new_member / new_deno);
//			continue;
//		}
//		else
//		{
//			//寻找最大公约数
//			int common = 1;
//			for (int i = 1; i <= (new_deno < new_member ? new_deno : new_member); i++)
//			{
//				if (new_deno % i == 0 && new_member % i == 0)
//				{
//					common = i;
//				}
//			}
//
//			new_member /= common;
//			new_deno /= common;
//			printf("%d/%d\n", new_member, new_deno);
//		}
//	}
//	return 0;
//}

//***********************************************************
//问题 AI: 浩南有选择困难症（20分）
//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int city = 1;
//		int cost = 0;
//		int flag = 1;
//
//		scanf("%d", &cost);//获取第一个城市
//
//		int min = cost;
//
//		for (int i = 2; i <= n; i++)
//		{
//			scanf("%d", &cost);
//			if (min == cost)
//			{
//				flag = 0;
//			}
//			else if (cost < min)
//			{
//				flag = 1;
//				min = cost;
//				city = i;
//			}
//		}
//
//		if (flag) printf("%d\n", city);
//		else printf("Fail\n");
//		
//
//	}
//	return 0;
//}

//************************************
//问题 AJ: 矩阵转置（20分）
//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int arr[100][100] = { 0 };
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				scanf("%d", &arr[j][i]);
//			}
//		}
//
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				if (j) printf(" ");
//				printf("%d", arr[i][j]);
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//******************************************
//问题 AK: 无限整数序列（20分）
//#include <stdio.h>
//
//int main()
//{
//	int pos = 0;
//	while (scanf("%d", &pos) != EOF)
//	{
//		char str[10005] = { 0 };
//		int num = 0;
//		str[0] = '0';
//		int count = 0;
//		while (count < pos)
//		{
//			num++;
//			sprintf(str + count + 1, "%d", num);
//			int digit = 1;
//			int copy = num;
//			while (copy /= 10)
//			{
//				digit++;
//			}
//			count += digit;
//		}
//		printf("%d\n", str[pos]-48);
//	}
//
//	return 0;
//}

//****************************
//问题 AL: 20级期末机试1-玩骰子（10分）
//#include <stdio.h>
//
//int main()
//{
//	int T = 0;
//	scanf("%d", &T);
//	for (int round = 0; round < T; round++)
//	{
//		char arr[10] = { 0 };
//		int m = 0;
//		scanf("%s %d", arr, &m);
//
//		int cnt[7] = { 0 };
//		for (int i = 1; i < 7; i++)
//		{
//			if (arr[i - 1]-48 == 1)
//			{
//				for (int j = 1; j < 7; j++)
//				{
//					cnt[j]++;
//				}
//			}
//			else
//			{
//				cnt[arr[i-1]-48]++;
//			}
//		}
//
//		for (int i = 1; i <= m; i++)
//		{
//			int num, guess;
//			scanf("%d %d", &num, &guess);
//			if (cnt[guess] >= num)
//			{
//				printf("%d:true\n", i);
//			}
//			else
//			{
//				printf("%d:false\n", i);
//			}
//		}
//		printf("\n");
//
//
//	}
//	return 0;
//}

//****************************************************
//问题 AM: 20级期末机试1-幸运数（20分）
//#include <stdio.h>
//
//int isLucky(int x)
//{
//	if (x % 6 == 0) return 1;
//
//	int num = 0;
//	int count = 1;
//	while (count <= 3)
//	{
//		num = x % 10;
//		if (num == 6) return 1;
//		else
//		{
//			x /= 10;
//			count++;
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int cnt = 0;
//		int number = 1;
//		while (1)
//		{
//			if (isLucky(number))
//			{
//				cnt++;
//			}
//			if (cnt == n)
//			{
//				printf("%d\n", number);
//				break;
//			}
//
//			number++;
//		}
//	}
//	return 0;
//}

//**************************************
////问题 AN: 20级期末机试1-回文串（20分）
//#include <stdio.h>
//#include <string.h>
//
//int isPalindrome(char str[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		if (str[left] != str[right])
//		{
//			return 0;
//		}
//		left++;
//		right--;
//	}
//	return 1;
//}
//
//int main()
//{
//	char str[60];
//	while (~scanf("%s", str))
//	{
//		int sz = strlen(str);
//		if (!isPalindrome(str, sz))
//		{
//			printf("NO\n");
//		}
//		else
//		{
//			int cnt = 0;
//			int letter[30] = { 0 };
//			for (int i = 0; i < sz; i++)
//			{
//				letter[str[i] - 97]++;
//			}
//
//			for (int i = 0; i < 26; i++)
//			{
//				if (letter[i])
//				{
//					cnt++;
//				}
//			}
//
//			printf("YES %d\n", cnt);
//
//		}
//	}
//	return 0;
//}

//********************************************
//问题 AP: 20级期末机试1-评委打分（10分）
//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct player
//{
//	char number[4];
//	double score;
//}player;
//
//int cmp(const void* e1, const void* e2)
//{
//	double ret = *(double*)e1 - *(double*)e2;
//	if (ret > 0) return 1;
//	if (ret == 0) return 0;
//	if (ret < 0) return -1;
//}
//
//int cmp_player(const void* e1, const void* e2)
//{
//	player* E1 = (player*)e1;
//	player* E2 = (player*)e2;
//
//	if (E1->score == E2->score)
//	{
//		return atoi(E1->number) - atoi(E2->number);
//	}
//	else
//	{
//		if (E1->score > E2->score) return -1;
//		else return 1;
//	}
//}
//
//int main()
//{
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		player list[100] = { 0 };
//		//储存成绩
//		for (int i = 0; i < n; i++)
//		{
//			scanf("%s", &list[i].number);
//
//			double score[5] = { 0 };
//			for (int j = 0; j < 5; j++)
//			{
//				scanf("%lf", &score[j]);
//			}
//			qsort(score, 5, sizeof(double), cmp);
//
//			double sum = 0;
//
//			for (int j = 1; j < 4; j++)
//			{
//				sum += score[j];
//			}
//
//			list[i].score = sum / 3.0;
//			
//		}
//
//		qsort(list, n, sizeof(player), cmp_player);
//
//		for (int i = 0; i < n; i++)
//		{
//			printf("%s %.2lf\n", list[i].number, list[i].score);
//		}
//	}
//	return 0;
//}

//**************************************
//问题 AQ: 20级期末机试1-变数（20分）
//#include <stdio.h>
//
//int main()
//{
//	int num = 0;
//	while (~scanf("%d", &num))
//	{
//		if (num == 0) break;
//		int sum = 0;
//		while (num)
//		{
//			if (0 < num % 16 && num % 16 <= 9)
//			{
//				sum += num % 16;
//			}
//			num /= 16;
//		}
//		printf("%d\n", sum);
//	}
//
//	return 0;
//}

//*********************************
//问题 AR: 20级期末机试2-对称画（20分）
//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	int junk = 0;
//	scanf("%d", &junk);
//	while (~scanf("%d", &n))
//	{
//		int flag = n % 2;
//		for (int i = 1; i <= n; i++)
//		{
//			for (int j = 1; j <= 2 * n - 1; j++)
//			{
//				if (n - i+1 <= j && j <= n)
//				{
//					printf("%c", 96 + j - (n - i));
//				}
//				else if (n < j && j <= n + i-1)
//				{
//					printf("%c", 96 + n + i - j);
//				}
//
//				else printf(" ");
//			}
//			printf("\n");
//		}
//
//		for (int i = n; i >=1 ; i--)
//		{
//			for (int j = 1; j <= 2 * n - 1; j++)
//			{
//				if (n - i + 1 == j || j == n + i - 1)
//				{
//					printf("%c", 'a');
//				}
//
//
//				else printf(" ");
//			}
//			printf("\n");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//**************************************
//问题 AS: 20级期末机试2-素数串（10分）
//#include <stdio.h>
//#include <string.h>
//#include <math.h>
//
//int is_prime(int x)
//{
//	if ( x == 1) return 0;
//	if (x == 2) return 1;
//	for (int i = 2; i < x; i++)
//	{
//		if (x % i == 0) return 0;
//	}
//	return 1;
//}
//
//int main()
//{
//	char str[1005];
//	while (~scanf("%s", str))
//	{
//		int last = 0;
//		int sz = strlen(str);
//		int flag = 0;
//
//		for (int i = 0; i < strlen(str)/3*3 ; i+=3)
//		{
//			int num = (str[i] - 48) * 100 + (str[i + 1] - 48) * 10 + str[i + 2] - 48;
//			if (!is_prime(num))
//			{
//				flag = 1;
//				break;
//			}
//		}
//
//		for (int i = strlen(str) / 3 * 3; i < strlen(str); i++)
//		{
//			last = last * 10 + str[i] - 48;
//		}
//		if (flag || !is_prime(last))
//		{
//			printf("NO\n");
//			continue;
//		}
//		else printf("YES\n");
//	}
//	return 0;
//}

//**********************************************
//问题 AT: 20级期末机试2-光荣榜（10分）

//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct Stu
//{
//	char name[15];
//	int score;
//	int EN;
//	int CN;
//	int Math;
//}Stu;
//
//int cmpByName(char* str1, char* str2)
//{
//	int cur = 0;
//	while (str1[cur] == str2[cur])
//	{
//		cur++;
//	}
//
//	return str1[cur] - str2[cur];
//}
//
//int cmpByscore(const void* e1, const void* e2)
//{
//	Stu* p1 = (Stu*)e1;
//	Stu* p2 = (Stu*)e2;
//
//	if (p1->score != p2->score)
//	{
//		return p2->score - p1->score;
//	}
//	else
//	{
//		return cmpByName(p1->name, p2->name);
//	}
//}
//
//int cmpByCN(const void* e1, const void* e2)
//{
//	Stu* p1 = (Stu*)e1;
//	Stu* p2 = (Stu*)e2;
//
//	if (p1->CN != p2->CN)
//	{
//		return p2->CN - p1->CN;
//	}
//	else
//	{
//		return cmpByName(p1->name, p2->name);
//	}
//}
//
//int cmpByMath(const void* e1, const void* e2)
//{
//	Stu* p1 = (Stu*)e1;
//	Stu* p2 = (Stu*)e2;
//
//	if (p1->Math != p2->Math)
//	{
//		return p2->Math - p1->Math;
//	}
//	else
//	{
//		return cmpByName(p1->name, p2->name);
//	}
//}
//
//int cmpByEN(const void* e1, const void* e2)
//{
//	Stu* p1 = (Stu*)e1;
//	Stu* p2 = (Stu*)e2;
//
//	if (p1->EN != p2->EN)
//	{
//		return p2->EN - p1->EN;
//	}
//	else
//	{
//		return cmpByName(p1->name, p2->name);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		Stu Lst[105] = { 0 };
//		for (int i = 0; i < n; i++)
//		{
//			scanf("%s", Lst[i].name);
//			scanf("%d %d %d", &Lst[i].CN, &Lst[i].Math, &Lst[i].EN);
//			Lst[i].score = Lst[i].CN + Lst[i].Math + Lst[i].EN;
//		}
//
//		qsort(Lst, n, sizeof(Stu), cmpByscore);
//		for (int i = 0; i < 3; i++)
//		{
//			printf("%s %d\n", Lst[i].name, Lst[i].score);
//		}
//		printf("\n");
//
//		qsort(Lst, n, sizeof(Stu), cmpByCN);
//		for (int i = 0; i < 3; i++)
//		{
//			printf("%s %d\n", Lst[i].name, Lst[i].CN);
//		}
//		printf("\n");
//
//		qsort(Lst, n, sizeof(Stu), cmpByMath);
//		for (int i = 0; i < 3; i++)
//		{
//			printf("%s %d\n", Lst[i].name, Lst[i].Math);
//		}
//		printf("\n");
//
//		qsort(Lst, n, sizeof(Stu), cmpByEN);
//		for (int i = 0; i < 3; i++)
//		{
//			printf("%s %d\n", Lst[i].name, Lst[i].EN);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//*************************************************
//问题 AU: 20级期末机试2-好数对（20分）
//#include <stdio.h>
//
//int goodNum(int x,int y)
//{
//	if (x * y % (x + y) == 0) return 1;
//	else return 0;
//}
//
//int main()
//{
//	int n = 0;
//	
//	while (~scanf("%d", &n))
//	{
//		int fix = 0;
//		int count = 0;
//		for (int i = 1; i <= n; i++)
//		{
//			for (int j = i+1; j <= n; j++)
//			{
//				if (goodNum(i, j)) count++;
//			}
//		}
//
//		printf("%d\n", count);
//	}
//	return 0;
//}

//**************************************
//问题 AV: 20级期末机试2-过元旦（20分）
#include <stdio.h>

int is_leep(int year)
{
	if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) return 1;
	else return 0;
}

int main()
{
	int T = 0;
	for (int round = 0; round < T; round++)
	{
		int year, month, day;
		int sum = 1;
		for (int i = year; i < 2021; i++)
		{
			if (is_leep(i))
			{
				sum += 366;
			}
			else
			{
				sum += 365;
			}
		}


	}

	return 0;
}