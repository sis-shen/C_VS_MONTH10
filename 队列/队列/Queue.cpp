#define  _CRT_SECURE_NO_WARNINGS 1
#include "Queue.h"

void QueueInit(Queue* pq)
{
	assert(pq);

	pq->phead = NULL;
	pq->ptail = NULL;
	pq->size = 0;
}
void QueueDestroy(Queue* pq)
{
	assert(pq);

	QNode* cur = pq->phead;
	while (cur)
	{
		QNode* next = cur->next;
		free(cur);
		cur = next;
	}

	pq->phead = NULL;
	pq->size = 0;
}
void QueuePush(Queue* pq,QueueType x)
{
	assert(pq);

	QNode* newNode = (QNode*)malloc(sizeof(QNode));
	if (newNode == NULL)
	{
		perror("malloc failed");
		return;
	}
	newNode->data = x;
	newNode->next = NULL;

	if (pq->phead == NULL)
	{
		assert(pq->ptail == NULL);//防止意外修改ptail

		pq->phead = newNode;
		pq->ptail = newNode;
	}
	else
	{
		pq->ptail->next = newNode;
		pq->ptail = newNode;
	}

	pq->size++;

}

bool QueueEmpty(Queue* pq)
{
	return pq->size == 0;
}

void QueuePop(Queue* pq)
{
	assert(pq);
	assert(!QueueEmpty(pq));

	if (pq->phead == pq->ptail)//防止只剩一个节点时出现野指针
	{
		free(pq->phead);
		pq->phead = NULL;
		pq->ptail = NULL;
		pq->size--;
	}
	else
	{
		QNode* next = pq->phead->next;
		free(pq->phead);
		pq->phead = next;
		pq->size--;
	}
}

QueueType QueueFront(Queue* pq)
{
	assert(pq);
	assert(!QueueEmpty(pq));

	return pq->phead->data;

}

QueueType QueueBack(Queue* pq)
{
	assert(pq);
	assert(!QueueEmpty(pq));

	return pq->ptail->data;
}

int QueueSize(Queue* pq)
{
	assert(pq);
	return pq->size;
}