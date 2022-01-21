#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//数组名是数组首元素的地址
//例外
//sizeof(数组名) 这里的数组名是表示整个数组，计算的是整个数组的大小，
//&数组名，数组名表示整个数组，取出的数组的地址
//int main()
//{
//	int a[] = { 1,2,3,4 };
//	printf("%d\n", sizeof(a));//16  数组名单独放在sizeof内部，计算整个数组的大小
//	printf("%d\n", sizeof(a+0));//4 a表示首元素的地址
//	printf("%d\n", sizeof(*a));//4 a表示首元素的地址，*a就是对首元素的地址的解引用
//	printf("%d\n", sizeof(a+1));//4 a表示首元素的地址,a+1是第二个元素的地址
//	printf("%d\n", sizeof(a[1]));//4 a[1]是数组的第二个元素
//	printf("%d\n", sizeof(&a));//4 取出的是数组的地址 ，地址就是4/8个字节
//	printf("%d\n", sizeof(*&a));//16 *和&抵消 或者 &a是数组地址 类型是int(*)[4] ,解引用访问的就是4个int的数组，大小是16字节
//	printf("%d\n", sizeof(&a+1));//&a是数组地址，&a+1跳过整个数组的地址，地址就是4/8
//	printf("%d\n", sizeof(&a[0]));//第一个元素的地址
//	printf("%d\n", sizeof(&a[0] +1));//第二个元素的地址
//	return 0;
//}

//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//
//	printf("%d\n", strlen(arr));//arr是首元素的地址，但Arr数组中没有\0,随机值
//	printf("%d\n", strlen(arr + 0));//同上
//	printf("%d\n", strlen(*arr));//错误的代码 ，strlen需要的是一个地址，从这个地址向后找字符，直到\0，统计字符的个数
//	//但是*arr是数组首元素，也就是’a'传给strlen的就是ASCLL码值，strlen会吧97作为起始地址，会访问冲突
//	printf("%d\n", strlen(arr[1]));//同上
//	printf("%d\n", strlen(&arr));//随机值
//	printf("%d\n", strlen(&arr + 1));//随机值
//	printf("%d\n", strlen(&arr[0] + 1));//随机值
//
//	//printf("%d\n", sizeof(arr));//arr作为数组名单独放在sizeof内部,计算的是整个数组的大小 6
//	//printf("%d\n", sizeof(arr+0));//arr就是首元素的地址 arr+0还是首元素地址，地址就是4/8
//	//printf("%d\n", sizeof(*arr));//1 arr就是首元素的地址,*arr就是首元素，大小是1个字节
//	//printf("%d\n", sizeof(arr[1]));//arr[1]就是数组的第二个元素，大小就是一个字节
//	//printf("%d\n", sizeof(&arr));//数组的地址 4/8
//	//printf("%d\n", sizeof(&arr+1));//&arr+1跳过了整个数组，还是地址
//	//printf("%d\n", sizeof(&arr[0] +1));//&arr[0]是第一个元素的地址，&arr[0]+1就是第二个元素的地址
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
//	//printf("%d\n", strlen(*arr));//访问冲突
//	//printf("%d\n", strlen(arr[1]));//访问冲突
//	printf("%d\n", strlen(&arr));//6
//	printf("%d\n", strlen(&arr+1));//随机值
//	printf("%d\n", strlen(&arr[0] +1));//5
//	return 0;
//}


//int main()
//{
//	char* p = "abcdef";
//	printf("%d\n", sizeof(p));//p是指针变量，计算的指针变量的大小 4/8字节
//	printf("%d\n", sizeof(p + 1));//p是指针变量,是存放地址的，P+1也是地址，地址大小4/8字节
//	printf("%d\n", sizeof(*p));//'a'p是char*的指针，解引用访问一个字节，sizeof(*p)是一个字节
//	printf("%d\n", sizeof(p[0]));//等价于*(P+0)等价于*p 1个字节
//	printf("%d\n", sizeof(&p));//4&p也是地址，是地址就是4/8个字节，&p是二级地址
//	printf("%d\n", sizeof(&p+1));//&p+1还是地址，跳过&p,4/8个字节
//	printf("%d\n", sizeof(&p[0] +1));//p[0]就是a,&p[0]就是a的地址，&p[0]+1就是b的地址
//	
//	
//	printf("%d\n", strlen(p));//6 p中存放的是’a'的地址，从’a'的位置向后求字符串的长度
//	printf("%d\n", strlen(p + 1));//p+1 指向‘b'的地址，从’b'的位置向后求字符串的长度
//	printf("%d\n", strlen(*p));//错误的
//	printf("%d\n", strlen(p[0]));//错误的
//	printf("%d\n", strlen(&p));//随机值
//	printf("%d\n", strlen(&p + 1));//随机值
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

