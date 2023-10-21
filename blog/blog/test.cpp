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

#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);//获取循环次数n
    for (int i = 0; i < n; i++)//创建循环
    {
        //以下完成一组输入输出
        int sum = 0;//声明一个局部变量，下次循环时会自动重声明
        int num = 0;//储存输入的数字
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &num);
            sum += num;
        }
        printf("%d\n", sum);
        //本次循环走完后变量sum被销毁，然后进入下一次循环,完成重置
    }
    return 0;
}