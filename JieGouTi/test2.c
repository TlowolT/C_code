#define _CRT_SECURE_NO_WARNINGS 1

//位段
#include<stdio.h>
//struct A
//{
//	int _a : 2;//剩30 //00 01 10 11
//	int _b : 5;//25
//	int _c : 10;//15，已经不够了
//	//重新开辟4个字节
//	int _d : 30;//
//};
//
//struct S
//{
//	//1byte = 8bit
//	char a : 3;//5
//	char b : 4;//1
//	//1byte - 8bit
//	char c : 5;//3
//	//1byte - 8bit
//	char d : 4;//4
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct S));
//	return 0;
//}
////位段的内存分配

//struct S
//{
//	char a : 3;
//	char b : 4; 
//	char c : 5;
//	char d : 4;
//};
//
//int main()
//{
//	struct S s = { 0 };
//	s.a = 10;
//	s.b = 12;
//	s.c = 3;
//	s.d = 4;
//	
//	return 0;
//}

//枚举

//enum day
//{
//	//枚举的可能取值
//	Mon,
//	Tues,
//	Wed,
//	Thur,
//	Fri,
//	Sta,
//	Sun
//};
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//int main()
//{
//	enum Day d = Sun;
//	enum Sex s = SECRET;
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//	return 0;
//}

//联合（共用体）
//union Un
//{
//	char c;
//	int i;
//};
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));
//
//	printf("%p\n", &u);
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));
//	return 0;
//}


//int cheak_sys()
//{
//	union
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	return u.c;
//}
//
//int main()
//{
//	int ret = cheak_sys();
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}


////联合体的大小
//union Un1
//{
//	char c[5];// 5 1,8 -1
//	int i;//4 4,8 -4
//};
//
//union Un2
//{
//	short c[7];//14 2,8 -2
//	int i;//4
//};
//int main()
//{
//	printf("%d\n", sizeof(union Un2));
//	return 0;
//}


//为什么动态内存的的分配
//int a = 0;
//int arr[10] ={0};
//假如通讯录1存000人的信息
//有些人只需要几个人，有些人1000还不够peoInfo data[1000];众口难调
//所以动态内存分配，都在堆区中
//malloc
//calloc
//

//函数原型
//void* malloc(size_t size);
//
#include<stdlib.h>
#include<errno.h>
#include<string.h>
int main()
{
	//开辟10个整型空间
	//int arr[10];

	int* p = (int*)malloc(40);
	if (NULL == p)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	//使用
	int i = 0;
	for (i = 10; i < 10; i++)
	{
		*(p + i) = i;
	}
	for (i = 10; i < 10; i++)
	{
		printf("%d\n", p[i]);
	}

	//释放
	free(p);
	//当释放完后，p就是野指针
	p = NULL;

	return 0;
}