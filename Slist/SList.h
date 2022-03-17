#define _CRT_SECURE_NO_WARNINGS 1

#pragma once 

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int SLTDataType;

typedef struct SListNode
{
	SLTDataType data;
	struct SListNode* next;//储存下一个节点的指针
}SListNode,SLN;

//打印
void SListPrint(SListNode* phead);
//尾插
void SListPushBack(SListNode** pphead, SLTDataType x);
//头插
void SListPushFront(SListNode** pphead, SLTDataType x);
//尾删
void SListPopBack(SListNode** pphead);
//头删
void SListPopFront(SListNode** pphead);

//查找
SListNode* SListFind(SListNode* phead,SLTDataType x);

//pos位置之前插入
void SListInsertBefore(SListNode** pphead, SListNode* pos, SLTDataType x);

//pos位置之后插入
void SListInsertAfter(SListNode* pos, SLTDataType x);

//pos位置之前删除
void SListErase(SListNode** pphead, SListNode* pos);


//pos位置之后删除
void SListEraseAfter(SListNode* pos);

void SListDestory(SListNode** phead);