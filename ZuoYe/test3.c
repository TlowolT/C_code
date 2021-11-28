#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
//int main()
//{
//	char str[] = { 0 };
//	gets(str);
//	int len = strlen(str);
//	
//	
//	while ()
//	{
//		int i = len - 1;
//		int count = 0;
//		if (str[i] != ' ')
//		{
//			i--;
//			count++;
//		}
//		int j = 0;
//		for (j = 0; j < count; j++)
//		{
//			int tmp = str[j];
//			str[j] = str[i];
//			str[i] = tmp;
//			i++;
//		}
//	}
//	return 0;
//}

//int cnt = 0;
//int fib(int n)
//{
//	cnt++;
//	if (n == 0)
//	{
//		return 1;
//	}
//	else if(n == 1)
//	{
//		return 2;
//	}
//	else
//	{
//		return fib(n - 1) + fib(n - 2);
//	}
//}
//int main()
//{
//	fib(8);
//	printf("%d", cnt);
//}
////fib(8)
////     fib(7) +          fib(6)
////   6       5          5     4
//// 5   4    4   3     4  3   3  2
////4 3 3 2  3 2 2 1   

//int main()
//{
//	int x = 1;
//	do {
//		printf("%2d\n", x++);
//	} while (x--);
//	return 0;
//}

//int a = 1;
//void test()
//{
//	int a = 2;
//	a += 1;
//}
//int main()
//{
//	test();
//	printf("%d\n", a);
//	return 0;
//}

//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//
//	int m = (a > b) ? (a) : (b);
//	while (1)
//	{
//		if (m % a == 0 && m % b == 0)
//		{
//			break;
//		}
//		m++;
//	}
//	printf("%d\n", m);
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int i = 0;
//	while (i * a % b != 0)
//	{
//		i++;
//	}
//	printf("%d\n", i*a);
//
//	return 0;
//}

//void reverse(char* left, char* right)
//{
//	assert(left && right);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right++;
//	}
//}

//int main()
//{
//	char arr[100] = { 0 };
//	gets(arr);
//	int len = strlen(arr);
//
//	char* start = arr;
//	char* end = arr;
//
//	while (*end != '\0')
//	{
//		while (*end != ' ' && *end != '\0')
//		{
//			end++;
//		}
//
//		reverse(start, end - 1);
//		if (*end == '\0')
//		{
//			start = end;
//		}
//		else
//		{
//			start = end + 1;
//		}
//		
//		end = start;
//	}
//	reverse(arr, arr+len-1);
//
//	printf("%s\n", arr);
//	return 0;
//}

void reverse(char* left, char* right)
{
    assert(left && right);
    while( left < right)
    {
        char tmp = *left;
        *left = *right;
        *right = tmp;
        left++;
        right--;
    }
}

int main()
{
    char arr[100] = { 0 };
    gets(arr);
    int len = strlen(arr);

    char* start = arr;
    char* end = arr;

    while (*end != '\0')
    {
        while (*end != ' ' && *end != '\0')
        {
            end++;
        }
        reverse(start, end - 1);
        if (*end == '\0')
        {
            start = end;
        }
        else
        {
            start = end + 1;
        }
        end = start;
    }
    reverse(arr, arr + len - 1);
    printf("%s\n", arr);
    return 0;
}