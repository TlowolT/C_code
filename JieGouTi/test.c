#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//结构是一些值得集合，这些值称为成员变量，结构的每个成员可以是不同类型的变量

//数组是一组类型相同元素的集合

////结构的声明
//struct student
//{
//	char name[20];
//	int age;
//	float score;
//}s1,s2;//结构体变量-全局变量
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//
//	struct student s;//定义一个结构体变量-局部变量
//
//	return 0;
//}

//结构体成员类型
//可以是标量，数组，指针，其他结构体

//初始化和访问
//struct s
//{
//	int a;
//	int c;
//	double d;
//};
//struct student
//{
//	struct s ss;
//	char name[20];
//	int age;
//	float score;
//}s1,s2;//结构体变量-全局变量
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//
//	struct student s = { {100,'w',3.14},"zhangsan",20,95.5f};//定义一个结构体变量-局部变量
//	printf("%d %c %.2lf %s %d %.1f\n",s.ss.a,s.ss.c,s.ss.d, s.name, s.age, s.score);
//	
//	return 0;
//}

//结构体传参

struct S
{
	int arr[1000];
	float f;
	char ch[100];
};

void Print1(struct S tmp)
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", tmp.arr[i]);
	}
	printf("\n");
	printf("%.1f\n", tmp.f);
	printf("%s\n", tmp.ch);
}

void Print2(struct S* ps)
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", ps->arr[i]);
	}
	printf("\n");
	printf("%.1f\n", ps->f);
	printf("%s\n", ps->ch);
}

int main()
{
	struct S s = { {1,2,3,4,5,6,7,8,9,10},5.5f,"hello" };
	//Print1(s);
	Print2(&s);
	return 0;
}

////函数调用时传参的过程
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//
//	printf("%d\n", c);
//}
//博客中写