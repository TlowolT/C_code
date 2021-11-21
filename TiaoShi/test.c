#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//
//void test()
//{
//	printf("hehe\n");
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	test();
//
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i + 1;
//	}
//	/*for (i = 0; i < 10; i++)
//	{
//		arr[i] = 0;
//	}*/
//	return 0;
//}

//F9 - 切换断点--程序执行到断点处就会主动停下来
//F9和F5配合使用，F5会向后执行代码，到下一个逻辑上的断点

//F10--逐过程--会跳过函数
//F11逐语句--会进入函数

//void test2()
//{
//	printf("test2\n");
//}
//
//void test1()
//{
//	printf("test1\n");
//	test2();
//}
//void test()
//{
//	printf("test\n");
//	test1();
//}
//int main()
//{
//	test();
//	return 0;
//}
//调用堆栈


//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	//计算n的阶乘
//	int i = 0;
//	int ret = 1;
//	int j = 0;
//	int sum = 0;
//
//	for (j = 1;j <= n; j++)
//	{
//		//ret = 1;
//		for (i = 1; i <= j; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//	
//	printf("%d\n", sum);
//	return 0;
//}
//这段代码编译和链接都没问题，但运行出了问题，这就需要调试
//f10调试，n输入3，监视窗口输入想要观察的值，继续F10
//j =1 时 i = 1  ret =1 sum =1;
//j =2 时 i =1,2  ret =2 sum =3;
//j =3 时 i =1,2,3  ret = 12 sum =15
//ret这时出现了bug，在问题循环出f9,再右击鼠标，设置条件断点，再调试
//ret因为上一次循环留下了2，所以每次ret初始化为1，这个bug就解决


//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}

#include<string.h>
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
#include<assert.h>
//void my_strcpy(char* dest,char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);//断言
//
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;
//}

//void my_strcpy(char* dest, char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);//断言
//
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//char* my_strcpy(char* dest, char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);//断言
//
//	char* ret = dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}

char* my_strcpy(char* dest,const char* src)
{
	assert(dest != NULL);
	assert(src != NULL);//断言

	char* ret = dest;
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}
int main()
{
	char arr1[20] = { 0 };
	char arr2[] = "hello";
	//my_strcpy(arr1, arr2);
	printf("%s\n", my_strcpy(arr1,arr2));
	return 0;
}

//const 修饰变量 
//修饰指针
//放在*的左边
// const 修饰的是指针指向的内容（*p)，表示指针指向的内容不能通过指针来改变
//但是指针变量本身可以改变
// 放在*的右边
//修饰的是指针变量本身，指针变量的内容不能修改
//但是指针指向的内容可以通过指针来改变的


//int main()
//{
//////	/*int n = 10;
//////	n = 20;*/
//////
////	/*const int n = 10;
////	n = 20;
////	printf("%d\n", n);*/
////
//	const int n = 10;
//	const int* p = &n;
//	*p = 20;
//	printf("%d\n", n);
//	return 0;
//}

//int main()
//{
//	int n = 10;
//	int m = 100;
//	//int* p = &n;
//	//*p = 0;//n == 0
//
//	//int const* p = &n;
//	////*p = 0;//n==10
//	//p = &m;
//
//	//int* const p = &n;
//	////p = &m;
//	//*p = 0;//n==0
//	return 0;
//}