#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
//模拟实现库函数strlen
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


//模拟实现库函数strcpy
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
//题目：
//
//输入一个整数数组，实现一个函数，
//
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//
//所有偶数位于数组的后半部分。

//
//创建一个数组arr,
//创建两个指针
// （left）第一个指针第一个元素，
// (right)第二个指针指向最后的元素
// 如果第一元素为奇数，指针加一，（left++)
// 最后的元素，为偶数，right--
// 最后的元素，为奇数数，判断left是否为偶数，如果是left = right ,不是left++
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