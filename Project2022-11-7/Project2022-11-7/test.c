#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//int main()
//{
//	float fun(int, float);
//	float  x, t;
//	int n;
//	scanf("%d%f", &n, &x);
//	t = fun(n, x);
//	printf("%f", t);
//	return 0;
//}
//
//float fun(int n, float x)
//{
//	if (n == 0)return 1;
//	else if (n == 1)return x;
//	else if (n > 1) return ((2 * n - 1) * x * fun(n - 1, x) - (n - 1) * fun(n - 2, x)) / n;
//}


//double p(int n, double x)
//{
//	if (n == 0)return 1;
//	else if (n == 1)return x;
//	else if(n>1) return ((2 * n - 1) * x * p(n - 1, x) - (n - 1) * p(n - 2, x)) / n;
//	return 0;
//}
//
//void main()
//{
//	int n;
//	double x;
//	printf("请输入整数n,实数x:\n");
//	scanf("%d %lf", &n, &x);
//	printf("计算结果是：%lf", p(n, x));
//}

#include<stdio.h>

//int main()
//{
//	int i;
//	int yinzi(int);
//	for (i = 2; i <= 50; i++)
//	{
//		int m, n;
//		n = yinzi(i);
//		m = yinzi(n);
//		if (n == m)printf("%d\n ", i);
//	}
//	
//
//	return 0;
//}
//int yinzi(int s)
//{
//	int sum = 1, j;
//	for (j = 2; j < s; j++)
//	{
//		if (s % j == 0)
//		{
//			sum = sum + j;
//		}
//	}
//	return sum;
//}


void main()
{
	int m, n, i, k;
	for (m = 2; m <= 50; m++)
	{
		n = 1;
		for (i = 2; i <= m / 2; i++) if (m % i == 0) n = n + i;
		k = 1;
		for (i = 2; i <= n / 2; i++) if (n % i == 0)k = k + i;
		if (k == m && m <= k)
		{
			printf("%d\n", m);
		}
	}
}