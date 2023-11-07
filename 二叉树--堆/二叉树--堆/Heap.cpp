#define  _CRT_SECURE_NO_WARNINGS 1

#include "Heap.h"

void HeapInit(HP* php)
{
	assert(php);

	php->arr = NULL;
	php->size = 0;
	php->capacity = 0;
}

bool HeapEmpty(HP* php)
{
	assert(php);
	return php->size == 0;
}

void HeapSwap(DataType* p1, DataType* p2)
{
	DataType tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

void HeapDestroy(HP* php)
{
	assert(php);

	free(php->arr);
	php->size = 0;
	php->capacity = 0;
}

void AdjustUp(DataType* arr, int child)
{
	int parent = (child - 1) / 2;
	while (child > 0)
	{
		if (arr[child] < arr[parent])
		{
			DataType tmp = arr[child];
			arr[child] = arr[parent];
			arr[parent] = tmp;
		}
		else
		{
			break;
		}
		child = parent;
		parent = (child - 1) / 2;
	}

}

void AdjustDown(DataType* arr, int sz, int parent)
{
	int child = parent * 2 + 1;
	while (child<sz)
	{
		if (child+1<sz && arr[child + 1] < arr[child])
		{
			child++;
		}
		if (arr[child] < arr[parent])
		{
			HeapSwap(&arr[parent], &arr[child]);
			parent = child;
			child = parent * 2 + 1;
		}
		else
		{
			break;
		}
	}

	;
}

void HeapPush(HP* php, DataType x)
{
	assert(php);
	if (php->size == php->capacity)
	{
		int newCapacity = php->capacity == 0 ? 4 : 2 * php->capacity;
		DataType* tmp = (DataType*)realloc(php->arr, sizeof(DataType) * newCapacity);
		if (tmp == NULL)
		{
			perror("realloc failed");
		}
		php->arr = tmp;
		php->capacity = newCapacity;
	}
	php->arr[php->size] = x;
	AdjustUp(php->arr, php->size);
	php->size++;
}

void HeapPop(HP* php)
{
	assert(php);
	assert(!HeapEmpty(php));
	//ɾ������
	HeapSwap(&php->arr[0], &php->arr[php->size - 1]);
	php->size--;
	
	AdjustDown(php->arr, php->size, 0);
}



