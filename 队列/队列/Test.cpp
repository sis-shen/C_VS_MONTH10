#define  _CRT_SECURE_NO_WARNINGS 1
#include "Queue.h"


void TestQueue()
{
	Queue q;
	QueueInit(&q);
	QueuePush(&q, 1);
	QueuePush(&q, 2);
	printf("%d\n", QueueFront(&q));
	QueuePop(&q);
	QueuePush(&q, 3);
	printf("%d\n", QueueSize(&q));
	printf("%d\n", QueueFront(&q));
	QueuePop(&q);
	QueuePush(&q, 4);
	QueuePush(&q, 5);

	while (!QueueEmpty(&q))
	{
		printf("%d\n", QueueFront(&q));
		QueuePop(&q);
	}
	QueueDestroy(&q);
}


int main()
{
	TestQueue();
	return 0;
}