////////#include<stdio.h>
////////
////////
////////
////////int main()
////////{
////////	double t = 10;
////////
////////	printf("%lf\n", t++);//10
////////	printf("%lf\n", t);//11
////////	printf("%lf\n", t);
////////	printf("%lf %lf %lf\n", t = 1, t + 5, (t++)); //1 6  11
////////	printf("%lf\n", t);
////////	printf("\n");
////////	t = 11;
////////	printf("%lf\n", t);
////////	printf("%lf %lf %lf\n", t = 1, t + 5, t++);
////////	printf("\n");
////////	t = 11;
////////	printf("%lf\n", t);
////////	printf("%lf %lf %lf\n", t = 2, t + 5, ++t);// 1  7   2
////////	printf("\n");
////////	t = 11;
////////	printf("%lf\n", t);
////////	printf("%lf %lf %lf\n", t = 1, t + 5, ++t); 
////////	printf("\n");
////////	printf("%lf\n", t);
////////
////////
////////
////////
////////	printf("%lf\n", t++);//1
////////	printf("%lf\n", t);//2
////////
////////
////////
////////	return 0;
////////}
//////
//////
//////#include<stdio.h>
//////
//////int main()
//////{
//////	int a = 0, b = 5, c = 0, d;
//////
//////	d = !a && b++ || !c;
//////
//////	printf("%d\n", d);//1
//////
//////	printf("%d\n", b);//6
//////	printf("%d\n", c);//0
//////
//////
//////	return 0;
//////}
////
////
////
////#include<stdio.h>
////
////
////int main()
////{
////	int i;
////	for (i = 100; i <= 999; i++)
////	{
////		int g, s, b;
////		g = i % 10;
////		s = i / 10 % 10;
////		b = i / 100;
////		if (i == g * g * g + s * s * s + b * b * b)
////		{
////			printf("%d\n", i);
////		}
////
////
////	}
////
////
////
////
////
////	return 0;
////}
//
//
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	float t = 2.0, s = 1.0, sum = 0.0,f=0;
//
//	for (i = 1; i <= 20; i++)
//	{
//		sum = sum + t / s;
//		f = t;
//		t = t + s;
//		s = f;
//
//	}
//
//	printf("%f", sum);
//
//	return 0;
//}


#include<stdio.h>


int main()
{
	int year,c=0;
	for (year = 1840; year <= 2022; year++)
	{
		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		{
			printf("%d\n", year);
			c++;
		}
	}
	printf("%d", c);

	return 0;
}