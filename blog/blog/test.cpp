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
//	printf("����:>");
//	while (~scanf("%d", &n))
//	{
//		
//		unsigned long long ret = (1 + pow(10, n)) * (pow(10, n)) / 2;
//		printf("���:>%llu\n", ret);
//		printf("����:>");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);//��ȡѭ������n
//    for (int i = 0; i < n; i++)//����ѭ��
//    {
//        //�������һ���������
//        int sum = 0;//����һ���ֲ��������´�ѭ��ʱ���Զ�������
//        int num = 0;//�������������
//        for (int j = 0; j < 3; j++)
//        {
//            scanf("%d", &num);
//            sum += num;
//        }
//        printf("%d\n", sum);
//        //����ѭ����������sum�����٣�Ȼ�������һ��ѭ��,�������
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
#include <stdio.h>
#include <string.h>

int main()
{
	char str[20] = { 0 };
	scanf("%s", str);
	return 0;
}