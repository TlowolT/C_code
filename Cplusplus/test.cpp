#define _CRT_SECURE_NO_WARNINGS 1

//c++����ʮ����ؼ��֣�c���Թؼ���32��
//#include<iostream> //�ȼ���c����<stdio.h>
//����io��,�ǿ���̨����������
//using namespace std;

//namespace �����ռ�

//int main()
//{
//	return 0;
//}

////������ͻ
//#include<stdio.h>
//#include<stdlib.h>
//
//int rand = 0;
//
//int main()
//{
//	printf("%d", rand);
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//namespace pro
//{
//	int f = 0;
//	int rand = 0;
//}
//
//void f()
//{}
//
//
//int a = 0;
//int main()
//{
//	int a = 1;
//	printf("%d\n", pro::rand);
//
//	printf("%d\n", a);
//	printf("%d\n", ::a);//�������޶���
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//
//namespace cb
//{
//	int a = 0;
//
//	void f()
//	{
//
//	}
//
//	struct ListNode
//	{
//		int val;
//		struct ListNode* next;
//	};
//}
//
//
//namespace xb
//{
//	struct ListNode
//	{
//		int val;
//		struct ListNode* next;
//	};
//	struct QueueNode
//	{
//		int val;
//		struct QueueNode* next;
//	};
//}
//
//int main()
//{
//	cb::ListNode* n1 = NULL;
//	xb::ListNode* n2 = NULL;
//	return 0;
//}

//
//#include<stdio.h>
//#include<stdlib.h>
//
//namespace pro
//{
//	namespace cb
//	{
//		struct ListNode
//		{
//			int val;
//			struct ListNode* next;
//		};
//	}
//}
//
//namespace pro
//{
//	namespace mix
//	{
//		struct ListNode
//		{
//			int val;
//			struct ListNode* next;
//		};
//	}
//}
//using namespace pro;
//int main()
//{
//	cb::ListNode n1;
//	mix::ListNode n2;
//	return 0;
//}

//namespace pro
//{
//	struct ListNode
//	{
//		int val;
//		struct ListNode* next;
//	};
//}
//
//namespace pro
//{
//	struct ListNode
//	{
//		int val;
//		struct ListNode* next;
//	};
//}
//
//int main()
//{
//
//	return 0;
//}
//
//namespace pro
//{
//	int f = 0;
//	int rand = 0;
//}
//
//using  pro::f;
//int main()
//{
//	f += 1;
//	printf("%d\n", f);
//
//	pro::rand = 1;
//	printf("%d\n", pro::rand);
//}



//#include<iostream>
//
//int main()
//{
//	std::cout << "hello world" << std::endl;
//	return 0;
//}



//#include<iostream>
//using  std::cout;
//using  std::endl;
//int main()
//{
//	cout << "hello world" << endl;
//	return 0;
//}


//#include<stdio.h>
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	printf("%d\n", a);
//
//	cin >> a ;
//	cout << a << endl;
//	return 0;
//}


//#include<iostream>
//using namespace std;
//int main()
//{
//	int a;
//	double d;
//	cin >> a >> d;
//	cout << a <<" "<< d << endl;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//void TestFunc(int a = 0)
//{
//	cout << a << endl;
//}
//
//int main()
//{
//	TestFunc();//û�д���ʱ��ʹ�ò�����Ĭ��ֵ
//	TestFunc(1);
//
//	return 0;
//}
//#include<iostream>
//using namespace std;
//
//void TestFunc(int a = 10, int b = 20, int c = 30)
//{
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl << endl;
//}
//
//int main()
//{
//	TestFunc();
//	TestFunc(1);
//	TestFunc(1,2);
//	TestFunc(1,2,3);
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//void TestFunc(int a, int b = 20, int c = 30)
//{
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl << endl;
//}
//
//int main()
//{
//	TestFunc(1);
//	TestFunc(1, 2);
//	TestFunc(1, 2, 3);
//	return 0;
//}

//C���Բ�֧��ͬ������
//C++֧��ͬ������
//Ҫ�󣺺�������ͬ
//������ͬ����������/����/˳��

//#include<iostream>
//using namespace std;
//int Add(int left, int right)
//{
//	return left + right;
//}
//double Add(double left, double right)
//{
//	return left + right;
//}
//int main()
//{
//	cout << Add(1,2) << endl;
//	cout << Add(1.1,2.2) << endl;
//	return 0;
//}

//void f(int i, double d)
//{
//	cout << "int i ,double d" << endl;
//}
//
//void f(double i, int d)
//{
//	cout << "double i, int d" << endl;
//}