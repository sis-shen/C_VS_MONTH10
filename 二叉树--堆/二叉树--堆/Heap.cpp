#define  _CRT_SECURE_NO_WARNINGS 1

#include "Heap.h"

void HeapInit(HP* php)
{
	assert(php);

	php->arr = NULL;
	php->size = 0;
	php->capacity = 0;
}

void HeapDestroy(HP* php)
{
	assert(php);

	free(php->arr);
	php->size = 0;
	php->capacity = 0;
}

void HeapPush(HP* php, DataType x)
{
	assert(php);
	if (php->size == php->capacity)
	{
		int newCapacity = php->capacity == 0 ? 4 : 2 * php->capacity;
		php->arr = (DataType*)realloc(php->arr, sizeof(DataType) * newCapacity);
		if (php->arr == NULL)
		{
			perror("realloc failed");
		}

	}
}

for (int j = 2; j <= 6; j++)
{
	b[j] = b[j] + b[1];
}