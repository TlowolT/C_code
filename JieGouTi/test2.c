#define _CRT_SECURE_NO_WARNINGS 1

//λ��
#include<stdio.h>
//struct A
//{
//	int _a : 2;//ʣ30 //00 01 10 11
//	int _b : 5;//25
//	int _c : 10;//15���Ѿ�������
//	//���¿���4���ֽ�
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
////λ�ε��ڴ����

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

//ö��

//enum day
//{
//	//ö�ٵĿ���ȡֵ
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

//���ϣ������壩
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
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//	return 0;
//}


////������Ĵ�С
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


//Ϊʲô��̬�ڴ�ĵķ���
//int a = 0;
//int arr[10] ={0};
//����ͨѶ¼1��000�˵���Ϣ
//��Щ��ֻ��Ҫ�����ˣ���Щ��1000������peoInfo data[1000];�ڿ��ѵ�
//���Զ�̬�ڴ���䣬���ڶ�����
//malloc
//calloc
//

//����ԭ��
//void* malloc(size_t size);
//
#include<stdlib.h>
#include<errno.h>
#include<string.h>
int main()
{
	//����10�����Ϳռ�
	//int arr[10];

	int* p = (int*)malloc(40);
	if (NULL == p)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	//ʹ��
	int i = 0;
	for (i = 10; i < 10; i++)
	{
		*(p + i) = i;
	}
	for (i = 10; i < 10; i++)
	{
		printf("%d\n", p[i]);
	}

	//�ͷ�
	free(p);
	//���ͷ����p����Ұָ��
	p = NULL;

	return 0;
}