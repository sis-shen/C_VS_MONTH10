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

#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);//��ȡѭ������n
    for (int i = 0; i < n; i++)//����ѭ��
    {
        //�������һ���������
        int sum = 0;//����һ���ֲ��������´�ѭ��ʱ���Զ�������
        int num = 0;//�������������
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &num);
            sum += num;
        }
        printf("%d\n", sum);
        //����ѭ����������sum�����٣�Ȼ�������һ��ѭ��,�������
    }
    return 0;
}