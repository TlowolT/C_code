#define _CRT_SECURE_NO_WARNINGS 1
#include"list.h"

void ListInit(ListNode** pphead)
{
	*pphead = BuyListNode(0);
	(*pphead)->next = *pphead;
	(*pphead)->prev = *pphead;
}

ListNode* BuyListNode(LTDataType x)
{
	ListNode* newnode = (ListNode*)malloc(sizeof(ListNode));
	if (newnode == NULL)
	{
		printf("malloc fail\n");
		exit(-1);
	}
	newnode->data = x;
	newnode->next = NULL;
	newnode->prev = NULL;
	return newnode;
}

void ListPrint(ListNode* phead)
{
	assert(phead);
	ListNode* cur = phead->next;
	while (cur != phead)
	{
		printf("%d ", cur->data);
		cur = cur->next;
	}
	printf("\n");
}

void ListPushBack(ListNode* phead, LTDataType x)
{
	assert(phead);

	/*ListNode* tail = phead->prev;
	ListNode* newnode = BuyListNode(x);

	tail->next = newnode;
	newnode->prev = tail;

	newnode->next = phead;
	phead->prev = newnode;*/
	ListInsert(phead, x);
}


void ListPopBack(ListNode* phead)
{
	assert(phead);
	assert(phead->next != phead);
	/*ListNode* tail = phead->prev;
	ListNode* tailPrev = tail->prev;

	free(tail);
	tail = NULL;

	tailPrev->next = phead;
	phead->prev = tailPrev;*/

	ListErase(phead->prev);
}


ListNode* ListFind(ListNode* phead, LTDataType x)
{
	assert(phead);
	ListNode* cur = phead->next;
	while (cur != phead)
	{
		if (cur->data == x)
		{
			return cur;
		}
		cur = cur->next;
	}
	return NULL;
}

void ListInsert(ListNode* pos, LTDataType x)
{
	assert(pos);
	ListNode* newnode = BuyListNode(x);
	ListNode* posPrev = pos->prev;
	posPrev->next = newnode;
	newnode->prev = posPrev;
	pos->prev = newnode;
	newnode->next = pos;
}

void ListPushFront(ListNode* phead, LTDataType x)
{
	assert(phead);
	ListInsert(phead->next, x);
}


void ListErase(ListNode* pos)
{
	assert(pos);
	ListNode* posPrev = pos->prev;
	ListNode* posNext = pos->next;
	free(pos);
	posPrev->next = posNext;
	posNext->prev = posPrev;
}

void ListPopFront(ListNode* phead)
{
	assert(phead);
	assert(phead->next != phead);
	ListErase(phead->next);
}