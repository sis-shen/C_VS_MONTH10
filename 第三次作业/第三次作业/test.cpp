#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main ()
{
	int arr[20] = { 0 };
	arr[0] = 1;
	arr[1] = 1;
	for (int i = 2; i < 20; i++)
	{
		arr[i] = arr[i - 1] + arr[i - 2];
	}

	for (int i = 0; i < 20; i++)
	{
		printf("%d ", arr[i]);
	}


	return 0;
}