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
//		for (int i = 2; i <= sqrt(n); i++)
//		{
//			//��֪n�������������Ҿ�Ϊ����
//			if (n % i == 0)//���ҵ���С������
//			{
//				printf("%d\n", n / i);
//				break;
//			}
//		}
//	}
//	return 0;
//}
//************************************
//���� H: 22-ѭ��-2-����n��     
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
//
//		while (pow(3, ret) < num)
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
//���� R: ���˶�
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
////���� S: 22-ѭ��-2-����
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
//���� W: 22-ѡ��-2-���ʽֵ
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
//���� Y: 22-ѭ��-1-������
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
//���� CN: Muniar�ĺ�˼��д��1������ Բ��
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
//���� Z: WOWO��ˮ��                                 δ֪����
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
//���� AC: 20�����л���-С˧��ɳ©��10�֣�
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
//		//��ӡ�ϸ���
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
//���� AE: 20�����л���-С˧�����ϣ�20�֣�
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
//���� AF: 20�����л���-С˧����ӣ�20�֣�
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
//���� AG: 20�����л���-С˧��CSU��20�֣�

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
//���� AH: 22-ѭ��-1-�������
//#include <stdio.h>
//
//int main()
//{
//	int deno1, deno2, member1, member2;
//	while (scanf("%d/%d+%d/%d", &member1, &deno1, &member2, &deno2) != EOF)
//	{
//		//���
//		int new_deno = deno1 * deno2;
//		int new_member = member1 * deno2 + member2 * deno1;
//
//		//����
//		if (new_member % new_deno == 0)
//		{
//			printf("%d\n", new_member / new_deno);
//			continue;
//		}
//		else
//		{
//			//Ѱ�����Լ��
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
//���� AI: ������ѡ������֢��20�֣�
#include <stdio.h>

int main()
{
	int n = 0;
	while (scanf("%d", &n) != EOF)
	{
		int city = 1;
		int cost = 0;
		int flag = 1;

		scanf("%d", &cost);//��ȡ��һ������

		int min = cost;

		for (int i = 2; i <= n; i++)
		{
			scanf("%d", &cost);
			if (min == cost)
			{
				flag = 0;
			}
			else if (cost < min)
			{
				flag = 1;
				min = cost;
				city = i;
			}
		}

		if (flag) printf("%d\n", city);
		else printf("Fail\n");
		

	}
	return 0;
}

//************************************
//���� AJ: ����ת�ã�20�֣�
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
//���� AK: �����������У�20�֣�
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
//			//ƴһ���㹻�� ��������
//			num++;
//			sprintf(str + count + 1, "%d", num);//��һλΪ0��ʹĿ���±���pos��Ӧ
//			int digit = 1;
//			int copy = num;
//			while (copy /= 10)//������μ��˼�λ���ֽ�ȥ
//			{
//				digit++;
//			}
//			count += digit;
//		}
//		printf("%c\n", str[pos]);//ֱ�Ӵ�ӡ�ַ�
//	}
//
//	return 0;
//}

//****************************
//���� AL: 20����ĩ����1-�����ӣ�10�֣�
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
//���� AM: 20����ĩ����1-��������20�֣�
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
////���� AN: 20����ĩ����1-���Ĵ���20�֣�
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
//���� AP: 20����ĩ����1-��ί��֣�10�֣�
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
//		//����ɼ�
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
//���� AQ: 20����ĩ����1-������20�֣�
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
//���� AR: 20����ĩ����2-�Գƻ���20�֣�
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
//���� AS: 20����ĩ����2-��������10�֣�
//#include <stdio.h>
//#include <string.h>
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
//int main()
//{
//	char str[10000] = { 0 };
//	while (scanf("%s", str)!= EOF)
//	{
//		int sz = strlen(str);
//		int flag = 0;
//
//		//����
//		if ((sz == 1 && str[0] == '0') || str[0] == '-')
//		{
//			printf("NO\n");
//			break;
//		}
//		//����
//
//		for (int i = 0; i < (strlen(str) / 3) * 3; i += 3)
//		{
//			int num = (str[i] - '0') * 100 + (str[i + 1] - '0') * 10 + str[i + 2] - '0';
//			if (!isprime(num))
//			{
//				flag = 1;
//				break;
//			}
//		}
//
//		int last = 0;
//
//		for (int i = (strlen(str) / 3) * 3; i < strlen(str); i++)
//		{
//			last = last * 10 + (str[i] - '0');
//		}
//
//		if (flag || (!isprime(last)))
//		{
//			printf("NO\n");
//		}
//		else
//		{
//			printf("YES\n");
//		}
//
//	}
//	return 0;
//}

//**********************************************
//���� AT: 20����ĩ����2-���ٰ�10�֣�

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
//���� AU: 20����ĩ����2-�����ԣ�20�֣�
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
//���� AV: 20����ĩ����2-��Ԫ����20�֣�
//#include <stdio.h>
//
//int is_leep(int year)
//{
//	if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) return 1;
//	else return 0;
//}
//
//int main()
//{
//	int T = 0;
//	scanf("%d", &T);
//	for (int round = 0; round < T; round++)
//	{
//		int year, month, day;
//		scanf("%d-%d-%d", &year, &month, &day);
//		int sum = 1;
//
//		int arr_month[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//
//		//�Ȱ������Ƶ��µ�
//		if(year == 2021)
//		{ 
//			printf("%d\n", sum);
//			continue;
//		}
//		if (month == 2 && is_leep(year)) sum += 1;
//		sum += arr_month[month] - day +1;
//
//		//�������Ƶ����
//		for (int i = month + 1; i <= 12; i++)
//		{
//			if (i == 2 && is_leep(year)) sum += 1;
//			sum += arr_month[i];
//		}
//
//		//������
//
//		for (int i = year + 1; i < 2021; i++)
//		{
//			if (is_leep(i)) sum += 366;
//			else sum += 365;
//		}
//
//		
//
//		printf("%d\n", sum);
//
//	}
//
//	return 0;
//}

//********************************************************
//���� AW: 20����ĩ����2-�����У�20�֣�
//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		int arr[120] = { 0 };
//		for (int i = 0; i < n; i++)
//		{
//			scanf("%d", &arr[i]);
//		}
//
//		if (n % 2 == 0)
//		{
//			printf("No\n");
//		}
//		else if (arr[0] % 2 == 0 || arr[n-1] %2 == 0)
//		{
//			printf("No\n");
//
//		}
//		else
//		{
//			printf("Yes\n");
//		}
//	}
//
//	return 0;
//}

//*****************************************
//���� AX: ����ʱ�⵹����20�֡�

//#include <stdio.h>
//
//int main()
//{
//	int hour, min, sec, sum;
//	while (scanf("%d %d %d %d", &hour, &min, &sec, &sum) != EOF)
//	{
//		sec -= sum;
//		while (sec < 0)
//		{
//			sec += 60;
//			min--;
//		}
//		while (min < 0)
//		{
//			min += 60;
//			hour--;
//		}
//		while (hour < 0)
//		{
//			hour += 24;
//		}
//		printf("%02d:%02d:%02d\n", hour, min, sec);
//	}
//
//	return 0;
//}

//***********************************************
//���� AY: 21�����л���-���ٵıʣ�20��
//#include <stdio.h>
//
//int main()
//{
//	int money = 0;
//	while (~scanf("%d", &money))
//	{
//		int cnt = 0;
//
//		int sum = 0;
//		while (money >= 38)
//		{
//			money -= 38;
//			cnt++;
//			sum += 38;
//		}
//		while (money >= 18)
//		{
//			money -= 18;
//			cnt++;
//			sum += 18;
//		}
//		while (money >= 8)
//		{
//			money -= 8;
//			cnt++;
//			sum += 8;
//		}
//
//		if (sum > 68)
//		{
//			cnt++;
//		}
//
//		printf("%d\n",cnt);
//	}
//
//	return 0;
//}

//***************************************
//���� CE: 22-��������-1-�����
//#include <stdio.h>
//
//int main()
//{
//	int h = 0;
//	while (~scanf("%d", &h))
//	{
//		printf("%.1lf\n", h * 2.54);
//	}
//	return 0;
//}

//*******************************
//���� CG: 22-ѭ��-2-�ҳ������
//#include <stdio.h>
//
//int main()
//{
//	int num = 0;
//	int max = 0;
//
//	while (~scanf("%d", &num))
//	{
//		if (num > max)
//		{
//			max = num;
//		}
//		if (num == 0)
//		{
//			printf("%d\n", max);
//			max = 0;
//		}
//	}
//
//	return 0;
//}

//**************************************'
//���� AZ: 21�����л���-����������20�֣�
//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		int sum = 0;
//		char str[1008] = { 0 };
//
//		scanf("%s", str);
//		for (int i = 0; i < n; i++)
//		{
//
//
//			if (str[i] == 'L') sum--;
//			else sum++;
//		}
//
//		char dst[] = {'N','E','S','W'};
//		while (sum >= 4) sum -= 4;
//		while (sum < 0) sum += 4;
//		printf("%c\n", dst[sum]);
//	}
//	return 0;
//}

//**********************************************
//���� BA: 21�����л���-�о�������20�֣�
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char str[1008] = { 0 };
//	while (scanf("%s", str) != EOF)
//	{
//		for (int i = 0; i < strlen(str); i++)
//		{
//			if (str[i] == 'T')
//			{
//				str[i] = 'U';
//			}
//		}
//
//		printf("%s\n", str);
//
//		for (int i = 0; i < strlen(str); i++)
//		{
//			str[i] = 0;
//		}
//	}
//	return 0;
//}

//***********************************************
//���� BB: 21�����л���-��ԭ���У�20�֣�
//#include <stdio.h>
//
//int main()
//{
//	long long num = 0;
//
//	while (scanf("%lld", &num) != EOF)
//	{
//		long long cnt = 2;
//		long long cur = 2;
//		long long prev = 1;
//		while (cur<num)
//		{
//			//����
//			long long tmp = cur;
//			cur = cur + prev;
//			prev = tmp;
//			cnt++;
//		}
//
//		if (cur == num)
//		{
//			printf("%lld\n", cnt);
//		}
//		else
//		{
//			printf("0\n");
//		}
//	}
//
//	return 0;
//}

//***************************************************
//���� BD: 21�����л���-����������10�֣�
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char num[2000] = { 0 };
//	while (scanf("%s",num) != EOF)
//	{
//		int sign = 0;
//		if (num[0] == '-') sign = 1;
//		char reverse[2000] = { 0 };
//		strcpy(reverse, num);
//		char sum[2000] = { 0 };
//
//		int left = sign;
//		int right = strlen(reverse) - 1;
//		while (left < right)
//		{
//			char tmp = reverse[left];
//			reverse[left] = reverse[right];
//			reverse[right] = tmp;
//			left++;
//			right--;
//		}
//
//		char output[2000] = { 0 };
//		int flag = 0;
//		for (int i = strlen(reverse)+1;i>= 2+sign;i--)
//		{
//			int result = num[i - 2] - 48 + reverse[i - 2] - 48 + flag;
//			if (result >= 10)
//			{
//				result -= 10;
//				flag = 1;
//			}
//			else flag = 0;
//
//			output[i-sign] = result + 48;
//		}
//		if (flag)
//		{
//			output[1] = '1';
//			if (sign)
//			{
//				output[0] = '-';
//				printf("%s\n", output);
//			}
//			else
//			{
//				printf("%s\n", output+1);
//			}
//		}
//		else
//		{
//			if (sign)
//			{
//				output[1] = '-';
//				printf("%s\n", output + 1);
//			}
//			else
//			{
//
//				printf("%s\n", output + 2);
//			}
//		}
//		for (int i = 0; i < strlen(num); i++)
//		{
//			num[i] = '\0';
//		}
//	}
//	return 0;
//}

//*************************************
//���� BF: 21����ĩ����-������磨20�֣�
//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		for (int i = 1; i <= n; i++)
//		{
//			for (int j = 1; j <= n+1; j++)
//			{
//				if (j == n +1 + 1 - i)
//				{
//					printf("*");
//				}
//				else
//				{
//					printf(" ");
//				}
//			}
//			printf("\n");
//		}
//
//
//
//		for (int i = 0; i < n + 1; i++)
//		{
//			printf("*");
//		}
//		printf("\n");
//
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 1; j <= n + 1; j++)
//			{
//				if (j == n - i)
//				{
//					printf("*");
//				}
//				else
//				{
//					printf(" ");
//				}
//			}
//			printf("\n");
//		}
//
//		printf("\n");
//
//	}
//
//	return 0;
//}

//*******************************************
//���� BG: 21����ĩ����-�������ã�20�֣�
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char str[30] = { 0 };
//	while (scanf("%s", str) != EOF)
//	{
//		if (strlen(str) < 8)
//		{
//			printf("no\n");
//			continue;
//		}
//
//		int flag[4] = { 0 };
//		for (int i = 0; i < strlen(str); i++)
//		{
//			if ('0' <= str[i] && str[i] <= '9') flag[0] = 1;
//			if ('a' <= str[i] && str[i] <= 'z') flag[1] = 1;
//			if ('A' <= str[i] && str[i] <= 'Z') flag[2] = 1;
//			if (str[i] == '!' || str[i] == '@' || str[i] == '#' || str[i] == '$'
//				|| str[i] == '*' || str[i] == '~') flag[3] = 1;
//
//
//		}
//		
//		if (flag[0] + flag[1] + flag[2] + flag[3] >= 3)
//		{
//			printf("yes\n");
//		}
//		else
//		{
//			printf("no\n");
//		}
//
//
//		
//
//		//for (int i = 0; i < strlen(str); i++)
//		//{
//		//	str[i] = '\0';
//		//}
//	}
//
//	return 0;
//}

//***********************************************************
//���� BH: 21����ĩ����-α�����У�20�֣�              ��֭�𰸴���
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
//int is_fake(int num)
//{
//	while (num)
//	{
//		int n = num % 10;
//		if (n == 0 || n == 1 || n == 4 || n == 6 || n == 8 || n == 9)
//		{
//			return 0;
//		}
//		num /= 10;
//	}
//	
//	return 1;
//}
//
//int main()
//{
//	int arr[5009] = { 0 };
//	//����α�����б�
//	int cur = 2;
//	int cnt = 1;
//
//	while (cnt < 5001)
//	{
//		if (is_prime(cur) || is_fake(cur))
//		{
//			arr[cnt++] = cur++;
//		}
//		else
//		{
//			cur++;
//		}
//	}
//	
//	int k = 0;
//
//	while (~scanf("%d", &k) )
//	{
//		printf("%d\n", arr[k]);
//	}
//
//	return 0;
//}

//****************************************************
//���� BJ: 21����ĩ����-��ӰѰ�٣�10�֣�     ��������
//#include <stdio.h>
//
//
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		char name[1005] = { 0 };
//
//	}
//
//
//	return 0;
//}

//***********************************************
//���� BK: 21������-ʱ���ʾ��20�֣�
//#include <stdio.h>
//
//int main()
//{
//	int sec = 0;
//	while (~scanf("%d", &sec))
//	{
//		int min = 0;
//		int hour = 0;
//		while (sec >= 60)
//		{
//			sec -= 60;
//			min++;
//		}
//		while (min >= 60)
//		{
//			min -= 60;
//			hour++;
//		}
//
//		printf("%d:%d:%d\n", hour, min, sec);
//	}
//
//	return 0;
//}

//**************************************
//���� BL: 21������-�������У�20�֣�
//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int arr[105] = { 0 };
//		for (int i = 0; i < n; i++)
//		{
//			scanf("%d", &arr[i]);
//		}
//
//		if (n % 2 == 0)
//		{
//			printf("NO\n");
//		}
//		else
//		{
//			int sum = 0;
//			for (int i = 0; i < n; i++)
//			{
//				sum += arr[i];
//			}
//
//			if (sum % 2 == 0)
//			{
//				printf("NO\n");
//			}
//			else
//			{
//				printf("YES\n");
//			}
//		}
//
//	}
//
//	return 0;
//}

//********************************
//���� BM: 21������-�����㷨��20�֣�
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char password[1008] = { 0 };
//	while (~scanf("%s", password))
//	{
//		for (int i = strlen(password) - 1; i >= 0; i--)
//		{
//			printf("%c", password[i]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//**********************************
//���� BN: 21������-��ĸͼ�Σ�20�֣�
//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 1; j <= 2 * n - 1; j++)
//			{
//				if (n - i <= j && j <= n)
//				{
//					printf("%c", 'a' + n - j);
//				}
//				else if (n < j && j <= n + i)
//				{
//					printf("%c", 'a' + j - n);
//				}
//				else if(j<n-i)
//				{
//					printf(" ");
//				}
//			}
//			printf("\n");
//		}
//	}
//
//	return 0;
//}

//*************************************
//���� BO: 21������-��λ��ӣ�10�֣�
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char a[100000];
//	char b[100000];
//	while (~scanf("%s %s", a, b))
//	{
//		if (strlen(b) >= strlen(a))
//		{
//
//			int big = strlen(b) - 1;
//			for (int i = strlen(a)-1; i >= 0; i--)//i��a���±�
//			{
//				int sum = b[big] - '0' + a[i] - '0';
//				sum %= 10;
//				b[big--] = sum + '0';
//			}
//
//			int cnt = 0;
//
//			while (b[cnt] == '0' && cnt< strlen(b) - 1)
//			{
//				cnt++;
//			}
//
//			printf("%s\n", b+cnt);
//		}
//		else
//		{
//			int big = strlen(a) - 1;
//			for (int i = strlen(b) - 1; i >= 0; i--)//i��a���±�
//			{
//				int sum = a[big] - '0' + b[i] - '0';
//				sum %= 10;
//				a[big--] = sum + '0';
//			}
//
//			int cnt = 0;
//
//			while (a[cnt] == '0' && cnt < strlen(a) - 1)
//			{
//				cnt++;
//			}
//
//			printf("%s\n", a + cnt);
//		}
//	}
//
//
//	return 0;
//}

//*******************************************
//���� BP: 21������-���Բ�����10�֣�                       
//#include <stdio.h>
//#include <stdlib.h>
//
//
//typedef struct Stu
//{
//	int num;
//	int score;
//	int math;
//	int eng;
//	int C;
//}Stu;
//
//int cmp(const void* e1, const void* e2)
//{
//	Stu* E1 = (Stu*)e1;
//	Stu* E2 = (Stu*)e2;
//	if (E1->score != E2->score)
//	{
//		return E2->score - E1->score;
//	}
//	else
//	{
//		return E1->num - E2->num;
//	}
//}
//
//int main()
//{
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		Stu lst[1000] = { 0 };
//		for (int i = 0; i < n; i++)
//		{
//			scanf("%d %d %d %d",&lst[i].num, &lst[i].math, &lst[i].eng, &lst[i].C);
//			lst[i].score = lst[i].math + lst[i].eng + lst[i].C;
//		}
//
//		qsort(lst, n, sizeof(Stu), cmp);
//
//		//������
//		printf("BEST\n");
//
//		for (int i = 0; i < n - 1; i++)
//		{
//			printf("%d %d %d %d %d\n", lst[i].num, lst[i].score, lst[i].math, lst[i].eng, lst[i].C);
//
//			if (lst[i].score != lst[i + 1].score)
//			{
//				break;
//			}
//		}
//		if (n == 1)
//		{
//			printf("%d %d %d %d %d\n", lst[0].num, lst[0].score, lst[0].math, lst[0].eng, lst[0].C);
//		}
//
//		//������
//
//		printf("WORST\n");
//		for (int i = n-1; i >=1; i--)
//		{
//			printf("%d %d %d %d %d\n", lst[i].num, lst[i].score, lst[i].math, lst[i].eng, lst[i].C);
//
//			if (lst[i].score != lst[i - 1].score)
//			{
//				break;
//			}
//		}
//
//		if (n == 1)
//		{
//			printf("%d %d %d %d %d\n", lst[0].num, lst[0].score, lst[0].math, lst[0].eng, lst[0].C);
//		}
//
//		printf("\n");
//	}
//	return 0;
//}

//*****************************************
//���� BQ: ���ĵ�С������Ȥ����Ϸ                 ʱ�䳬��
//#include <stdio.h>
//#include <stdlib.h>
//
//int cmp(const void* e1, const void* e2)
//{
//	return *(int*)e2 - *(int*)e1;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int* arr = (int*)malloc(sizeof(int) * n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	int sum = 0;
//	while (n > 1)
//	{
//		qsort(arr, n, sizeof(int), cmp);
//		sum += arr[n - 1] + arr[n - 2];
//		arr[n - 2] = arr[n - 1] + arr[n - 2];
//		n--;
//	}
//
//	printf("%d", sum);
//
//	return 0;
//}

//******************************************
//���� BR: �������ʽ��10�֣�
//#include <stdio.h>
//
//int main()
//{
//	int a0, a1, a2, a3, a4;
//	scanf("%d %d %d %d %d", &a0, &a1, &a2, &a3, &a4);
//	int n = 0;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		int sum = 0;
//		int arr[5] = { 0 };
//		for (int j = 0; j < 5; j++)
//		{
//			int x=0;
//			scanf("%d", &x);
//			sum += a0 + a1 * x + a2 * x * x + a3 * x * x * x + a4 * x * x * x * x;
//		}
//		printf("%d\n", sum);
//	}
//	return 0;
//}

//******************************************
//���� BS: �ݴμ��㣨20�֣�
//#include <stdio.h>
//
//int main()
//{
//	int T = 0;
//	scanf("%d", &T);
//	for (int i = 0; i < T; i++)
//	{
//		long long x;
//		int y;
//		
//		scanf("%lld %d", &x,& y);
//		if (x == 1)
//		{
//			printf("1\n");
//			continue;
//		}
//
//
//		long long ret = 1;
//		while (y)
//		{
//			if (y % 2 == 1)
//			{
//				ret = ret * x % 998244353;
//			}
//
//			y /= 2;
//			x = x * x % 998244353;
//		}
//		printf("%lld\n", ret);
//	}
//	return 0;
//}

//**************************************
//���� BW: 22-�������-1-���Գɼ�
//#include <stdio.h>
//
//int main()
//{
//	int score = 0;
//	while (~scanf("%d", &score))
//	{
//		if (91 <= score && score <= 100)
//		{
//			printf("A\n");
//		}
//		else if (81 <= score)
//		{
//			printf("B\n");
//		}
//		else if (score >= 71)
//		{
//			printf("C\n");
//		}
//		else if (score >= 60)
//		{
//			printf("D\n");
//		}
//		else
//		{
//			printf("F\n");
//		}
//	}
//	return 0;
//}

//*********************************
//���� BX: 22-ѭ��-2-��Ϻ�
//#include <stdio.h>
//
//int main()
//{
//	int m, n;
//	while (~scanf("%d %d", &m, & n))
//	{
//		long long sum1 = 0;
//		long long sum2 = 0;
//		for (int i = m; i <= n; i++)
//		{
//			if (i % 2 == 0)
//			{
//				sum2 += i * i * i;
//			}
//			else
//			{
//				sum1 += i * i;
//			}
//		}
//		printf("%lld %lld\n", sum1, sum2);
//	}
//
//	return 0;
//}

//****************************************
//���� BY: 22-�������-1-��ӡ
//#include <stdio.h>
//
//int main()
//{
//	double num = 0;
//	while (~scanf("%lf", &num))
//	{
//		printf("%-8.3lf %6.0lf\n", num, num);
//	}
//
//	return 0;
//}

//*************************************
//���� BZ: 22-�������-2-���������ĳ���
//#include <stdio.h>
//
//int main()
//{
//	int a, b;
//	while (~scanf("%d %d", &a, &b))
//	{
//		printf("%d %d\n", a / b, a % b);
//	}
//
//	return 0;
//}

//***********************************
//���� CA: 22-ѡ��ṹ-2-�����
//#include <stdio.h>
//
//int main()
//{
//	int max = 0;
//	while (~scanf("%d", &max))
//	{
//		int num = 0;
//		scanf("%d", &num);
//		max = num > max ? num : max;
//		scanf("%d", &num);
//		max = num > max ? num : max;
//
//		printf("%d\n", max);
//
//	}
//
//	return 0;
//}

//************************************
//���� CB: 22-ѡ��ṹ-2-������
//#include <stdio.h>
//
//int main() {
//    int a, b, c;
//    while (scanf("%d %d %d", &a, &b, &c) != EOF) { 
//        if ((a + b > c) && (a + c > b) && (b + c > a))
//        {
//            printf("yes\n");
//        }
//        else
//        {
//            printf("no\n");
//        }
//    }
//    return 0;
//}

//*****************************
//���� CC: 22-�������-3-���ܵ�����ʱ��
//#include <stdio.h>
//
//int main()
//{
//	char time[10] = { 0 };
//	while (~scanf("%s", time))
//	{
//		//����Сʱ
//		if (time[0] == '?')
//		{
//			if (time[1] == '?')
//			{
//				time[0] = '2';
//				time[1] = '3';
//			}
//			else if (time[1] <= '3')
//			{
//				time[0] = '2';
//			}
//			else
//			{
//				time[0] = '1';
//			}
//		}
//		else if (time[1] == '?')
//		{
//			if (time[0] == '2')
//			{
//				time[1] = '3';
//			}
//			else
//			{
//				time[1] = '9';
//			}
//		}
//
//		//��
//		if (time[3] == '?')
//		{
//			time[3] = '5';
//		}
//		if (time[4] == '?')
//		{
//			time[4] = '9';
//		}
//
//		printf("%s\n", time);
//	}
//
//	return 0;
//}

//***********************************************************
//���� CD: 22-�������-3-7���ֵĴ���
//#include <stdio.h>
//
//int main()
//{
//	int L, R;
//	while (~scanf("%d %d", &L, &R))
//	{
//		int cnt = 0;
//		for (int i = L; i <= R; i++)
//		{
//			int copy = i;
//			while (copy)
//			{
//				if (copy % 10 == 7)
//				{
//					cnt++;
//				}
//				copy /= 10;
//			}
//		}
//		printf("%d\n", cnt);
//	}
//
//	return 0;
//}

//*********************************
//���� CF: 22-��������-2-�������
//#include <stdio.h>
//
//int main()
//{
//	double bei = 0;
//	while (~scanf("%lf", &bei))
//	{
//		printf("%.3lf\n", bei / 2.0);
//		printf("%.3lf\n", bei *4.0);
//		printf("%.3lf\n", bei * 8.0);
//		printf("%.3lf\n", bei *24.0);
//
//
//	}
//	return 0;
//}

//**********************************
//���� CH: 22-ѭ��-1-ż��ƽ��ֵ
//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	for (int i = 2; i * i <= n; i += 2)
//	{
//		printf("%d\n", i * i);
//	}
//	return 0;
//}

//*************************************
//���� CI: 22-ѭ��-1-��Ȼ��e�Ľ��Ƽ���
//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	int deno = 1;
//	double sum = 1;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		deno *= i;
//		sum += 1.0 / deno;
//	}
//
//	printf("%lf\n", sum);
//	return 0;
//}

//**********************************
//���� CJ: 22-ѭ��-1-���������ϰ2
//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		int a, b;
//		scanf("%d %d", &a, &b);
//		printf("%d\n", a + b);
//	}
//
//	return 0;
//}

//*************************************
//���� CK: 22-ѭ��-1-���������ϰ3
//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	while(1)
//	{
//		int a, b;
//		scanf("%d %d", &a, &b);
//		if (a + b == 0) break;
//		printf("%d\n", a + b);
//	}
//
//	return 0;
//}

//*************************************
//���� CL: 22-ѭ��-1-���������ϰ4
//#include <stdio.h>
//
//int main()
//{
//	while (1)
//	{
//		int n = 0;
//		scanf("%d", &n);
//		if (n == 0) break;
//
//		int sum = 0;
//		for (int i = 0; i < n; i++)
//		{
//			int num = 0;
//			scanf("%d", &num);
//			sum += num;
//		}
//		printf("%d\n", sum);
//	}
//
//
//	return 0;
//}

//*****************************************
//���� CM: 22-ѭ��-1-���������ϰ5
//#include <stdio.h>
//
//int main()
//{
//	int T = 0;
//	scanf("%d", &T);
//	for(int round = 0;round<T;round++)
//	{
//		int n = 0;
//		scanf("%d", &n);
//
//		int sum = 0;
//		for (int i = 0; i < n; i++)
//		{
//			int num = 0;
//			scanf("%d", &num);
//			sum += num;
//		}
//		printf("%d\n\n", sum);
//	}
//
//
//	return 0;
//}

//***********************
//���� CO: ��������20�֣�
//#include <stdio.h>
//#include <stdlib.h>
//
//int cmp(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int odd[10000] = { 0 };
//		int even[10000] = { 0 };
//
//		int curO = 0;
//		int curE = 0;
//
//		for (int i = 0; i < n; i++)
//		{
//			int num = 0;
//			scanf("%d", &num);
//			if (num % 2 == 0)
//			{
//				even[curE] = num;
//				curE++;
//			}
//			else
//			{
//				odd[curO] = num;
//				curO++;
//			}
//		}
//
//		if (curE > 0) qsort(even, curE + 1, sizeof(int), cmp);
//		if (curO > 0) qsort(odd, curO + 1, sizeof(int), cmp);
//
//		for (int i = 1; i <= curO; i++)
//		{
//			printf("%d ", odd[i]);
//		}
//		printf("\n");
//		for (int i = 1; i <= curE; i++)
//		{
//			printf("%d ", even[i]);
//		}
//		printf("\n\n");
//	}
//
//	return 0;
//}

//**************************************
//���� CQ: ʱ�Ӽӷ���20�֣�
//#include <stdio.h>
//
//int main()
//{
//	int h, m, s, n;
//	while (~scanf("%d:%d:%d+%d", &h, &m, &s, &n))
//	{
//		s += n;
//		while (s >= 60)
//		{
//			s -= 60;
//			m++;
//		}
//		while (m >= 60)
//		{
//			m -= 60;
//			h++;
//		}
//		h %= 24;
//
//		printf("%02d:%02d:%02d\n",h, m, s);
//	}
//
//	return 0;
//}

//**********************
//���� CU: �ж�IP��ַ��20�֣�
//#include <stdio.h>
//
//int main()
//{
//	int a, b, c, d;
//	while (~scanf("%d.%d.%d.%d", &a, &b, &c, &d))
//	{
//		if (a >= 0 && b >= 0 && c >= 0 && d >= 0 && a <= 255 && b <= 255 && c <= 255 && d <= 255)
//		{
//			printf("Yes\n");
//
//		}
//		else
//		{
//			printf("No\n");
//		}
//	}
//
//	return 0;
//}

//***************************************************
//���� M: 22-����-1-ʱ�����
//#include <stdio.h>
//
//int main()
//{
//	int h1, m1, s1, h2, m2, s2;
//	while (~scanf("%d %d %d %d %d %d ", &h1, &m1, &s1, &h2, &m2, &s2))
//	{
//		int H = h1 + h2;
//		int M = m1 + m2;
//		int S = s1 + s2;
//		while (S >= 60)
//		{
//			S -= 60;
//			M++;
//		}
//		while (M >= 60)
//		{
//			M -= 60;
//			H++;
//		}
//		printf("%d %d %d\n", H, M, S);
//	}
//	return 0;
//}

//**************************
//���� CW: ��ӡ��������20�֣�
//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		//��ӡ����
//		for (int i = 1; i <= n + 1; i++)
//		{
//			for (int j = 1; j <= 2 * n + 1;j++)
//			{
//				if ( j < n + 1 + 1 - i)
//				{
//					printf(" ");
//				}
//				else if (n + 1 + 1 - i <= j && j <= n + 1 + i - 1)
//				{
//					printf("*");
//				}
//			}
//			printf("\n");
//		}
//
//		for (int i = 1; i <= n; i++)
//		{
//			for (int j = 1; j <= n + 1; j++)
//			{
//				if (j == n + 1)
//				{
//					printf("*\n");
//				}
//				else
//				{
//					printf(" ");
//				}
//			}
//		}
//	}
//
//	return 0;
//}

//*******************************************
//���� CR: �������У�20�֣�
//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		double sum = 0;
//		for (int i = 0; i < n; i++)
//		{
//			double cost = 0;
//			scanf("%lf", &cost);
//			if (sum < 10 || sum >= 40)
//			{
//				sum += cost;
//			}
//			else if (10 <= sum && sum < 15)
//			{
//				sum += cost * 0.8;
//			}
//			else if (15 <= sum&&sum < 40)
//			{
//				sum += cost * 0.5;
//			}
//		}
//
//		if (sum >= 100)
//		{
//			printf("Yes\n");
//		}
//		else
//		{
//			printf("No\n");
//		}
//	}
//
//
//	return 0;
//}

//-****************************
//���� L: 22-ѭ��-1-��������
//#include <stdio.h>
//
//int main()
//{
//	int money = 0;
//	while (scanf("%d", &money) != EOF)
//	{
//		int cnt = 0;
//		for (int m5 = 1; m5 <= 20; m5++)
//		{
//			for (int m2 = 1; m2 <= 50; m2++)
//			{
//				for (int m1 = 1; m1 <= 100; m1++)
//				{
//					if (m5 * 5 + m2 * 2 + m1 == money)
//					{
//						cnt++;
//					}
//				}
//			}
//		}
//
//		printf("%d\n", cnt);
//
//	}
//
//	return 0;
//}