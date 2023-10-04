#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int DLTDataType;

typedef struct DListNode
{
	DLTDataType data;
	struct DListNode* next;
	struct DListNode* prev;

}DListNode;

DListNode* DListInit( DListNode* phead);
void DListPushBack(DListNode* phead, DLTDataType n);
void DListPopBack(DListNode* phead, DLTDataType n);

void DListPushFront(DListNode* phead, DLTDataType n);
void DListPopFront(DListNode* phead, DLTDataType n);


void DListNodePrint(DListNode* phead);