#pragma once
#include <stdio.h>

typedef int HPDataType;
typedef struct heap{
    HPDataType * a;//数组
    int size;
    int capacity;
}Heap;

void swap(Heap* a,Heap* b);
void AdjustDown(Heap *php,int root);
void HeapSort(Heap* php);
void HeapInit(Heap* php,HPDataType* a,int arr_size);
void HeapDest(Heap* php);
void HeapPush(Heap* php,int val);
void HeapPop(Heap* php);//须默认删除位置
int HeapFind(Heap* php,int val);
void HeapModi(Heap* php,int pos,int val);