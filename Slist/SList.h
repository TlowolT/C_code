#define _CRT_SECURE_NO_WARNINGS 1

#pragma once 

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int SLTDataType;

typedef struct SListNode
{
	SLTDataType data;
	struct SListNode* next;//������һ���ڵ��ָ��
}SListNode,SLN;

//��ӡ
void SListPrint(SListNode* phead);
//β��
void SListPushBack(SListNode** pphead, SLTDataType x);
//ͷ��
void SListPushFront(SListNode** pphead, SLTDataType x);
//βɾ
void SListPopBack(SListNode** pphead);
//ͷɾ
void SListPopFront(SListNode** pphead);

//����
SListNode* SListFind(SListNode* phead,SLTDataType x);

//posλ��֮ǰ����
void SListInsertBefore(SListNode** pphead, SListNode* pos, SLTDataType x);

//posλ��֮�����
void SListInsertAfter(SListNode* pos, SLTDataType x);

//posλ��֮ǰɾ��
void SListErase(SListNode** pphead, SListNode* pos);


//posλ��֮��ɾ��
void SListEraseAfter(SListNode* pos);

void SListDestory(SListNode** phead);