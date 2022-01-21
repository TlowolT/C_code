#define _CRT_SECURE_NO_WARNINGS 1

//小乐乐喜欢数字，尤其喜欢0和1。他现在得到了一个数，想把每位的数变成0或1。如果某一位是奇数，就把它变成1，如果是偶数，那么就把它变成0。请你回答他最后得到的数是多少。
// 
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	//输入
//	int num = 0;
//	scanf("%d", &num);
//	//计算
//	int tmp = 0;
//	int i = 0;
//	int sum = 0;
//	while (num)
//	{
//		tmp = num % 10;
//		if (tmp % 2 == 1)
//		{
//			tmp = 1;
//		}
//		else
//		{
//			tmp = 0;
//		}
//		sum += tmp* pow(10, i++);
//		num = num / 10;
//	}
//	
//
//	//输出
//	printf("%d\n", sum);
//	return 0;
//}


//小乐乐上课需要走n阶台阶，因为他腿比较长，所以每次可以选择走一阶或者走两阶，那么他一共有多少种走法？
//#include<stdio.h>
//int fib(int n)
//{
//    if (n == 1)
//    {
//        return 1;
//    }
//    else if (n == 2)
//    {
//        return 2;
//    }
//    else
//        return fib(n - 1) + fib(n - 2);
//}
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int ret = fib(n);
//    printf("%d\n", ret);
//    return 0;
//}

//老师给了小乐乐一个正整数序列，要求小乐乐把这个序列去重后按从小到大排序。但是老师给出的序列太长了，小乐乐没办法耐心的去重并排序，请你帮助他。
//#include<stdio.h>
//int main()
//{
//	int arr[100001] = { 0 };
//	int n = 0;
//	int k = 0;
//	int i = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &k);
//		arr[k] = k;
//	}
//	for (i = 0; i < 100001; i++)
//	{
//		if (arr[i] != 0)
//		{
//			printf("%d ", arr[i]);
//		}
//	}
//
//	return 0;
//}

//小乐乐学校教学楼的电梯前排了很多人，他的前面有n个人在等电梯。电梯每次可以乘坐12人，每次上下需要的时间为4分钟（上需要2分钟，下需要2分钟）。
//请帮助小乐乐计算还需要多少分钟才能乘电梯到达楼上。（假设最初电梯在1层）
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	
//	int t = (n / 12) * 4 + 2;
//	printf("%d\n", t);
//	return 0;
//}

//KiKi有一个矩阵，他想知道转置后的矩阵（将矩阵的行列互换得到的新矩阵称为转置矩阵），请编程帮他解答
//#include<stdio.h>
//int main()
//{
//	int arr[10][10] = { 0 };
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			printf("%d ", arr[j][i]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//有一个整数序列（可能有重复的整数），现删除指定的某一个整数，输出删除指定数字之后的序列，序列中未被删除数字的前后位置没有发生改变。
//#include<stdio.h>
//int main()
//{
//    int  n = 0;
//    int arr[50] = { 0 };
//    scanf("%d", &n);
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    int del = 0;
//    scanf("%d", &del);
//    int j = 0;//用来记录下一个存放数组的位置
//    for (i = 0; i < n; i++)
//    {
//        if (arr[i] != del)
//        {
//            arr[j++] = arr[i];
//        }
//
//    }
//    for (i = 0; i < j; i++)
//    {
//        printf("%d ", arr[i]);
//
//    }
//    return 0;
//}

//不使用累计乘法的基础上，通过移位运算（<<）实现2的n次方的计算。
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", 1 << n);
//	return 0;
//}

//KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“*”组成的“空心”三角形图案。
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//
//		int i = 0;
//		int j = 0;
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n; j++)
//			{
//				if (j == 0 || i == n - 1 || i == j)
//				{
//					printf("* ");
//				}
//				else
//				{
//					printf("  ");
//				}
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“*”组成的带空格直角三角形图案。
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		int i = 0;
//		int j = 0;
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n; j++)
//			{
//				if (i + j < n - 1)
//				{
//					printf("  ");
//				}
//				else
//				{
//					printf("* ");
//				}
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//公务员面试现场打分。有7位考官，从键盘输入若干组成绩，每组7个分数（百分制），去掉一个最高分和一个最低分，输出每组的平均成绩。
//（注：本题有多组输入）
//#include<stdio.h>
//int main()
//{
//	int arr[7] = { 0 };
//	while (~scanf("%d %d %d %d %d %d %d", arr, arr + 1, arr + 2, arr + 3, arr + 4, arr + 5, arr + 6))
//	{
//		int min = 100;
//		int max = 0;
//		int sum = 0;
//		int score = 0;
//		int i = 0;
//		for (i = 0; i < 7; i++)
//		{
//			scanf("%d", &score);
//			if (score < min)
//			{
//				min = score;
//			}
//			if (score > max)
//			{
//				max = score;
//			}
//			sum += score;
//		}
//		printf("%.2lf\n", (sum - max - min) / 5.0);
//	}
//	
//
//	return 0;
//}

//从键盘输入a, b, c的值，编程计算并输出一元二次方程ax2 + bx + c = 0的根，当a = 0时，输出“Not quadratic equation”，当a ≠ 0时，根据△ = b2 - 4*a*c的三种情况计算并输出方程的根。

//#include<stdio.h>
//#include<math.h>
//#define ESP 0.00000001
//int main()
//{
//	float a = 0.0f;
//	float b = 0.0f;
//	float c = 0.0f;
//	while (~scanf("%f %f %f", &a, &b, &c))
//	{
//		if (fabs(a-0.0) < ESP)
//		{
//			printf("Not quadratic equation\n");
//		}
//		else
//		{
//			float disc = b * b - 4 * a * c;
//			if (fabs(disc - 0.0) < ESP)
//			{
//				printf("x1=x2=%.2f\n", (-b) / (2 * a));
//			}
//			else if (disc >= ESP)
//			{
//				printf("x1=%.2f;x2=%.2f", (-b - sqrt(disc)) / (2 * a), (-b + sqrt(disc)) / (2 * a));
//			}
//			else
//			{
//				float real = (-b) / (2 * a);
//				float image = sqrt(-disc) / (2 * a);
//				printf("x1=%.2f-%.2fi;x2=%.2f+%.2fi", real, image, real, image);
//			}
//		}
//	}
//	
//	return 0;
//}

//KiKi想获得某年某月有多少天，请帮他编程实现。输入年份和月份，计算这一年这个月有多少天。
//#include<stdio.h>
//int main()
//{
//	int y = 0;
//	int m = 0;
//	int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//	while (~scanf("%d %d", &y, &m))
//	{
//		int day = days[m - 1];
//		if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
//		{
//			if (m == 2)
//			{
//				day++;
//			}
//		}
//		printf("%d\n", day);
//	}
//	return 0;
//}

//内存会划分为字节为单位的空间，每个字节都有一个编号
//指针/地址 要被储存起来，需要一个空间，这个空间就是指针变量

//虚拟地址 --> 
//物理地址

//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	printf("%p\n", &a);//虚拟地址
//	return 0;
//}
//
////字符指针
//int main()
//{
//	//char ch = 'w';
//	//char* p = &ch; //指针p指向ch的地址
//	char* p = "abcdef";//p指向“abcdef"的地址   (存储在内存的只读访问区
//	//*p = 'w';
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//
//	const char* str1 = "abcdef";
//	const char* str2 = "abcdef";
//
//	if (arr1 == arr2)
//	{
//		printf("arr1 == arr2\n");
//	}
//	else
//	{
//		printf("arr1 != arr2\n");
//	}
//	if (str1 == str2)
//	{
//		printf("str1 == str2\n");
//	}
//	else
//	{
//		printf("str1 != str2\n");
//	}
//
//	return 0;
//}
//因为arr1arr2的内容一样，但是数组首元素地址不一样；
//str1和str2的数组首元素地址一样

//typedef int* pint;
//#define  PINT int*
//int main()
//{
//	int a, b;//整型，整型
//	int* pa, pb;//指针，整型
//	int* pa, *pb;//指针，指针
//	pint pa, pb;//指针，指针
//	PINT pa, pb;//指针，整型
//	return 0;
//}


//整型数组- 存放整型的数组
//字符数组- 存放字符的数组
//指针数组- 存放指针的数组

//#include<stdio.h>
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//
//	int* arr[] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);//*(*(arr+i)+j);
//		}
//		printf("\n");
//	}
//
//	//char* arr[] = { "abcdef","qwer","zahgnsan" };
//	//int i = 0;
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	//for (i = 0; i < sz; i++)
//	//{
//	//	printf("%s\n", arr[i]);
//	//}
//
//	return 0;
//}