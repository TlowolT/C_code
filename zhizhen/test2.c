#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>
#include<math.h>

//void test(char* arr[4][5])
//{}
//
//void test(char* (*p)[5])
//{}
//
//int main()
//{
//	//ָ������-���ָ������飬
//	int* arr[5];
//	char* arr2[6];
//	char** arr3[4];//�����д�ŵ��Ƕ���ָ��char**
//
//	//����ָ��-ָ�������ָ��
//	int arr[10];
//	int*p = arr;
//	int (*p2)[10] = &arr;//ȡ��������ĵ�ַ����Ӧ�÷ŵ�����ָ�������
//	//p2��������ָ�� 
//
//	char* arr[4][5];
//	test(arr);
//	return 0;
//}

//
//int my_test(const char* s)
//{
//	printf("����\n");
//	return 0;
//}
//int main()
//{
//	//����ָ��=����������ȡ��ַ���������Ǻ����ĵ�ַ
//
//	int (*pf)(const char*) = my_test;
//	(*pf)("hehe");//*���Բ�Ҫ
//	return 0;
//}

//����ָ�������-��ź���ָ�������-Ҳ��һ��ָ������
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int(*pa)(int,int) = Add;//����ָ��
//	int(*pfA[4])(int, int) = Add;//����ָ�������
//	return 0;
//}

////ָ����ָ�������ָ��
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int(*pa)(int,int) = Add;//����ָ��
//	int(*pfA[4])(int, int) = Add;//����ָ�������
//	int(*(*ppfA)[4])(int, int) = &pfA;
//	return 0;
//}

//�ص�����

//void bubble_sort(int* arr, int sz)//��������
//{
//	int i = 0;
//	for (i = 0; i < sz-1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz-i-1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}

//void print_arr(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
////qsort-�⺯��-��������ķ���
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//	//����
//	/*return *(int*)e2 - *(int*)e1;*/
//}
////����qsort������������
//void test1()
//{
//	int arr[] = { 1,4,2,6,5,3,7,9,0,8 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//bubble_sort(arr,sz);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	print_arr(arr, sz);
//}
//// ����qsort����ṹ������
//struct Stu
//{
//	char name[20];
//	int age;
//	float score;
//};
//void cmp_stu_by_score(const void* e1, const void* e2)
//{
//	if(((struct Stu*)e1)->score > ((struct Stu*)e2)->score)
//	{
//		return 1;
//	}
//	else if (((struct Stu*)e1)->score < ((struct Stu*)e2)->score)
//	{
//		return -1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//void cmp_stu_by_age(const void* e1, const void* e2)
//{
//	if (((struct Stu*)e1)->age > ((struct Stu*)e2)->age)
//	{
//		return 1;
//	}
//	else if (((struct Stu*)e1)->age < ((struct Stu*)e2)->age)
//	{
//		return -1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//void cmp_stu_by_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct Stu*)e1)->name , ((struct Stu*)e2)->name);
//}
//
//void print_stu(struct Stu arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%s %d %f\n", arr[i].name, arr[i].age, arr[i].score);
//	}
//	printf("\n");
//}
//
//void test2()
//{
//	struct Stu arr[] = { {"zhangsan",20,87.5f},{"lisi",22,99.0f},{"wangwu",10,68.5} };
//	//���ɼ�
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]),cmp_stu_by_name);
//	print_stu(arr, sz);
//}
//void Swap(char* buf1,char* buf2,int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//void bubble_sort(void* base, int sz, int width, int(*cmp)(const void* e1, const void* e2))
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - i - 1; j++)
//		{
//			//if (arr[j] > arr[j + 1])
//			if (cmp((char*)base+j*width,(char*)base+(j+1)*width) > 0)
//			{
//				//����Ԫ�صĽ���
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width,width);
//			}
//		}
//	}
//}
//
//void test3()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//	print_arr(arr, sz);
//}
//
//void test4()
//{
//	struct Stu arr[] = { {"zhangsan",20,87.5f},{"lisi",22,99.0f},{"wangwu",10,68.5} };
//	//���ɼ�
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//bubble_sort(arr, sz, sizeof(arr[0]), cmp_stu_by_score);
//	//bubble_sort(arr, sz, sizeof(arr[0]), cmp_stu_by_age);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_stu_by_name);
//	print_stu(arr, sz);
//}
//
//
//int main()
//{
//	test4();
//	return 0;
//}

//void qsort(void* base,
//	size_t num,//�����С
//	size_t width,//���
//	int(*compare)(const void* e1, const void* e2)//�ȽϺ���
//);

//int main()
//{
//	int a = 10;
//	int *p = &a;
//	char* p = &a;
//	void* p = &a;
//	//�޾������͵�ָ�룬���Դ���������͵ĵ�ַ
//	//void*����ֱ�ӽ��н����ò���
//	//����ֱ�ӽ���+-
//
//	return 0;
//}

//