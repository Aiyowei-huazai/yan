////#define _CRT_SECURE_NO_WARNINGS 1
////#include<stdio.h>
////
////int main()
////{
////	int m, n, w;
////	scanf("%d,%d", &m, &n);
////	while (n)
////	{
////		w = m % n;
////		m = n;
////		n = w;
////	}
////	printf("%d", m);
////
////
////	return 0;
////}
//
//
//#include<stdio.h>
//
//int main()
//{
//  /*  int i = 1, j = 0;
//    i = j = ((i = 3)++);*/
//
//
//  /*  int i = 1, j = 1;
//    i += i += 2;*/
//
//   //int i = 0, j = 1;
//   // int k;
//   //// k == 1 ? i += 3 : i = 2;
//   // j>i ?i += 3 : i = 2;
//
//    /*int i = 0, j = 0;
//    (i = 2, i + (j = 2));*/
//
//    printf("%d", i);
//
//    return 0;
//}


#include<stdio.h>

#pragma pack(2)
int main()
{
	//int n = 10;
	//while (n>7)
	//{
	//	n--;
	//	printf("%d", n);
	//}

	//int s = 0;
	//int i = 1;
	//while (i++ < 100)
	//	s += i;

	struct student
	{
		char name[10];
		char sex;
		int age;
		struct
		{
			int year;
			int month;
			int day;
		}birth;
	}stul;

	printf("%d", sizeof(stul));

	return 0;
}