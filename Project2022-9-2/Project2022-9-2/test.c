////#include<stdio.h>
////
////f(int a)
////{
////	int b = 0;
////
////	static c = 3;
////	a = ++c, b++;
////	return (a);
////}
////
////int main()
////{
////	int a = 2, i, k;
////	for (i = 0; i < 2; i++)
////		k = f(a++);
////	printf("%d\n", k);
////
////
////
////
////	return 0;
////}
//
//
//#include<stdio.h>
//
//
////int main()
////{
////	int a = -1, b = 4, k;
////	k = ++a < 0 && !(b-- <= 0);
////	printf("%d%d%d\n", k, a, b);
////
////
////
////
////	return 0;
////}
//
////int main()
////{
////	float x, y;
////	x = 1/ 2.0;
////	y = 2;
////	printf("%f\n", x + y);
////
////
////
////	return 0;
////}
//
//
//
////int main()
////{
////	int i, j = 0;
////
////	for (i = 1; i < 1000; i++)
////	{
////		//if (((i % 7 == 0) || (i % 11 == 0)) && (!((i % 7 == 0) && (i % 11 == 0))))
////		//if(((i%7==0)||(i%11==0))&&((i%7!=0)&&(i%11!=0)))//´íÎó
////		{
////			printf("%d ", i);
////			j++;
////		}
////	}
////	printf("\n");
////	printf("×ÜÊıÊÇ£º%d", j);
////
////
////
////
////	return 0;
////}
//
//
//int main()
//{
//	/*int x = 8, y = 9;
//	int k;
//	k = (x++) + (++y);
//	printf("%d", k);
//*/
//	/*int a, b,j=0;
//	for (a = 1, b = 1; a < 4 && b != 4; a++)
//	{
//		j++;
//	}
//	printf("%d", j);*/
//
//	//printf("%d",strlen("\nabcc\\\",\\'',\041\0xf\t\n"));
//	printf("%d", strlen("\nabcc\\\",\\'',\041\0xf\t\n"));
//	return 0;
//}


#include<stdio.h>



void fun(int* x)
{
	printf("%d", ++(*x));
}
int main()
{
	int y = 20;
	fun(&y);
}