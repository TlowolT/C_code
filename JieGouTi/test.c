#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//�ṹ��һЩֵ�ü��ϣ���Щֵ��Ϊ��Ա�������ṹ��ÿ����Ա�����ǲ�ͬ���͵ı���

//������һ��������ͬԪ�صļ���

////�ṹ������
//struct student
//{
//	char name[20];
//	int age;
//	float score;
//}s1,s2;//�ṹ�����-ȫ�ֱ���
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//
//	struct student s;//����һ���ṹ�����-�ֲ�����
//
//	return 0;
//}

//�ṹ���Ա����
//�����Ǳ��������飬ָ�룬�����ṹ��

//��ʼ���ͷ���
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
//}s1,s2;//�ṹ�����-ȫ�ֱ���
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//
//	struct student s = { {100,'w',3.14},"zhangsan",20,95.5f};//����һ���ṹ�����-�ֲ�����
//	printf("%d %c %.2lf %s %d %.1f\n",s.ss.a,s.ss.c,s.ss.d, s.name, s.age, s.score);
//	
//	return 0;
//}

//�ṹ�崫��

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

////��������ʱ���εĹ���
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
//������д