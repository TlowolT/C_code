#define _CRT_SECURE_NO_WARNINGS 1
#include"List.h"

void TestLTNode1()
{
	ListNode* pList = NULL;
	ListInit(&pList);
	ListPushBack(pList, 1);
	ListPushBack(pList, 2);
	ListPushBack(pList, 3);
	ListPushBack(pList, 4);
	ListPrint(pList);

	ListPopBack(pList);
	ListPopBack(pList);
	ListPopBack(pList);
	ListPopBack(pList);
	ListPopBack(pList);
	ListPrint(pList);
}

void TestLTNode2()
{
	ListNode* pList = NULL;
	ListInit(&pList);
	ListPushBack(pList, 1);
	ListPushBack(pList, 2);
	ListPushBack(pList, 3);
	ListPrint(pList);

	ListNode* pos = ListFind(pList, 1);
	if (pos)
	{
		ListErase(pos);
		pos = NULL;
	}
	pos = ListFind(pList, 2);
	if (pos)
	{
		ListErase(pos);
		pos = NULL;
	}
	pos = ListFind(pList, 3);
	if (pos)
	{
		ListErase(pos);
		pos = NULL;
	}
	ListPrint(pList);
}


int main()
{
	//TestLTNode1();
	TestLTNode2();
	return 0;
}