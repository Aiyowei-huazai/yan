#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//
//
//int main()
//{
//	float arr[3][4] = { 65,67,70,60,80,87,90,81,90,99,100,98 };
//	void ave(float *p,int s);
//	void sea(float (*p)[4],int k);
//
//	ave(arr,12);
//	sea(arr,2);
//	return 0;
//}
//
//void sea(float(*p)[4],int n)
//{
//	int i;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%.2f ", *(*(p + n) + i));
//	}
//}
//
//void ave(float * p,int n)
//{
//	float nn;
//	nn = 0;
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		nn = nn + (*p);
//		p++;
//		
//	}
//	printf("平均分是：%.2f\n ", nn/12);
//}
//
//
////void ave(float arr[3][4])
////{
////	int i, j;
////	float n;
////	n = 0;
////	for (i = 0; i < 3; i++)
////	{
////		for (j = 0; j < 4; j++)
////		{
////			n = n + arr[i][j];
////		}
////	}
////	printf("平均分是：%f\n", n/12);
////}


//#include<stdio.h>
//
//int main()
//{
//	int max(int, int);
//	int min(int, int);
//	int a, b,c;
//	printf("请输入两个数！\n");
//	scanf("%d%d", &a, &b);
//	printf("请输入1-最大数，2-最小数\n");
//	scanf("%d", &c);
//
//	int (*p)(int n, int m);
//
//	if (c == 1) p = max;
//	else p = min;
//
//	(*p)(a, b);
//
//	return 0;
//}
//int max(int s, int d)
//{
//	printf("最大的是：%d", s > d ? s : d);
//}
//int min(int e, int r)
//{
//	printf("最小的是:%d\n", e > r ? r : e);
//}

#include<stdio.h>


int main()
{
	int i;
	int arr[][4] = { 60,70,80,90,56,89,67,88,34,78,90,66 };
	float* find(float(*p)[4], int );
	float* q;

	q=find(arr, 1);
	 
	for (i = 0; i < 4; i++)
	{

		printf("%f ", *(q + i));
	}

	return 0;
}


float* find(float(*p)[4], int k)
{
	float* s;
	s = *(p+k);
	printf("%f ", *s);
	return s;
}