#define _CRT_SRCURE_NO_WARNINGS 1

//#include"Queue1.h"
//#include"Queue.h"

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>


//void TestQueue()
//{
//	Queue q;
//	QueueInit(&q);
//
//	QueuePush(&q, 1);
//
//	size_t x = QueueSize(&q);
//	printf("%d\n", x);
//
//	QueuePush(&q, 2);
//
//	x = QueueSize(&q);
//	printf("%d\n", x);
//
//	/*printf("%d ", QueueFront(&q));
//	QueuePop(&q);*/
//
//	QueuePush(&q, 3);
//
//	x = QueueSize(&q);
//	printf("%d\n", x);
//
//	QueuePush(&q, 4);
//
//	x = QueueSize(&q);
//	printf("%d\n", x);
//
//	while (!QueueEmpty(&q))
//	{
//		printf("%d ", QueueFront(&q));
//		QueuePop(&q);
//	}
//	printf("\n");
//
//	x = QueueSize(&q);
//	printf("%d\n", x);
//
//}

typedef int QDataType;
typedef struct QueueNode
{
    QDataType data;
    struct QueueNode* next;
}QNode;

typedef struct Queue
{
    QNode* head;
    QNode* tail;
}Queue;

void QueueInit(Queue* pq);
void QueueDestory(Queue* pq);
void QueuePush(Queue* pq, QDataType x);
void QueuePop(Queue* pq);
bool QueueEmpty(Queue* pq);
size_t QueueSize(Queue* pq);
QDataType QueueFront(Queue* pq);
QDataType QueueBack(Queue* pq);

void QueueInit(Queue* pq)
{
    assert(pq);
    pq->head = pq->tail = NULL;
}
void QueueDestory(Queue* pq)
{
    assert(pq);
    QNode* cur = pq->head;
    while (cur)
    {
        QNode* next = cur->next;
        free(cur);
        cur = next;
    }
    pq->head = pq->tail = NULL;
}
void QueuePush(Queue* pq, QDataType x)
{
    assert(pq);
    QNode* newnode = (QNode*)malloc(sizeof(QNode));
    assert(newnode);
    newnode->data = x;
    newnode->next = NULL;

    if (pq->tail == NULL)
    {
        assert(pq->head == NULL);
        pq->head = pq->tail = newnode;
    }
    else
    {
        pq->tail->next = newnode;
        pq->tail = newnode;
    }
}
void QueuePop(Queue* pq)
{
    assert(pq);
    assert(pq->head && pq->tail);
    if (pq->head->next == NULL)
    {
        free(pq->head);
        pq->head = pq->tail = NULL;
    }
    else
    {
        QNode* next = pq->head->next;
        free(pq->head);
        pq->head = next;
    }
}
bool QueueEmpty(Queue* pq)
{
    assert(pq);
    return pq->head == NULL && pq->tail == NULL;
}
size_t QueueSize(Queue* pq)
{
    assert(pq);
    size_t size = 0;
    QNode* cur = pq->head;
    while (cur)
    {
        size++;
        cur = cur->next;
    }
    return size;
}
QDataType QueueFront(Queue* pq)
{
    assert(pq);
    assert(pq->head);
    return pq->head->data;
}
QDataType QueueBack(Queue* pq)
{
    assert(pq);
    assert(pq->tail);
    return pq->tail->data;
}

typedef struct
{
    Queue queue1;
    Queue queue2;
} MyStack;


MyStack* myStackCreate()
{
    MyStack* pst = (MyStack*)malloc(sizeof(MyStack));
    assert(pst);

    QueueInit(&pst->queue1);
    QueueInit(&pst->queue2);

    return pst;
}

void myStackPush(MyStack* obj, int x)
{
    assert(obj);
    if (!QueueEmpty(&obj->queue1))
    {
        QueuePush(&obj->queue1, x);
    }
    else
    {
        QueuePush(&obj->queue2, x);
    }
}

int myStackPop(MyStack* obj)
{
    assert(obj);
    Queue* emptyQ = &obj->queue1;
    Queue* nonEmptyQ = &obj->queue2;
    if (!QueueEmpty(&obj->queue1))
    {
        emptyQ = &obj->queue2;
        nonEmptyQ = &obj->queue1;
    }
    while (QueueSize(nonEmptyQ) > 1)
    {
        QDataType front = QueueFront(nonEmptyQ);
        QueuePush(emptyQ, front);
        QueuePop(nonEmptyQ);
    }
    int top = QueueFront(nonEmptyQ);
    QueuePop(nonEmptyQ);

    return top;
}

int myStackTop(MyStack* obj)
{
    assert(obj);
    if (!QueueEmpty(&obj->queue1))
    {
        return QueueBack(&obj->queue1);
    }
    else
    {
        return QueueBack(&obj->queue2);
    }
}

bool myStackEmpty(MyStack* obj)
{
    assert(obj);
    return QueueEmpty(&obj->queue1) && QueueEmpty(&obj->queue2);
}

void myStackFree(MyStack* obj)
{
    assert(obj);
    QueueDestory(&obj->queue1);
    QueueDestory(&obj->queue2);
    free(obj);
}

int main()
{
    MyStack* obj = myStackCreate();
    myStackPush(obj, 1);

    printf("%d\n", myStackPop(obj));

    printf("%d\n", myStackEmpty(obj));

	return 0;
}