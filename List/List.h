#pragma once

#include<stdio.h>
#include<assert.h>
#include<stdlib.h>

typedef int LTDataType;

typedef struct ListNode
{
	LTDataType data;
	struct ListNode* prev;
	struct ListNode* next;
}ListNode;

void ListInit(ListNode** pphead);

ListNode* BuyListNode(LTDataType x);

void ListPushBack(ListNode* phead, LTDataType x);

void ListPopBack(ListNode* phead);

void ListPrint(ListNode* phead);


void ListPushFront(ListNode* phead, LTDataType x);

void ListPopFront(ListNode* phead);

ListNode* ListFind(ListNode* phead, LTDataType x);

void ListInsert(ListNode* pos, LTDataType x);

void ListErase(ListNode* pos);