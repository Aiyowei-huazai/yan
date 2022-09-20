//#include<stdio.h>
//
//swap(int* m, int* n)
//{
//	int temp;
//	temp = *m;
//	*m = *n;
//	*n = temp;
//}
//
//main()
//{
//	int x, y;
//	x = 2;
//	y = 4;
//	swap(&x, &y);
//	printf("%d,%d", x, y);
//	return 0;
//}


#include<stdio.h>


//int main()
//{
//
//	/*int i,j;
//	int t = 0, s = 1;
//
//	for (i = 1; i <= 4; i++)
//	{
//		
//		for (j = 1; j <= i; j++)
//		{
//			s = s * j;
//		}
//		t = t + s;
//		s = 1;
//	}*/
//	int i, s = 1, t = 0;
//
//	for (i = 1; i <= 4; i++)
//	{
//		s = s * i;
//		t = s + t;
//	}
//
//	printf("\n×ÜºÍÊÇ£º%d", t);
//
//
//	return 0;
//}


int main()
{
	/*int arr[10][10] = { 0 };
	int i, j,z;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j == 0 || i == j)
			{
				arr[i][j] = 1;
			}
			for (z = i - 1; z > 0 && j > 0; z--)
			{
				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
			}
		}
	}

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <=i; j++)
		{
			printf("%-2d ", arr[i][j]);
		}
		printf("\n");
	}*/

	int a[10][10], i, j;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= i; j++)
		{
			if ((j == 0) || (i == j))
			{
				a[i][j] = 1;
			}
			else a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
			printf("%-4d",a[i][j]);
		}
		printf("\n");
	}


	return 0;
}