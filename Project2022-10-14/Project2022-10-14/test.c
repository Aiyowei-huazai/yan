#include<stdio.h>
#include<string.h>
#include<math.h>


////
////int fun2(int a[], int n, int b[], int c[])
////{
////	int i, j,k,m;
////	for (i = 0,j=0; i < n; i++)
////	{
////		if (a[i] > -20)
////		{
////			b[j] = a[i];
////			j++;
////		}
////	}
////
////	
////	/*k = sizeof(b) / sizeof(b[0]);*/
////	k = j;
////	printf("%d\n", k);
////	for (i = 0; i<k; i++)
////	{
////		for (j = i + 1; j < k; j++)
////		{
////			if (b[i] >= b[j])
////			{
////				m = b[i];
////				b[i] = b[j];
////				b[j] = m;
////			}
////		}
////		c[i] = b[i];
////	}
////
////	for (i = 0; i < k; i++)
////	{
////		printf("%d ", b[i]);
////	}
////	return k;
////}
////
////int main()
////{
////	int a[] = { 12,-10,-31,-18,-15,50,17,15,-20,20 };
////	int b[10]={0}, c[10]={0};
////	int n = 10;
////	int k = fun2(a, n, b, c);
////	printf("\n");
////	printf("%d\n", k);
////
////
////	return 0;
////}
//
//int fun2(int a[], int n, int b[], int c[])
//{
//	int i, j, k = 0, t;
//	for (i = 0; i < n; i++)
//		if (a[i] > -20)b[k++] = a[i];
//	printf("\n%d\n", k);
//	for (i = 0; i < k; i++)
//		c[i] = b[i];
//	for (i = 0; i < k - 1; i++)
//		for (j = 0; j < k - i - 1; j++)
//			if (c[j] > c[j + 1]){t = c[j];c[j] = c[j + 1];c[j + 1] = t;}
//		
//	
//	return k;
//}
//
//
//void main()
//{
//	int n = 10, i, nb;
//	int bb[10], cc[10], aa[10] = { 12,-10,-31,-18,-15,50,17,15,-20,20 };
//	for (i = 0; i < n; i++) printf("%6d", aa[i]);
//	nb = fun2(aa, n, bb, cc);
//	for (i = 0; i < nb; i++)printf("%6d", bb[i]);
//	printf("\n");
//	for (i = 0; i < nb; i++)printf("%6d", cc[i]);
//	//printf("    %2d", nb);
//	
//}

float fun(float x)
{
	if (x <= 0)
		return (x + 2) * exp(x);
	if (x > 0)
		return (x + 2) * log(2 * x);
}

int main()
{
	printf("f(%.3f)=%.3f\n", -1.2, fun(-1.2));
	printf("f(%.3f)=%.3f", 6.0, fun(6.0));



	return 0;
}