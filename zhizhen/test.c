#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int a = 10;
//	int* pa = &a;//指针变量
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
//	//指针类型决定了解引用时，一次能访问几个字节（指针的权限）
//	//int* --> 4
//	//char* --> 1
//	//double* --> 8
//	return 0;
//}

//1.指针类型决定了解引用时，一次能访问几个字节（指针的权限）
//2.指针类型决定了指针向前或者向后走一步，走多大距离（单位是字节）


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
//	//int* p;//野指针
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

//求字符串长度函数
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

//指针和数组

//指针-地址
//指针变量

//数组是一组相同类型的数据

//数组和指针本身是两种事物
//联系就是可以通过指针访问数组

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

//二级指针
//
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;//ppa就是一个二级指针
//	**ppa = 20;
//	printf("%d\n", a);
//	//int*** pppa = &ppa;//pppa就是一个三级指针
//
//
//	return 0;
//}

//指针数组

//int main()
//{
//	//int arr[10];//整型数组
//	//char ch[5];//字符数组
//	//指针数组-存放整型指针的数组
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