//#include<stdio.h>
//
//int main()
//{
//	int n ;
//	n = ;
//	int i, j;
//	for (i = 1; i <= n; i++)
//	{
//		for (j = n; j >= 1; j--)
//		{
//			if (j > i) printf(" ");
//			else printf("*");
//			
//		}
//		for (j = i - 1; j >= 1; j--)
//		{
//			printf("*");
//		}
//		printf("\n");
//
//	}
//	for (i = 1; i <= n-1; i++)
//	{
//		for (j = 1; j <= n; j++)
//		{
//			if (j <= i)printf(" ");
//			else printf("*");
//		}
//		for (j = n-1 - i; j > 0; j--)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	printf("%d,%d", i, j);
//
//	return 0;
//}


#include<stdio.h>

double fun(int n)
{
	double s = 0;
	int i, a = 0;
	for (i = 1; i <= n; i++)
	{
		a = a + i;
		s = s + 1.0 / a;
	}
	return s;
}

int main()
{

	//int n;
	//n = 5;
	//double t = 0, s ,sum=0,h=0;
	//s = 1.0;
	//int i;
	//for (i = 1; i <= 5; i++)
	//{
	//	t = t + i;
	//	sum = s / t;
	//	h = sum + h;
	//}

	//printf("%f", h);

	/*int n;
	double t;
	n = 5;
	t = fun(n);

	printf("ÊýÁÐÊÇ£º%f", t);*/

	//double s = 0;
	//int i, a = 0;
	//for (i = 0; i <= 5; i++)
	//{
	//	a = a + i;
	//	s = s + 1.0 / a;
	//}
	//printf("%lf", s);
	


	int arr[] = { 3,5,1,7,9,2,4,6,8,10 };
	int i, j,t;

	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			if (arr[j] < arr[i])
			{
				t = arr[j];
				arr[j] = arr[i];
				arr[i] = t;
			}
		}
	}

	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}


	return 0;
}