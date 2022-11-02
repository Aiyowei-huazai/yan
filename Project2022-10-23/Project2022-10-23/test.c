//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//
//
//
//int main()
//{
//	int a = 10, b = 20;
//
//	int c;
//	printf("请输入1-最大 2-最小 3-加法 4-相减\n");
//	scanf("%d", &c);
//	int max(int a, int b);
//	int min(int a, int b);
//	int add(int a, int b);
//	int duc(int a, int b);
//	int fun(int x, int y,  int (*p)(int a, int b));
//	
//	switch(c)
//	{  
//	case 1: fun(a, b,  max);
//		break;
//	case 2:fun(a, b, min);
//		break;
//	case 3:fun(a, b, add);
//		break;
//	case 4:fun(a, b, duc);
//		break;
//	};
//	return 0;
//}
//int fun(int x, int y, int (*p)(int a, int b))
//{
//	int c;
//	c = (*p)(x, y);
//	printf("%d", c);
//}
//int max(int a, int b)
//{
//	if (a > b)return a;
//	else return b;
//
//}
//int min(int a, int b)
//{
//	if (a > b)return b;
//	else return a;
//}
//int add(int a, int b)
//{
//	return a + b;
//}
//int duc(int a, int b)
//{
//	return a - b;
//}

#include<stdio.h>


int main()
{
	int i;
	float arr[][4] = { 60,70,80,90,56,89,67,88,34,78,90,66 };
	float* find(float(*p)[4], int);
	float* q;

	q = find(arr, 1);

	for (i = 0; i < 4; i++)
	{

		printf("%f ", *(q + i));
	}

	return 0;
}


float* find(float(*p)[4], int k)
{
	float* s;
	s = *(p + k);
	return s;
}