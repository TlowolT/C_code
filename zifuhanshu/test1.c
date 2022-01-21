#define _CRT_SECURE_NO_WARNINGS 1


//"cbitlowotli@gmail.com"
//cbitlowotli
//gmail
//com
#include<stdio.h>
#include<errno.h>
#include<string.h>
#include<ctype.h>
#include<assert.h>
//int main()
//{
//	const char* p = "@.";
//	char arr[] = "cbitlowotli@gmail.com";
//	char buf[50] = { 0 };
//	strcpy(buf, arr);
//
//	//char* str = strtok(buf, p);//cbitlowolti
//	//printf("%s\n", str);
//	//str = strtok(NULL, p);//gmail
//	//printf("%s\n", str);
//	//str = strtok(NULL, p);//com
//	//printf("%s\n", str);
//	//不好的写法
//
//	//巧妙的写法
//	char* str = NULL;
//
//	for (str = strtok(buf, p); str != NULL;str = strtok(NULL,p))
//	{
//		printf("%s\n", str);
//	}
//
//	return 0;
//}
//strtok函数找第一个标记的时候，函数的第一个参数不是NULL
//strtok函数找非第一个标记的时候，函数的第一个参数是NULL


//C语言中规定了一些错误信息
//错误码 - 错误信息
//0 no error
//1
//2
//3
//
// strerror -可以把错误码翻译成错误信息
//

//int main()
//{
//	int  i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%s\n", strerror(i));
//	}
//	return 0;
//}


//C语言可以操作文件
//打开文件 fopen()
//当库函数使用的时候发生错误，会把errno这个全局的错误变量设置为本次执行库函数产生的错误码
//errno是C语言提供的全局变量，可以直接使用放在errno文件中
//
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (NULL == pf)
//	{
//		printf("%s\n",strerror(errno));
//		return 0;
//	}
//	//读文件
//	//...
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//字符分类函数
//iscntrl
//isspace

//int main()
//{
//	printf("%d\n", isspace('!'));
//	char ch = 'w';
//	if (isspace(ch))
//	{
//
//	}
//	return 0;
//}
//int main()
//{
//	char ch = '0';
//	if (ch >= '0' && ch <= '9')
//	{
//
//	}
//	if (isdigit(ch))
//	{
//
//	}
//	return 0;
//}

//字符转换

//int main()
//{
//	char ch = '0';
//	ch = getchar();
//	if (islower(ch))
//	{
//		ch = toupper(ch);
//	}
//	else
//	{
//		ch = tolower(ch);
//	}
//	printf("%c\n", ch);
//	return 0;
//}

//内存函数
// memcpy
// memmove
// memset
// memcmp
//

//void* my_memmove(void* dest,const void*src,size_t num)
//{
//	void* ret = dest;
//	assert(dest && src);
//
//	if (dest < src)
//	{
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest+1;
//			src = (char*)src+1;
//		}
//	}
//	else
//	{
//		while (num--)
//		{
//			*((char*)dest+num) = *((char*)src + num);
//		}
//	}
//
//	return ret;
//}
//
//void* my_memcpy(void* dest, const void* src,size_t num)
//{
//	void* ret = dest;
//	assert(dest && src);
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//	return ret;
//}
//void test1()
//{
//	int arr3[] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	//my_memcpy(arr3+2, arr3 , 5 * sizeof(arr3[0])); 
//	
//	my_memmove(arr3 , arr3+2, 20);
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr3[i]);
//	}
//}
//
//int main()
//{
//	test1();
//	/*char arr1[] = "abcdef";
//	char arr2[20] = {0};
//	strcpy(arr2, arr1);
//	int arr3[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr4[5] = { 0 };
//	my_memcpy(arr4,arr3+5,5*sizeof(arr3[0]));
//
//
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d\n", arr4[i]);
//	}*/
//	return 0;
//}
//

//int main()
//{
//	int arr1[] = { 1,2,7,4,5 };
//	int arr2[] = { 1,2,3,4,5 };
//	int ret = memcmp(arr1, arr2, 9);
//	printf("%d\n", ret);
//	return 0;
//}

//memset
//int main()
//{
//	/*char arr[20] = { 0 };
//	memset(arr, 'x', 10);*/
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	memset(arr, 0, 10);
//	return 0;
//}

//结构体
