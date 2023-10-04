#define  _CRT_SECURE_NO_WARNINGS 1

#include "Dlist.h"

void Test1()
{
	DListNode* phead = NULL;
	phead = DListInit(phead);
	DListPushBack(phead, 1);
	DListPushBack(phead, 2);
	DListPushBack(phead, 3);
	DListPushBack(phead, 4);
	DListNodePrint(phead);

}

int main()
{
	Test1();
	printf("\\n,%d",0);
	return 0;
}