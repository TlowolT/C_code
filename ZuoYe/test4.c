#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<math.h>

//写一个函数打印arr数组的内容，不使用数组下标，使用指针。
//
//arr是一个整形一维数组。
// 

//void print_arr(int* p, int sz)//p指向了arr
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *p++);
//	}
//}
//
////void print_arr(int arr[], int sz)
////{
////	int i = 0;
////	for (i = 0; i < sz; i++)
////	{
////		printf("%d ", arr[i]);
////		arr[i] = 0;
////	}
////}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//arr-->表示的是首元素地址
//	//int*
//	print_arr(arr, sz);
//
//	return 0;
//}

//将一个字符串str的内容颠倒过来，并输出。

//void reverse(char* arr,int len)
//{
//	char* left = arr;
//	char* right = arr + len - 1;
//	
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[10000] = { 0 };
//	gets(arr);
//	int len = strlen(arr);
//	reverse(arr, len);
//
//	printf("%s\n", arr);
//
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d %d", &n, &a);
//	int sum = 0;
//	int ret = 0;
//
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		ret = ret * 10 + a;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		int sum = 0;
//		int n = 1;
//		int tmp = i;
//		while (tmp /= 10)
//		{
//			n++;
//		}
//		tmp = i;
//
//		while (tmp)
//		{
//			sum += (int)pow(tmp % 10, n);
//			tmp /= 10;
//		}
//
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	int i = 0;
//	int j = 0;
//	for(i = 0; i < line; i++)
//	{
//		
//		for (j = 0;j<line-1-i;j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2*i+1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 0; i < line - 1; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * (line - 1-i)-1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	scanf("%d", &money);
//	
//	//total += money;
//
//	//empty += total;
//
//	//while (empty >= 2)
//	//{
//	//	total += empty / 2;
//	//	empty = empty / 2 + empty % 2;
//	//}
//
//	if (money <= 0)
//	{
//		total = 0;
//	}
//	else
//	{
//		total = money * 2 - 1;
//	}
//	printf("%d\n", total);
//
//	return 0;
//}

//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void Move(int* arr, int sz)
//{
//	int* left = arr;
//	int* right = arr + sz - 1;
//
//	while (left < right)
//	{
//		while (left < right && *left % 2 == 1)
//		{
//			left++;
//		}
//		while (left < right && *right % 2 == 0)
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int tmp = *left;
//			*left = *right;
//			*right = tmp;
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Print(arr, sz);
//	Move(arr, sz);
//	Print(arr, sz);
//	return 0;
//}

//int main()
//{
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			if (j == 0)
//			{
//				arr[i][j] = 1;
//			}
//			if (i == j)
//			{
//				arr[i][j] = 1;
//			}
//			if (i >= 2 && j >= 1)
//			{
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//			}
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int killer = 0;
//	for (killer = 'a'; killer <= 'd'; killer++)
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
//		{
//			printf("%c\n", killer);
//		}
//	}
//	return 0;
//}


//A选手说：B第二，我第三；
//
//B选手说：我第二，E第四；
//
//C选手说：我第一，D第二；
//
//D选手说：C最后，我第三；
//
//E选手说：我第四，A第一；
//
//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (((b == 2) + (a == 3) == 1)
//							&& ((b == 2) + (e == 4) == 1)
//							&& ((c == 1) + (d == 2) == 1)
//							&& ((c == 5) + (d == 3) == 1)
//							&& ((e == 4) + (a == 1) == 1)
//							)
//						{
//							if (a * b * c * d * e == 120)
//							{
//								printf("a = %d b = %d c = %d d = %d e = %d\n", a, b, c, d, e);
//							}
//						}
//					}
//
//				}
//			}
//		}
//	}
//	return 0;
//}