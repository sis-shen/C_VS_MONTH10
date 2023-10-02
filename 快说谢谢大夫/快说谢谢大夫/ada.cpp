#define  _CRT_SECURE_NO_WARNINGS 1
#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <time.h>
#define TimeLenth 300
int main()
{
	int start = 0;
	int current = 0;
	int left = 0;
	char input[20] = { 0 };
	system("shutdown -s -t 300");//-a解除关机,,-s关机
	printf("!!!!注意!!!!\n你的电脑将在5分钟内关机\n请输入“沈大夫妙手回春”来解除关机\n");
	start = (int)time(NULL);
again:
	scanf("%s", input);
	current = (int)time(NULL);
	left = TimeLenth - (current - start);
	if (strcmp(input, "沈大夫妙手回春") == 0)
	{
		system("shutdown -a");
		printf("快说谢谢大夫");
	}
	else
	{
		system("cls");

		printf("再给你一次机会\n");
		printf("!!!注意!!!\n距离关机还剩%d秒\n", left);

		goto again;
	}
	return 0;
}