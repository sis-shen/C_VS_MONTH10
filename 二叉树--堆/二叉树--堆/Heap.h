#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int DataType;

typedef struct Heap
{
	DataType* arr;
	int size;
	int capacity;
}HP;


void HeapInit(HP* php);
void HeapPush(HP* php, DataType x);
void HeapDestroy(HP* php);
void 
