#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	//拓展 
//	//修饰二级指针
//	const int* const * const ppa = &pa;
//	return 0;
//}

//strlen

//int my_strlen(const char* str)
//{
//	assert(str != NULL);
//	const char* end = str;
//	while (*end++ != '\0')
//	{
//		;
//	}
//	return end - str - 1;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//int main()
//{
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	return 0;
//}

//0表示假
//非0为真

//int main()
//{
//	int flag = 0;
//	if (flag)
//	{
//		;
//	}
//	return 0;
//}

//C99中引入了_Bool
//#include<stdbool.h>
//
//int main()
//{
//	_Bool flag = false;//true
//	if (flag)
//	{
//		printf("hehe\n");
//	}
//}

//int main()
//{
//	short int num;
//	signed short int num1;
//	return 0;
//}

//int main()
//{
//	/*int num = 10;
//	printf("%d", num);
//	num = -10;
//	printf("%d", num);*/
//
//
//	unsigned int num = 10;
//	printf("%u\n", num);
//	num = -10;
//	printf("%u\n", num);
//	return 0;
//}

//构造类型
//数组类型-自定义类型
//结构体类型
//枚举类型
//联合类型
//int main()
//{
//	int a[10];
//	int a[5];
//
//	return 0;
//}

//指针类型
// int*
// char*
// float*
// void*
//
//
//void test(void)
//{
//	void* p;
//}
//
//int main()
//{
//	test();
//	return 0;
//}


//int main()
//{
//	int a = 10;//0a 00 00 00
//	int b = -10;//f6 ff ff ff 
//	//内存中存储的是二级制的补码
//
//	//正数
//	//原码，反码，补码相同
//	//负数
//	//原码 ：按照一个数的正负直接写出二进制就是原码
//	//反码 ：符号位不变，其他位按位取反
//	//补码 ：反码的二进制位加一 
//	// 
//	//15
//	//1111
//	//00000000 00000000 00000000 00001111 - 原码，反码，补码
//	//最高位是符号位，后面是有效位
//	//符号位0 为正数，为1 为负数
//	//-15
//	//10000000 00000000 00000000 00001111 -原码
//	//11111111 11111111 11111111 11110000 -反码
//	//11111111 11111111 11111111 11110001 -补码
//
//	//10
//	//00000000 00000000 00000000 00001010
//	//0   0    0   0    0   0    0   a 
//	//0x 00 00 00 00 0a  
//	//-10
//	//10000000 00000000 00000000 00001010
//	//11111111 11111111 11111111 11110101
//	//11111111 11111111 11111111 11110110
//	//f   f    f   f    f   f    f   6
//	//0x ff ff ff f6
//
//	//整数为什么存储的是补码呢？
//	//计算机中只有加法器
//	// 减法器是由加法器模拟出来的
//	// 1+（-1）
//	// 原码的计算
//	// 00000000 00000000 00000000 00000001 --  1
//	// 10000000 00000000 00000000 00000001 -- -1
//	// ------------------------------------
//	// 10000000 00000000 00000000 00000010  -- -2
//	// 
//	//补码计算
//	// 00000000 00000000 00000000 00000001 --  1
//	// 11111111 11111111 11111111 11111111 --  -1
//	// ------------------------------------
//	//1 00000000 00000000 00000000 00000000
//	// 
//	//
//
//	return 0;
//}

//大小端
//大端：当一个数据的低字节的数据存放在高地址处，高字节序的内容放在了低地址处
//小端：当一个数据的低字节的数据存放在低地址处，高字节序的内容放在了高地址处
//
//int main()
//{
//	int a = 0x11223344;
//	//内存中 44 33 22 11
//	//大端字节序存储 --顺着存
//	//小端字节序存储 --倒着存
//	//--来源《格列夫游记》
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	//0x 00 00 00 01
//	//小端 ： 01 00 00 00 
//	//大端 ： 00 00 00 01
//	char* p = (char*)&a;
//	if (*p == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}
// 

//int check_sys()
//{
//	int a = 1;
//	return *(char*)&a;
//}
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}

