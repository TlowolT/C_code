#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
//ģ��ʵ�ֿ⺯��strlen
//int my_strlen(const char* arr)
//{
//	assert(arr != NULL);
//	const char* str = arr;
//	while (*str++)
//	{
//		;
//	}
//	return (str - arr-1);
//}
//
//int main()
//{
//	char arr[] = "hello world";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}


//ģ��ʵ�ֿ⺯��strcpy
//
//char* my_strcpy(char* dest,const char* src)
//{
//	assert(dest && src);
//	int ret = dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello world";
//	printf("%s\n", my_strcpy(arr1,arr2));
//	return 0;
//}

//
//��Ŀ��
//
//����һ���������飬ʵ��һ��������
//
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//
//����ż��λ������ĺ�벿�֡�

//
//����һ������arr,
//��������ָ��
// ��left����һ��ָ���һ��Ԫ�أ�
// (right)�ڶ���ָ��ָ������Ԫ��
// �����һԪ��Ϊ������ָ���һ����left++)
// ����Ԫ�أ�Ϊż����right--
// ����Ԫ�أ�Ϊ���������ж�left�Ƿ�Ϊż���������left = right ,����left++
//

void Conversion(int* arr,const int sz)
{
	int left = 0;
	int right = sz - 1;
	int tmp = 0;
	while (left < right)
	{
		while (left < right && arr[left] % 2 == 1)
		{
			left++;
		}
		while (left < right && arr[right] % 2 == 0)
		{
			right--;
		}
		if (left < right)
		{
			tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}
	}
}

void Print(int* arr, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	Conversion(arr,sz);
	Print(arr,sz);
	return 0;
}