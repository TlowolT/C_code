#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int a = 10;
//	int* pa = &a;//ָ�����
//	printf("%d\n", sizeof(pa));
//
//	//00000000 00000000 00000000 00001010
//	//00 00 00 0a
//	/*printf("%p\n", &a);*/
//
//	return 0;
//}

//int main()
//{
//	/*char* pc;
//	int* pa;
//	double* pd;*/
//	int a = 0x11223344;
//	//int* pa = &a;
//	//*pa = 0;
//
//	char* pc = &a;
//	*pc = 0;
//	//ָ�����;����˽�����ʱ��һ���ܷ��ʼ����ֽڣ�ָ���Ȩ�ޣ�
//	//int* --> 4
//	//char* --> 1
//	//double* --> 8
//	return 0;
//}

//1.ָ�����;����˽�����ʱ��һ���ܷ��ʼ����ֽڣ�ָ���Ȩ�ޣ�
//2.ָ�����;�����ָ����ǰ���������һ�����߶����루��λ���ֽڣ�


//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pa+1);
//
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i+1;
//	}
//	int* q = &arr[9];
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(q - i));
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	char* p = (char*)arr;
//	int i = 0;
//	/*for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i+1;
//	}
//	int* q = &arr[9];
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(q - i));
//	}*/
//	return 0;
//}

//int main()
//{
//	//int a;
//	//printf("%d\n",a);
//
//	//int* p;//Ұָ��
//	//*p = 20;
//
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		*p = i;
//		p++;
//	}
//
//	return 0;
//}

//int* test()
//{
//	int a = 100;
//	return &a;
//}
//
//int main()
//{
//	int* p = test();
//	printf("hehe\n");
//	printf("%d", *p);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//
//	int* p = NULL;
//
//	if (p != NULL)
//	{
//		*p = 20;
//	}
//	if (pa != NULL)
//	{
//		*pa = 20;
//	}
//	return 0;
//}

//int main()
//{
//	int* p = NULL;
//	if (p != NULL)
//	{
//		*p = 100;
//	}
//	int arr[10] = { 0 };
//	int* q = arr;
//	//.....
//	q = NULL;
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		*(p + i) = i;
//	}
//	int* q = arr + sz - 1;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(q-i));
//	}
//	return 0;
//}
//
//int main()
//{
//	/*int a[10] = { 0 };
//	printf("%d\n", &a[9] - &a[0]);
//	printf("%d\n", &a[0] - &a[9]);*/
//
//	//int a = 10;
//	//char c = 'w';
//	//&a - &c;//error
//
//	return 0;
//}

//���ַ������Ⱥ���
#include<string.h>
//int my_strlen(char* s)
//{
//	int count = 0;
//	while (*s != '\0')
//	{
//		count++;
//		s++;
//	}
//	return count;
//}

//int my_strlen(char* s)
//{
//	char* start = s;
//	while (*s != '\0')
//	{
//		s++;
//	}
//	return s - start;
//}
//
//int main()
//{
//	char arr[] = "abc";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//ָ�������

//ָ��-��ַ
//ָ�����

//������һ����ͬ���͵�����

//�����ָ�뱾������������
//��ϵ���ǿ���ͨ��ָ���������

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		//printf("%p == %p\n",p + i,&arr[i]);
//		printf("%d ", p[i]);
//	}
//	return 0;
//}

//����ָ��
//
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;//ppa����һ������ָ��
//	**ppa = 20;
//	printf("%d\n", a);
//	//int*** pppa = &ppa;//pppa����һ������ָ��
//
//
//	return 0;
//}

//ָ������

//int main()
//{
//	//int arr[10];//��������
//	//char ch[5];//�ַ�����
//	//ָ������-�������ָ�������
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int* arr2[5] = {&a,&b,&c};
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", *(arr2[i]));
//	}
//
//	return 0;
//}