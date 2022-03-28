//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include"Queue.h"
//
//void QueueInit(Queue* pq)
//{
//	assert(pq);
//	pq->head = pq->tail = NULL;
//	pq->size = 0;
//}
//void QueueDestory(Queue* pq)
//{
//	assert(pq);
//	QNode* cur = pq->head;
//	while (cur)
//	{
//		QNode* next = cur->next;
//		free(cur);
//		cur = next;
//	}
//	pq->head = pq->tail = NULL;
//}
//void QueuePush(Queue* pq, QDataType x)
//{
//	assert(pq);
//	QNode* newnode = (QNode*)malloc(sizeof(QNode));
//	assert(newnode);
//
//	newnode->data = x;
//	newnode->next = NULL;
//
//	if (pq->tail == NULL)
//	{
//		assert(pq->head == NULL);
//		pq->head = pq->tail = newnode;
//	}
//	else
//	{
//		pq->tail->next = newnode;
//		pq->tail = newnode;
//	}
//	pq->size++;
//}
//
//void QueuePop(Queue* pq)
//{
//	assert(pq);
//	assert(pq->head && pq->tail);
//	if (pq->head->next == NULL)
//	{
//		free(pq->head);
//		pq->head = pq->tail = NULL;
//	}
//	else
//	{
//		QNode* next = pq->head->next;
//		free(pq->head);
//		pq->head = next;
//	}
//	pq->size--;
//}
//
//bool QueueEmpty(Queue* pq)
//{
//	assert(pq);
//
//	return pq->head == NULL && pq->tail == NULL;
//}
//
//size_t QueueSize(Queue* pq)
//{
//	assert(pq);
//	return pq->size;
//}
//QDataType QueueFront(Queue* pq)
//{
//	assert(pq);
//	assert(pq->head);
//
//	return pq->head->data;
//
//}
//QDataType QueueBack(Queue* pq)
//{
//	assert(pq);
//	assert(pq->head);
//
//	return pq->tail->data;
//}