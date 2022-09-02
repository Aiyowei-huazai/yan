////#include<stdio.h>
////
////void fun(int* a, int i, int j)
////{
////	int t;
////	if (i < j)
////	{
////		t = a[i];
////		a[i] = a[j];
////		a[j] = t;
////		i++;
////		j--;
////		for (i = 0; i < 4; i++)printf("%2d", a[i]);
////			fun(a, i, j);
////	}
////}
////	
////
////
////void main()
////{
////	int x[] = { 2,6,1,8 },i;
////	fun(x, 0, 3);
////	for (i = 0; i < 4; i++)printf("%2d", x[i]);
////	printf("\n");
////}
//
//#include<stdio.h>
//#define f(z) z*z
//
//int main()
//{
//	int k = 0;
//	int l = 0;
//	int h = 0;
//	l = f(4 );
//	h = f(2 + 2);
//	k = f(4 + 4) / f(2 + 2);
//	printf("k=%d\n", k);
//	printf("l=%d\n", l);
//	printf("h=%d\n", h);
//
//
//	return 0;
//}


#include<stdio.h>


int main()
{
	int a[2] = { 1,2 };
	//int swap(a[0], a[1]);
	
	printf("%d,%d ", a[0], a[1]);


	return 0;
}