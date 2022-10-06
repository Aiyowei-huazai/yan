//#define _CRT_SECURE_NO_WARNINGS
////#include<stdio.h>
////#include<string.h>
////
////int main()
////{
////	//int arr[20] = { 0 };
////	//int i;
////	//for (i = 0; i < 5; i++)
////	//{
////	//	scanf("%d", &arr[i]);
////	//}
////
////	//for (i = 0; i < 5; i++)
////	//{
////	//	if (arr[i] % 2 == 0)
////	//	{
////	//		printf("%d ", arr[i]);
////	//	}
////	//}
////
////
////	//int i, j,k;
////
////	//for (i = 0; i <= 4; i++)
////	//{
////	//	for (j = 4 - i; j > 0; j--)
////	//	{
////	//		printf(" ");
////	//	}
////	//	for (k = i * 2; k >= 0; k--)
////	//	{
////	//		printf("*");
////	//	}
////	//	printf("\n");
////	//}
////
////
////	/*int i, j, k,c;
////	c = 0;
////	for (i = 0; i <= 200; i++)
////	{
////		for (j = 0; j <= 100; j++)
////		{
////			for (k = 0; k <= 50; k++)
////			{
////				if ((i * 0.5 + j + k * 2) == 100)
////				{
////					printf("小鸡数：%d  母鸡数：%d  公鸡数：%d \n",i,j,k);
////					c++;
////				}
////			}
////		}
////	}
////	printf("总方案是：%d\n", c);*/
////
////
////	//int k,i;
////	//char arr[50] = { 0 };
////	//gets(arr);
////	////k = sizeof(arr) / sizeof(arr[0]);
////	//k = strlen(arr);
////	//for (i = 0; i < k; i++)
////	//{
////	//	if (arr[i] >= '0' && arr[i] <= '8')
////	//	{
////	//		arr[i] = arr[i] + 1;
////	//	}else if (arr[i] == '9')
////	//	{
////	//		arr[i] = '0';
////	//	}
////	//}
////
////	//for (i = 0; i < k; i++)
////	//{
////	//	printf("%c ", arr[i]);
////	//}
////	/*puts(arr);*/
////
////	/*char arr1[20] = { "go" };
////	char arr2[10] = { "fighting!" };
////	void change(char* p1, char* p2);
////	change(arr1, arr2);
////	
////	printf("%s", arr1);*/
////
////
////	int(*p)[3], a[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
////	//p = &a[0][0];//1
////	p = a + 1;//5
////
////	printf("%d", *(*p));
////	return 0;
////}
////
//////void change(char* p1, char* p2)
//////{
//////	while (( * p1)++);
//////	while (*p2)
//////	{
//////		*p1 = *p2;
//////		p2++;
//////		p1++;
//////	}
//////	*p1 = '\0';
//////}
////void change(char* p1, char* p2)
////{
////	while (( * p1) != '\0')
////	{
////		p1++;
////	}
////	while (*p2)
////	{
////		*p1 = *p2;
////		p2++;
////		p1++;
////	}
////	*p1 = '\0';
////}
//
//#include<stdio.h>
//#include<math.h>
//void fun(int(*p)[4], int k, int n)
//{
//	int i, j;
//	for (i = 0; i < k; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			//printf("%d ", p[i][j]);
//			printf("%d ", *(*(p + i) + j));
//		}
//	}
//}
//void fun2(int(*p1)[4], int ss)
//{
//	int i;
//	for (i = 0; i < ss; i++)
//	{
//		//printf("%d ", (*p1)[i]);
//		printf("%d ", *(*p1+i));
//	}
//}
////int main()
////{
//	//int i, j;
//	//int a[4] = { 1,2,3,4 };
//	////int(*s)[4] = &a;
//	//int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
//	////int(*p)[4] = &arr;
//	//fun2(a, 4);
//
//	/*for (i = 0; i < 4; i++)
//	{
//	  printf("%d ", *(*s+i));
//	}*/
//
//	/*for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", (p[i][j]));
//		}
//	}*/
//
//
//
//
//	//fun(arr, 3, 4);
//
////}
//#define max 3
//
//int main()
//{
//    int arr[max] = { 0 };
//	int i,j,k;
//	float s,p;
//	for (i = 0; i < max; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	for (i = 0; i < max - 1; i++)
//	{
//		for (j = i + 1; j < max; j++)
//		{
//			if (arr[i] > arr[j])
//			{
//				k = arr[i];
//				arr[i] = arr[j];
//				arr[j] = k;
//			}
//		}
//	}
//
//
//	if (arr[0] + arr[1] < arr[2])
//	{
//		printf("输入错误！结束");
//		return 0;
//	}
//	else
//	{
//		for (i = 0; i < max; i++)
//		{
//			printf("%d ", arr[i]);
//		}
//		//p = ((float)arr[0] + (float)arr[1] + (float)arr[2]);
//		p = ((float)(arr[0] + arr[1] + arr[2]))/2;
//		printf("%f", p);
//		//p = (arr[0] + arr[1] + arr[2]) ;
//		//printf("%d", arr[1]);
//		s = sqrt(p * (p - (float)arr[0]) * (p - (float)arr[1]) * (p - (float)arr[2]));
//		printf("三角形面积是：%f", s);
//	}
//
//
//		//for (i = 0; i < max; i++)
//	//{
//	//	printf("%d ", arr[i]);
//	//}
//
//
//	return 0;
//}

#include<stdio.h>
#include<math.h>
int main()
{
	//int i, j, k,c=0;
	//for (i = 0; i <= 33; i++)
	//{
	//	for (j = 0; j <= 50; j++)
	//	{
	//		k =  2*(100 - 3 * i - 2 * j);
	//		if (i + j + k == 100)
	//		{
	//			c++;
	//			printf("大马：%d  中马：%d   小马：%d\n", i, j,k);
	//		}
	//	}
	//}

	//printf("%d", c);
	//int j, o;
	//j = 0;
	//o = 0;
	//int i;
	//for (i = 1; i <= 100; i++)
	//{
	//	if (i % 2 == 0)
	//	{
	//		o = o + i;
	//	}
	//	else j = j + i;
	//}

	//printf("奇数总和是：%d,偶数总和是：%d", j, o);

	//int x, y, z;
	//for (x = 0; x <= 10; x++)
	//{
	//	for (y = 0; y <= 10; y++)
	//	{
	//		for (z = 0; z <= 10; z++)
	//		{
	//			if (x * y * z + y * z * z == 520)
	//			{
	//				printf(" %d %d %d\n", x, y, z);
	//			}
	//		}
	//	}
	//}
	/*float f = 0, x;
	x = 3;
	f = (fabs(x) - 2) / (x * x +1);

	printf("%f\n", f);*/

	//double s, pi;
	//s = 0;
	//int i, f = -1;
	//for (i = 0; i <= 500; i++)
	//{
	//	f = -f;
	//	s = s + f * 1.0 / (2 * i + 1);
	//}

	//pi = s * 4;
	//printf("%f", pi);

	//double pi = 0;
	//long i, sign = 1;
	//for (i = 1; i <= 1001; i += 2)
	//{
	//	pi += 1.0 * sign / i;
	//	sign = -sign;
	//}

	//pi *= 4;
	//printf("%f", pi);

	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//int i, j,k;
	//for (i = 0; i < 9; i++)
	//{
	//	for (j = i + 1; j > 0; j--)
	//	{
	//		if (arr[j - 1] < arr[j])
	//		{
	//			k = arr[j - 1];
	//			arr[j - 1] = arr[j];
	//			arr[j] = k;
	//		}
	//	}
	//}

	//for (i = 0; i < 10; i++)
	//{
	//	printf("%d ", arr[i]);
	//}
	//

	float x = 1.5, x0, f, f1;
	do
	{
		x0 = x;
		f=((2 * x0 - 4) * x0 + 3)* x0 - 6;
		f1 = (6 * x0 - 8) * x0 + 3;
		x = x0 - f / f1;
	} while (fabs(x - x0) >= 1e-6);

	printf("the root is : %.2f", x);


	return 0;
}