#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//ָ������
//���ָ����������ָ������
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	int** PP = &p;
//	int** arr2[4];
//	int* arr[10];//ָ������-��ŵ���int*
//	char* ch[5];//ָ������-��ŵ���char*
//
//
//	return 0;
//}

//����ָ��-�������ĵ�ַ&arr
//#include<stdio.h>
//
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);//008FFBD0
//	printf("%p\n", arr+1);//008FFBD4
//
//	printf("%p\n", &(arr[0]));//008FFBD0
//	printf("%p\n", &(arr[0])+1);//008FFBD4
//
//	printf("%p\n", &arr);//008FFBD0
//	printf("%p\n", &arr+1);//008FFBF8
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	char arr[5];
//	char(*pa)[5] = &arr;
//	
//	int* parr[6];
//	int* (*pp)[6] = &parr;
//	return 0;
//}

//����ָ�����;
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr; int i = 0;
//	for (i = 0;i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	int(*p)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *((*p) + i));
//	}
//
//
//	
//	return 0;
//}

//void print(int a[3][5], int r, int c)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < r; i++)
//	{
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", a[i][j]);
//		}
//		printf("\n");
//	}
//}

//void print(int (*arr)[5],int r,int c)
//{
//	int i = 0; 
//	for (i = 0; i < r; i++)
//	{
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{
//			//*(p+i)�൱�ڶ�ά����ĵ�i�У�
//			printf("%d ", *(*(arr + i) + j));
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print(&arr, 3, 5);
//	return 0;
//}

//int main()
//{
//	int arr[10];
//	int i = 0;
//	int* p = arr;
//	*(p + i);
//	arr[i] == *(p+i);
//	
//	return 0;
//}

//void test(int arr[])
//{}//YES
//void test(int arr[10])
//{}//YES
//void test(int* arr)
//{}//YES
//void test2(int* arr[20])
//{}//yes
//void test2(int** arr2)
//{}//YES
//
//int main()
//{
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 };
//	test(arr);
//	test2(arr2);
//	return 0;
//}

//void test(int arr[3][5])
//{}//YES
//void test(int arr[][])
//{}//NO
//void test(int arr[][5])
//{}//YES
//
//void test(int* arr)
//{}//NO
//void test(int* arr[5])
//{}//NO
//void test(int(*arr)[5])
//{}//YES
//void test(int** arr)
//{}//NO
//
//
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//	return 0;
//}

//void test(int* p )
//{
//
//}
//int main()
//{
//	int a = 10;
//	int* ptr = &a;
//	int arr[10] = { 0 };
//	test(&a);
//	test(ptr);
//	test(arr);
//	return 0;
//}


//void test(char** p)
//{
//
//}
//
//int main()
//{
//	char ch = 'w';
//	char* p = &ch;
//	char** pp = &p;
//	char* arr[5];
//	test(&p);
//	test(pp);
//	test(arr);
//	return 0;
//}

//����ָ��
//int Add(int x, int y)
//{
//	return x + y;
//}
//void test(char* str)
//{}
//int main()
//{
//	/*printf("%p\n", &Add);
//	printf("%p\n", Add);*/
//	/*void (*pt)(char*) = test;*/
//	int (*pf)(int,int) = &Add;
//	//int (*pf)(int, int) = Add;
//	//int sum = (*pf)(2,3);
//	int sum = (pf)(2, 3);
//	//int sum = Add(2, 3);
//	printf("%d\n", sum);
//
//	return 0;
//}

//
//typedef void(*pfun_t)(int);
//int main()
//{
//	//1.��0ǿ������ת��Ϊvoid(*)()�ĺ���ָ��
//	//2.��ȥ����0��ַ���������Ϊ�޲ң�����������void�ĺ���
//	//0 �ǵ�ַ
//	/*(*(void(*)())0)();*/
//
//	void(*signal(int, void(*)(int)))(int);
//	
//	//signal��һ�����������������Ĳ�������������һ����int���ͣ��ڶ����Ǻ���ָ�룬
//	//��ָ��ָ��ĺ�������int������������void
//	//signal���������Ǻ���ָ��,��ָ��ָ��ĺ�������int������������void
//
//	pfun_t signal(int, pfun_t);
//	return 0;
//}


//����ָ������
//��ź���ָ������飬ÿ��Ԫ�أ����Ǻ���ָ������

//int Add(int x, int y)
//{
//	return x+y;
//}
//int Sub(int x, int y)
//{
//	return x-y;
//}
//int Mul(int x, int y)
//{
//	return x*y;
//}
//int Div(int x, int y)
//{
//	return x/y;
//}
//int main()
//{
//	/*int (*pf1)(int, int) = Add;
//	int (*pf2)(int, int) = Sub;
//	int (*pf3)(int, int) = Mul;
//	int (*pf4)(int, int) = Div;*/
//
//	int (*pfArr[4])(int, int) = {Add,Sub,Mul,Div};
//	//8 4
//	//12
//	//4
//	//32
//	//2
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		int ret = pfArr[i](8, 4);
//		printf("%d\n", ret);
//	}
//	return 0;
//}

int Add(int x, int y)
{
	return x+y;
}
int Sub(int x, int y)
{
	return x-y;
}
int Mul(int x, int y)
{
	return x*y;
}
int Div(int x, int y)
{
	return x/y;
}

void menu()
{
	printf("********************************\n");
	printf("*******1.add   2.sub  **********\n");
	printf("*******3.mul   4.div  **********\n");
	printf("*******0.exit         **********\n");
	printf("********************************\n");
}

//int main()
//{
//	int ret = 0;
//	int x = 0;
//	int y = 0;
//	int input = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("��������������:>");
//			scanf("%d %d", &x, &y);
//			ret = Add(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 2:
//			printf("��������������:>");
//			scanf("%d %d", &x, &y);
//			ret = Sub(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 3:
//			printf("��������������:>");
//			scanf("%d %d", &x, &y);
//			ret = Mul(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 4:
//			printf("��������������:>");
//			scanf("%d %d", &x, &y);
//			ret = Div(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 0:
//			printf("�˳������\n");
//		}
//		
//	}
//	return 0;
//}
//
//int main()
//{
//	int ret = 0;
//	int x = 0;
//	int y = 0;
//	int input = 0;
//	int(*pfArr[5])(int, int) = { 0,Add,Sub,Mul,Div };
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		if (input == 0)
//		{
//			printf("�˳������\n");
//			break;
//		}
//		else if (input >= 1 && input <= 4)
//		{
//			printf("��������������:>");
//			scanf("%d %d", &x, &y);
//			ret = pfArr[input](x, y);
//			printf("ret = %d\n", ret);
//		}
//		else
//		{
//			printf("ѡ�����\n");
//		}
//	} while (input);
//
//	return 0;
//}