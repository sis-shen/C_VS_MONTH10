#define  _CRT_SECURE_NO_WARNINGS 1

#include "stack.h"

void Test1()
{
	ST st;
	STInit(&st);
	STPush(&st, 1);
	STPush(&st, 2);
	STPush(&st, 3);
	STPush(&st, 4);
	while (!STempty(&st))
	{
		printf("%d\n", STTop(&st));
		STPop(&st);
	}

}

int main()
{
	Test1();
	return 0;
}