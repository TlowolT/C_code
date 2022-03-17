#define _CRT_SECURE_NO_WARNINGS 1

#include"SList.h"

void TestSList1()
{
	SListNode* slist = NULL;
	SListNode* n1 = malloc(sizeof(SListNode));
	SListNode* n2 = malloc(sizeof(SListNode));
	SListNode* n3 = malloc(sizeof(SListNode));

	n1->data = 1;
	n2->data = 2;
	n3->data = 3;
	n1->next = n2;
	n2->next = n3;
	n3->next = NULL;

	slist = n1;
	SListPrint(slist);
}

void TestSList2()
{
	SListNode* slist = NULL;//空链表
	for (int i = 0; i < 4; i++)
	{
		SListPushBack(&slist, i);
	}
	SListPrint(slist);
}


void TestSList3()
{
	SListNode* slist = NULL;//空链表
	for (int i = 0; i < 4; i++)
	{
		SListPushBack(&slist, i);
	}
	SListPrint(slist);

	for (int i = 0; i < 5; i++)
	{
		SListPopBack(&slist);
	}
	SListPrint(slist);
}

void  TestSList4()
{
	SListNode* slist = NULL;//空链表
	for (int i = 0; i < 4; i++)
	{
		SListPushBack(&slist, i);
	}
	SListPrint(slist);

	for (int i = 0; i < 1; i++)
	{
		SListPopFront(&slist);
	}
	SListPrint(slist);

	SListNode* pos = SListFind(slist, 3);
	if (pos)
	{
		printf("找到了:%p\n", pos);
		//修改
		pos->data *= 10;

	}
	SListPrint(slist);

}


void  TestSList5()
{
	SListNode* slist = NULL;//空链表
	for (int i = 0; i < 4; i++)
	{
		SListPushBack(&slist, i);
	}
	SListPrint(slist);

	SListNode* pos = SListFind(slist, 3);
	if (pos)
	{
		SListInsertBefore(&slist, pos, 30);
	}
	SListPrint(slist);
	
	pos = SListFind(slist, 0);
	if (pos)
	{
		SListInsertBefore(&slist, pos, 30);
	}
	SListPrint(slist);
}


void TestSList6()
{

	SListNode* slist = NULL;//空链表
	for (int i = 0; i < 4; i++)
	{
		SListPushBack(&slist, i);
	}
	SListPrint(slist);
	SListNode* pos = SListFind(slist, 0);
	if (pos)
	{
		SListErase(&slist, pos);
	}
	SListPrint(slist);

	SListDestory(&slist);
}

int main()
{
	//TestSList1();
	//TestSList2();
	//TestSList3();
	//TestSList4();
	//TestSList5();
	TestSList6();
	return 0;
}