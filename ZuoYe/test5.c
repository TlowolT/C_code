#define _CRT_SECURE_NO_WARNINGS 1

//С����ϲ�����֣�����ϲ��0��1�������ڵõ���һ���������ÿλ�������0��1�����ĳһλ���������Ͱ������1�������ż������ô�Ͱ������0������ش������õ������Ƕ��١�
// 
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	//����
//	int num = 0;
//	scanf("%d", &num);
//	//����
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
//	//���
//	printf("%d\n", sum);
//	return 0;
//}


//С�����Ͽ���Ҫ��n��̨�ף���Ϊ���ȱȽϳ�������ÿ�ο���ѡ����һ�׻��������ף���ô��һ���ж������߷���
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

//��ʦ����С����һ�����������У�Ҫ��С���ְ��������ȥ�غ󰴴�С�������򡣵�����ʦ����������̫���ˣ�С����û�취���ĵ�ȥ�ز����������������
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

//С����ѧУ��ѧ¥�ĵ���ǰ���˺ܶ��ˣ�����ǰ����n�����ڵȵ��ݡ�����ÿ�ο��Գ���12�ˣ�ÿ��������Ҫ��ʱ��Ϊ4���ӣ�����Ҫ2���ӣ�����Ҫ2���ӣ���
//�����С���ּ��㻹��Ҫ���ٷ��Ӳ��ܳ˵��ݵ���¥�ϡ����������������1�㣩
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

//KiKi��һ����������֪��ת�ú�ľ��󣨽���������л����õ����¾����Ϊת�þ��󣩣����̰������
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

//��һ���������У��������ظ�������������ɾ��ָ����ĳһ�����������ɾ��ָ������֮������У�������δ��ɾ�����ֵ�ǰ��λ��û�з����ı䡣
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
//    int j = 0;//������¼��һ����������λ��
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

//��ʹ���ۼƳ˷��Ļ����ϣ�ͨ����λ���㣨<<��ʵ��2��n�η��ļ��㡣
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", 1 << n);
//	return 0;
//}

//KiKiѧϰ��ѭ����BoBo��ʦ��������һϵ�д�ӡͼ������ϰ���������Ǵ�ӡ�á�*����ɵġ����ġ�������ͼ����
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

//KiKiѧϰ��ѭ����BoBo��ʦ��������һϵ�д�ӡͼ������ϰ���������Ǵ�ӡ�á�*����ɵĴ��ո�ֱ��������ͼ����
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

//����Ա�����ֳ���֡���7λ���٣��Ӽ�������������ɼ���ÿ��7���������ٷ��ƣ���ȥ��һ����߷ֺ�һ����ͷ֣����ÿ���ƽ���ɼ���
//��ע�������ж������룩
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

//�Ӽ�������a, b, c��ֵ����̼��㲢���һԪ���η���ax2 + bx + c = 0�ĸ�����a = 0ʱ�������Not quadratic equation������a �� 0ʱ�����ݡ� = b2 - 4*a*c������������㲢������̵ĸ���

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

//KiKi����ĳ��ĳ���ж����죬��������ʵ�֡�������ݺ��·ݣ�������һ��������ж����졣
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

//�ڴ�Ữ��Ϊ�ֽ�Ϊ��λ�Ŀռ䣬ÿ���ֽڶ���һ�����
//ָ��/��ַ Ҫ��������������Ҫһ���ռ䣬����ռ����ָ�����

//�����ַ --> 
//�����ַ

//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	printf("%p\n", &a);//�����ַ
//	return 0;
//}
//
////�ַ�ָ��
//int main()
//{
//	//char ch = 'w';
//	//char* p = &ch; //ָ��pָ��ch�ĵ�ַ
//	char* p = "abcdef";//pָ��abcdef"�ĵ�ַ   (�洢���ڴ��ֻ��������
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
//��Ϊarr1arr2������һ��������������Ԫ�ص�ַ��һ����
//str1��str2��������Ԫ�ص�ַһ��

//typedef int* pint;
//#define  PINT int*
//int main()
//{
//	int a, b;//���ͣ�����
//	int* pa, pb;//ָ�룬����
//	int* pa, *pb;//ָ�룬ָ��
//	pint pa, pb;//ָ�룬ָ��
//	PINT pa, pb;//ָ�룬����
//	return 0;
//}


//��������- ������͵�����
//�ַ�����- ����ַ�������
//ָ������- ���ָ�������

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