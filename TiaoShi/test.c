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

//F9 - �л��ϵ�--����ִ�е��ϵ㴦�ͻ�����ͣ����
//F9��F5���ʹ�ã�F5�����ִ�д��룬����һ���߼��ϵĶϵ�

//F10--�����--����������
//F11�����--����뺯��

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
//���ö�ջ


//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	//����n�Ľ׳�
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
//��δ����������Ӷ�û���⣬�����г������⣬�����Ҫ����
//f10���ԣ�n����3�����Ӵ���������Ҫ�۲��ֵ������F10
//j =1 ʱ i = 1  ret =1 sum =1;
//j =2 ʱ i =1,2  ret =2 sum =3;
//j =3 ʱ i =1,2,3  ret = 12 sum =15
//ret��ʱ������bug��������ѭ����f9,���һ���꣬���������ϵ㣬�ٵ���
//ret��Ϊ��һ��ѭ��������2������ÿ��ret��ʼ��Ϊ1�����bug�ͽ��


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
//	assert(src != NULL);//����
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
//	assert(src != NULL);//����
//
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//char* my_strcpy(char* dest, char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);//����
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
	assert(src != NULL);//����

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

//const ���α��� 
//����ָ��
//����*�����
// const ���ε���ָ��ָ������ݣ�*p)����ʾָ��ָ������ݲ���ͨ��ָ�����ı�
//����ָ�����������Ըı�
// ����*���ұ�
//���ε���ָ���������ָ����������ݲ����޸�
//����ָ��ָ������ݿ���ͨ��ָ�����ı��


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