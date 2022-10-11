#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>
//
////float fun1(float y)
////{
////	return (exp(y) + fabs(y - 6)) / (1 + 1.3);
////}
//
////double fun(double x)
////{
////	if (x<300 && x>-300)
////	{
////		return (x * x * x) / (log10(fabs(x) + 2.6));
////	}
////	else if (x <= -300 || x >= 300) return -1;
////	else return 0;
////
////}
//
//int main()
//{
//	/*float x;
//	scanf("%f", &x);
//
//	printf("fun(%f)=%f", x, fun1(x));*/
//
//	/*printf("%f", sin(30*3.141592/180));*/
//
//	//char a[4], b[4], c[4];
//	//char d[4];
//
//	//strcpy(a, "abc");
//	//strcpy(b, "dac");
//	//strcpy(c, "cbc");
//	////printf("%s", a);
//
//	//if (strcmp(a, b) < 0) {
//	//	strcpy(d, a);
//	//	strcpy(a, b);
//	//	strcpy(b, d);
//	//}
//	//if (strcmp(a, c) < 0) {
//	//	strcpy(d, a);
//	//	strcpy(a, c);
//	//	strcpy(c, d);
//	//}
//	//if (strcmp(b, c) < 0)
//	//{
//	//	strcpy(d, c);
//	//	strcpy(c, b);
//	//	strcpy(b, d);
//	//}
//
//	//printf("%s\n", a);
//	//printf("%s\n", b);
//	//printf("%s\n", c);
//
//	/*printf("f(%.2f)=%.2f\n", 0.8, fun(0.8));
//	printf("f(%.2f)=%.2f\n", 4.5, fun(4.50));
//	printf("f(%.2f)=%.2f\n", 725.00, fun(725.00));*/
//	//int i, j;
//	//int arr[3][3] = { 0 };
//	//int f = 1;
//	//for (i = 0; i < 3; i++)
//	//{
//	//	for (j = 0; j < 3; j++)
//	//	{
//	//		scanf("%d", &arr[i][j]);
//	//	}
//	//}
//	//for (i = 0; i < 3; i++)
//	//{
//	//	for (j = 0; j < 3; j++)
//	//	{
//	//		if (arr[i][j]!=arr[j][i])
//	//		{
//	//			printf("²»ÊÇ");
//	//			f = 0;
//	//			return 0;
//	//		}
//	//		
//	//	}
//	//}
//	//if (f == 1)printf("ÊÇ");
//	double fun(double x);
//
//	printf("f(%.2f)=%.2f\n",0.40,fun(0.40) );
//	printf("f(%.2f)=%.2f\n",1.50,fun(1.50) );
//	printf("f(%.2f)=%.2f\n",780.0,fun(780.0));
//
//	return 0;
//}
//double fun(double x)
//{
//	if (x > -700 & x < 700)
//	{
//		return (sqrt(5.8 + x)) / (cos(x) + 2.1);
//	}
//	else if (x >= 700 || x <= 700) return -1;
//}
double fun(double x)
{

	if (x <= 1600) return 0;
	else if (x > 1600 && x <= 2100) return (x - 1600) * 0.05 ;
	else if (x > 2100 && x <= 3100) return (x - 1600) * 0.1 - 25;
	else if (x > 3100) return (x - 1600) * 0.15 - 125;
}

int main()
{
	printf("f(%d)=%.3f\n",1825,fun(1825) );
	printf("f(%d)=%.3f\n",2700,fun(2700) );
	printf("f(%d)=%.3f\n",5655,fun(5655));



	return 0;
}