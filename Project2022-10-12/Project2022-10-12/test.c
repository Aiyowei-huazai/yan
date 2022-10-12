#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//void fun(int* p, int n)
//{
//	int i, j,k;
//	for (i = 0; i < n - 1; i++)
//	{
//		for (j = i + 1; j < n; j++)
//		{
//			if (*(p + i) < *(p + j))
//			{
//				k = *(p + i);
//				*(p + i) = *(p + j);
//				*(p + j) = k;
//			}
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", p[i]);
//	}
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int i;
//	for (i=0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//
//	}
//	fun(arr, 10);
//
//
//
//	return 0;
//}

int fun(int* p1, int* p2)
{
	while ((*p1) != '\0' || (*p2) != '\0')
	{
		if ((*p1) == (*p2)) { p1++; p2++; }
		else return *p1 - *p2;
	}
	return 0;
}


int main()
{
	/*float x, y;
	scanf("%f%f", &x, &y);
	printf("%f %c %f=%f\n", x, '+', y, x + y);*/
	char arr1[5];
	char arr2[5];
	int k;
	scanf("%s", &arr1);
	scanf("%s", &arr2);

	k = fun(arr1, arr2);

	if (k == 0) printf("一样大");
	else if (k > 0) printf("p1大");
	else if (k < 0) printf("p2大");

	/*printf("%s\n", arr1);
	printf("%s\n", arr2);*/

	return 0;
}