#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>


//int fib(int n)
//{
//	if (n == 1 || n == 2)
//	{
//		return 1;
//	}
//	else return fib(n - 1) + fib(n - 2);
//	
//      
//}
//
//
//float fun(float y)
//{
//	if (y <= 0)
//	{
//		return 0;
//	}
//	else
//	{
//		return (fabs(y) + 3.2) / (sin(y) + 2);
//	}
//}
//
//int main()
//{
//	/*int i, n,s,sum;
//	n = 5;
//	s = 0;
//	sum = 0;
//	for (i = 1; i <= 5; i++)
//	{
//		s = s * 10 + i;
//		sum = sum + s;
//	}
//	printf("%d\n", sum);*/
//
//	/*int i;
//	for (i = 1; i <= 15; i++)
//	{
//		printf("%d ", fib(i));
//	}*/
//
//	float x;
//	scanf("%f", &x);
//
//	printf("f(%f)=%f", x, fun(x));
//
//
//
//	return 0;
//}
//int fun(char* p1)
//{
//	int count = 0;
//	while ((*p1) != '\0')
//	{
//
//		if ((*p1) == ' ')count++;
//		p1++;
//	}
//	return count;
//}

float fun(float y)
{
	if (y < 3)return 1.2;
	else if (y == 3)return 10;
	else if (y > 3) return y * 2 + 1;
}


int main()
{
	/*char arr[] = { "asj fla skdj sdjs sdsk" };

	int k=fun(arr);
	printf("%d", k);*/
	float x;
	scanf("%f", &x);

	printf("f(%.3f)=%.3f ", x, fun(x));



	return 0;
}