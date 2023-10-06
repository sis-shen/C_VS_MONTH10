#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>

typedef int QueueType;

typedef struct QueueNode
{
	struct QueueNode* next;
	QueueType data;
}QNode;

typedef struct Queue
{
	QNode* phead;
	QNode* ptail;
	int size;
}Queue;

void QueueInit(Queue* pq);
void QueueDestroy(Queue* pq);
void QueuePush(Queue* pq , QueueType x);
void QueuePop(Queue* pq);

bool QueueEmpty(Queue* pq);

QueueType QueueFront(Queue* pq);
QueueType QueueBack(Queue* pq);

int QueueSize(Queue* pq);