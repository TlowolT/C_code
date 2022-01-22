#define _CRT_SECURE_NO_WARNINGS 1


//自定义类型
//结构体，枚举，联合体

//结构体的声明

//struct Stu
//{
//	char name[20];
//	char sex[5];
//	int age;
//	int hight;
//}s2,s3,s4;//s2,s3,s4是全局变量
//
//struct Stu s5;
//
//int main()
//{
//	struct Stu s1;//s1是结构体变量，局部变量
//
//	return 0;
//}


//struct
//{
//	char c;
//	int a;
//	double d;
//}sa;
//
//struct
//{
//	char c;
//	int a;
//	double d;
//}*ps;
//
//int main()
//{
//
//	return 0;
//}

//struct Node
//{
//	int data;
//	struct Node* next;
//};

//error
//typedef struct
//{
//	int data;
//	Node* next;
//}Node;

#include<stdio.h>
#include<stddef.h>

//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node;
//
//struct Stu
//{
//	char name[20];
//	char sex[5];
//	int age;
//	int hight;
//};
//
//struct Data
//{
//	struct Stu s;
//	char ch;
//	double d;
//};
//int main()
//{
//	struct Node n2 = { 100, NULL };
//	struct Stu s1 = { "zhangsan","nan",20,180 };
//	struct Data d = { {"lisi","nv",30,166} ,'w',3.14};
//
//	return 0;
//}

//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//};
//int main()
//{
//	/*printf("%d\n", sizeof(struct S1));*/
//	
//	printf("%d\n", offsetof(struct S1, c1));
//	printf("%d\n", offsetof(struct S1, i));
//	printf("%d\n", offsetof(struct S1, c2));
//
//	return 0;
//}
//offsetof 

//
//struct S1
//{
//	char a;
//	char b;
//	short c;
//};
//
//struct S2
//{
//	char a;
//	short b;
//	char c;
//};
//int main()
//{
//	//printf("%d\n", sizeof(struct S1));//4
//	//printf("%d\n", sizeof(struct S2));//6
//	printf("%d\n", offsetof(struct S2, a));
//	printf("%d\n", offsetof(struct S2, b));
//	printf("%d\n", offsetof(struct S2, c));
//	return 0;
//}


//#pragma pack(1)
//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//};
//int main()
//{
//	printf("%d\n", sizeof(struct S1));
//	return 0;
//}


//#pragma pack(4)
//struct S
//{
//	char c;
//	double d;
//	char e;
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct S));
//	return 0;
//}

