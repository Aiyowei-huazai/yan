//////#include<stdio.h>
//////
//////void zhuanzhi(int arr[][3], int n)
//////{
//////	int i, j,k;
//////	for (i = 0; i < n; i++)
//////	{
//////		for (j = i; j < n; j++)
//////		{
//////			k = arr[i][j];
//////			arr[i][j] = arr[j][i];
//////			arr[j][i] = k;
//////			
//////		}
//////	}
//////
//////}
//////
//////int main()
//////{
//////	//int i, j, k,n;
//////	//int count;
//////	//count = 0;
//////	//for (i = 0; i <= 100; i++)
//////	//{
//////	//	for (j = 0; j <= 50; j++)
//////	//	{
//////	//		for (k = 0; k <= 20; k++)
//////	//		{
//////	//			n = i + j * 2 + k * 5;
//////	//			if ( n== 100)
//////	//			{
//////	//				count++;
//////	//				
//////	//			}
//////	//		}
//////	//	}
//////	//}
//////
//////
//////	//printf("%d\n", count);
//////
//////	int i, j;
//////	int arr[3][3] = {1,2,3,4,5,6,7,8,9};
//////
//////	printf("矩阵是：\n");
//////	for (i = 0; i < 3; i++)
//////	{
//////		for (j = 0; j < 3; j++)
//////		{
//////			printf("%d ", arr[i][j]);
//////		}
//////		printf("\n");
//////	}
//////
//////	zhuanzhi(arr, 3);
//////
//////
//////	printf("转置后的矩阵是\n");
//////
//////
//////	for (i = 0; i < 3; i++)
//////	{
//////		for (j = 0; j < 3; j++)
//////		{
//////			printf("%d ", arr[i][j]);
//////		}
//////		printf("\n");
//////	}
//////
//////
//////	return 0;
//////}
////
////
////#include<stdio.h>
////
//////void mystrcat(char *p1, char *p2)
//////{
//////	while (*p1 != '\0')
//////	{
//////		p1++;
//////	}
//////	while (*p2 != '\0')
//////	{
//////		*p1 = *p2;
//////		p2++;
//////		p1++;
//////	}
//////	*p1 = '\0';
//////	
//////}
//////int main()
//////{
//////	char a1[40] = { "happy birthday!" };
//////	char a2[14] = { "my country" };
//////
//////	mystrcat(a1, a2);
//////
//////
//////	printf("%s", a1);
//////
//////	return 0;
//////}
////
////
////int main()
////{
////	int arr[][3] = {1,2,3,4,5,6,7,8,9};
////	int i, j,s;
////	s = 0;
////	for (i = 0; i < 3; i++)
////	{
////		for (j = 0; j < 3; j++)
////		{
////			printf("%d ", arr[i][j]);
////		}
////		printf("\n");
////	}
////
////
////	printf("下三角的和是：\n");
////
////	for (i = 0; i < 3; i++)
////	{
////		for (j = 0; j <= i; j++)
////		{
////			s = s+arr[i][j];
////		}
////	}
////	printf("%d", s);
////
////
////	return 0;
////}
//
//
//#include<stdio.h>
//
//int main()
//{/*
//	int arr[10][10]={0};
//
//	int i, j;*/
//
//	//for (i = 0; i < 10; i++)
//	//{
//	//	for (j = 0; j <=i; j++)
//	//	{
//	//		if ((j == 0) || i == j)
//	//		{
//	//			arr[i][j] = 1;
//	//		}
//	//		else
//	//		{
//	//			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//	//		}
//
//	//		printf("%d ", arr[i][j]);
//	//	}
//	//	printf("\n");
//	//}
//
//
//	int arr[11]={0};
//	int i, j, z;
//	for (i = 1; i <= 10; i++)
//	{
//		arr[i] = 1;
//		for (j = i - 1; j >= 2; j--)
//		{
//			arr[j] = arr[j] + arr[j - 1];
//		}
//
//		for (z = 1; z <= i; z++)
//		{
//			printf("%d ", arr[z]);
//		}
//		printf("\n");
//	}
//
//
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>


//int main()
//{
//
//	/*int arr[10] = { 2,3,1,4,5,6,7,8,9,10 };*/
//
//	char arr[50]={"fedacsf"};
//	int i, j, z;
//	char k;
//	printf("请输入字符：\n");
//
//
//
//	/*
//	for (z = 0; z < 50; z++)
//	{
//		scanf("%c", &arr[z]);
//	}*/
//
//	for (i = 0; i < 50-1; i++)
//	{
//		for (j = 0; j < 50 - i-1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				k = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = k;
//			}
//		}
//	}
//	for (i = 0; i < 50; i++)
//	{
//		printf("%c ", arr[i]);
//	}
//
//	return 0;
//}


void main()
{
	char a[5];
	char t;
	int i, j;
	printf("请输入50个字符：\n");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &a[i]);
	}


	printf("冒泡排序后！\n");

	for (i = 0; i < 5; i++)
	{
		printf("4d", a[i]);

	}
}