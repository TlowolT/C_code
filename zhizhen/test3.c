#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//��������������Ԫ�صĵ�ַ
//����
//sizeof(������) ������������Ǳ�ʾ�������飬���������������Ĵ�С��
//&����������������ʾ�������飬ȡ��������ĵ�ַ
//int main()
//{
//	int a[] = { 1,2,3,4 };
//	printf("%d\n", sizeof(a));//16  ��������������sizeof�ڲ���������������Ĵ�С
//	printf("%d\n", sizeof(a+0));//4 a��ʾ��Ԫ�صĵ�ַ
//	printf("%d\n", sizeof(*a));//4 a��ʾ��Ԫ�صĵ�ַ��*a���Ƕ���Ԫ�صĵ�ַ�Ľ�����
//	printf("%d\n", sizeof(a+1));//4 a��ʾ��Ԫ�صĵ�ַ,a+1�ǵڶ���Ԫ�صĵ�ַ
//	printf("%d\n", sizeof(a[1]));//4 a[1]������ĵڶ���Ԫ��
//	printf("%d\n", sizeof(&a));//4 ȡ����������ĵ�ַ ����ַ����4/8���ֽ�
//	printf("%d\n", sizeof(*&a));//16 *��&���� ���� &a�������ַ ������int(*)[4] ,�����÷��ʵľ���4��int�����飬��С��16�ֽ�
//	printf("%d\n", sizeof(&a+1));//&a�������ַ��&a+1������������ĵ�ַ����ַ����4/8
//	printf("%d\n", sizeof(&a[0]));//��һ��Ԫ�صĵ�ַ
//	printf("%d\n", sizeof(&a[0] +1));//�ڶ���Ԫ�صĵ�ַ
//	return 0;
//}

//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//
//	printf("%d\n", strlen(arr));//arr����Ԫ�صĵ�ַ����Arr������û��\0,���ֵ
//	printf("%d\n", strlen(arr + 0));//ͬ��
//	printf("%d\n", strlen(*arr));//����Ĵ��� ��strlen��Ҫ����һ����ַ���������ַ������ַ���ֱ��\0��ͳ���ַ��ĸ���
//	//����*arr��������Ԫ�أ�Ҳ���ǡ�a'����strlen�ľ���ASCLL��ֵ��strlen���97��Ϊ��ʼ��ַ������ʳ�ͻ
//	printf("%d\n", strlen(arr[1]));//ͬ��
//	printf("%d\n", strlen(&arr));//���ֵ
//	printf("%d\n", strlen(&arr + 1));//���ֵ
//	printf("%d\n", strlen(&arr[0] + 1));//���ֵ
//
//	//printf("%d\n", sizeof(arr));//arr��Ϊ��������������sizeof�ڲ�,���������������Ĵ�С 6
//	//printf("%d\n", sizeof(arr+0));//arr������Ԫ�صĵ�ַ arr+0������Ԫ�ص�ַ����ַ����4/8
//	//printf("%d\n", sizeof(*arr));//1 arr������Ԫ�صĵ�ַ,*arr������Ԫ�أ���С��1���ֽ�
//	//printf("%d\n", sizeof(arr[1]));//arr[1]��������ĵڶ���Ԫ�أ���С����һ���ֽ�
//	//printf("%d\n", sizeof(&arr));//����ĵ�ַ 4/8
//	//printf("%d\n", sizeof(&arr+1));//&arr+1�������������飬���ǵ�ַ
//	//printf("%d\n", sizeof(&arr[0] +1));//&arr[0]�ǵ�һ��Ԫ�صĵ�ַ��&arr[0]+1���ǵڶ���Ԫ�صĵ�ַ
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";
//	//printf("%d\n", sizeof(arr));//7
//	//printf("%d\n", sizeof(arr + 0));//4 
//	//printf("%d\n", sizeof(*arr));//1
//	//printf("%d\n", sizeof(arr[1]));//1
//	//printf("%d\n", sizeof(&arr));//4
//	//printf("%d\n", sizeof(&arr+1));//4
//	//printf("%d\n", sizeof(&arr[0] +1));//4
//
//	printf("%d\n", strlen(arr));//6 
//	printf("%d\n", strlen(arr + 0));//6
//	//printf("%d\n", strlen(*arr));//���ʳ�ͻ
//	//printf("%d\n", strlen(arr[1]));//���ʳ�ͻ
//	printf("%d\n", strlen(&arr));//6
//	printf("%d\n", strlen(&arr+1));//���ֵ
//	printf("%d\n", strlen(&arr[0] +1));//5
//	return 0;
//}


//int main()
//{
//	char* p = "abcdef";
//	printf("%d\n", sizeof(p));//p��ָ������������ָ������Ĵ�С 4/8�ֽ�
//	printf("%d\n", sizeof(p + 1));//p��ָ�����,�Ǵ�ŵ�ַ�ģ�P+1Ҳ�ǵ�ַ����ַ��С4/8�ֽ�
//	printf("%d\n", sizeof(*p));//'a'p��char*��ָ�룬�����÷���һ���ֽڣ�sizeof(*p)��һ���ֽ�
//	printf("%d\n", sizeof(p[0]));//�ȼ���*(P+0)�ȼ���*p 1���ֽ�
//	printf("%d\n", sizeof(&p));//4&pҲ�ǵ�ַ���ǵ�ַ����4/8���ֽڣ�&p�Ƕ�����ַ
//	printf("%d\n", sizeof(&p+1));//&p+1���ǵ�ַ������&p,4/8���ֽ�
//	printf("%d\n", sizeof(&p[0] +1));//p[0]����a,&p[0]����a�ĵ�ַ��&p[0]+1����b�ĵ�ַ
//	
//	
//	printf("%d\n", strlen(p));//6 p�д�ŵ��ǡ�a'�ĵ�ַ���ӡ�a'��λ��������ַ����ĳ���
//	printf("%d\n", strlen(p + 1));//p+1 ָ��b'�ĵ�ַ���ӡ�b'��λ��������ַ����ĳ���
//	printf("%d\n", strlen(*p));//�����
//	printf("%d\n", strlen(p[0]));//�����
//	printf("%d\n", strlen(&p));//���ֵ
//	printf("%d\n", strlen(&p + 1));//���ֵ
//	printf("%d\n", strlen(&p[0] + 1));//5
//
//	return 0;
//}

//int main()
//{
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));//48
//	printf("%d\n", sizeof(a[0][0]));//4 
//	printf("%d\n", sizeof(a[0]));//16
//	printf("%d\n", sizeof(a[0]+1));//4 
//	printf("%d\n", sizeof(*(a[0] + 1)));//4
//	printf("%d\n", sizeof(a + 1));//4
//	printf("%d\n", sizeof(*(a + 1)));//16
//	printf("%d\n", sizeof(&a[0]+1));//4
//	printf("%d\n", sizeof(*(&a[0] +1)));//16
//	printf("%d\n", sizeof(*a));//16
//	printf("%d\n", sizeof(a[3]));//16
//

//	return 0;
//}

//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));
//	return 0;
//}

