////#include<stdio.h>
////#include<math.h>
////
////
////
////int main()
////{
////	double sum=0, s = 1.0, t = 1.0;
////	
////	int i, f = 1;
////	double pi;
////	sum = t;
////	for (i = 1; fabs(t) > 1E-6;i++)
////	{
////		f = -f;
////		t = f * s / (2 * i + 1);
////		sum = sum + t;
////	}
////
////	pi = 4 * sum;
////	printf("pi=%lf\n", pi);
////
////	/*double pi, s = 0;
////	double a = -1.0;
////	int i = 1;
////	for (; fabs(a / i) > 1e-6;)
////	{
////		a = -a;
////		s = s + a / i;
////		i = i + 2;
////	}
////	pi = 4 * s;
////	printf("pi=%f\n", pi);*/
////
////	return 0;
////}
////
////
//////int main()
//////{
//////	int arr[2] = { 20,60 };
//////	int* p = arr;
//////
//////
//////	printf("%d\n", *p++);
//////	printf("%d", *p);
//////
//////
//////
//////
//////	return 0;
//////}
//
//
//#include<stdio.h>
//
//
//int main()
//{
//	int i;
//	double sum=0;
//
//	for (i = 1; i <= 100; i++)
//	{
//		sum = sum + i;
//	}
//
//	for (i = 1; i <= 50; i++)
//	{
//		sum = sum + i * i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		sum = sum + 1.0 / (i + 1);
//	}
//
//	printf("%f\n", sum);
//
//	return  0;
//}

#include<stdio.h>

float fun(float n)
{
	float i, s = 0, a = 1;
	for (i = 1; i <= n; i++)
	{
		a = a * i;
		s = s + a;
	}
	return s;
}
int main()
{
	float sum = 0;
	/*int i;
	float  t = 1;*/
	float i, t = 1;
	for (i = 1; i <= 20; i++)
	{
		t = t * i;
		sum = sum + t;
	}

	printf("×Ô¼º=%f\n", sum);

	float s = 0, n = 20;
	s = fun(n);
	printf("½Ì²Ä=%f\n\n", s);

	return 0;
}