//////#include<stdio.h>
//////
//////
//////
//////int main()
//////{
//////	//int a[][4] = { 1,2,3,4,5,6,7,8,9,10 },*p=*(a+1);
//////	///*p += 3;
//////	//printf("%d\n",*p++);*/
//////
//////	////p += 4;
//////	////printf("%d\n", *(p++));
//////
//////	///*p += 4;
//////	//printf("%d\n", *++p);*/
//////
//////	//p += 4;
//////	//printf("%d\n", ++*p);
//////
//////
//////
//////	int k;
//////	int s[2][3] = { 1,2,3,4,5,6 }, (*p)[3];
//////
//////
//////	p = s;
//////	
//////	/*printf("%d", *(*(p + 1) + 2));*/
//////	k = *(p[1] + 2);
//////	//k = (*(p + 1))[2];
//////	/*k = *(*(p[1]) = 2);*/
//////	//k = *(*(p + 1))[2];
//////	printf("%d", k);
//////
//////	return 0;
//////}
////
////#include<stdio.h>
////
////int max(int* p1, int* p2)
////{
////	if (*p1 > *p2)
////	{
////		return 1;
////	}
////	else return 0;
////}
////
////
////int main()
////{
////	//int x, y;
////	//x = 6;
////	//y = 7;
////	//int* p1 = &x;
////	//int* p2 = &y;
////
////	//if (max(p1, p2))
////	//{
////	//	printf("%d ,%d ", *p1, *p2);
////	//}
////	//else printf("%d  ,%d ", *p2, *p1);
////
////
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
//
//void find(int arr[10],int* q1, int* q2)
//{
//	
//	int* t = arr;
//	/*p1 = arr;
//	p2 = arr;*/
//	//for (t = t+1; *t!='\0'; t++)
//	//{
//	//	if (*p1 < *t) *p1 = *t;
//	//	if (*p2 > *t)*p2 = *t;
//	//}
//	for (int i = 0; i < 10; i++)
//	{
//		if (*q1 < *t)*q1 = *t;
//		if (*q2 > *t) *q2 =*t;
//		t++;
//	}
//
//	//printf("%d ,%d ", *p1, *p2);
//	
//	/*for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", *t++);
//	}*/
//}
//
//int main()
//{
//
//	int arr[10] = { 102,2,3,40,5,6,7,8,9,10 };
//	int a=arr[5], b=arr[5];
//	int* p1=&a, * p2 =&b ;
//
//	
//
//	find(arr,p1, p2);
//
//
//	printf("%d ,%d ", a,b);
//
//
//	return 0;
//}
////
////void find(int arr[10], int* q1, int* q2)
////{
////	for (int i = 0; i < 10; i++)
////	{
////		if (*q1 < arr[i])*q1 = arr[i];
////		if (*q2 > arr[i])*q2 = arr[i];
////	}
////}
////
////int main()
////{
////
////	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
////	int a=arr[0], b=arr[0];
////	int* p1 = &a, * p2 = &b;
////
////	find(arr, p1, p2);
////
////	printf("%d, %d ", a, b);
////
////	return 0;
////}


#include<stdio.h>


//int main()
//{
//	//char arr[] = { "China!" };
//	//int i = 0;
//	//while (arr[i] != '\0')
//	//{
//	//	if ((arr[i] >= 'A' && arr[i] <= 'Z') || (arr[i] >= 'a' && arr[i] <= 'z'))
//	//	{
//	//		
//	//			arr[i] = arr[i] + 4;
//	//		
//	//	}
//	//	i++;
//	//}
//
//
//	//printf("%s", arr);
//
//
//	int n = 5;
//	int i,sum=0,t=0;
//	for (i = 0; i < 5; i++)
//	{
//		sum = sum*10  + 2;
//		t = t + sum;
//	}
//
//	printf("%d", t);
//
//	return 0;
//}


//int main()
//{
//	int n = 12345;
//	int s, t = 0,i;
//	int arr[6];
//	while (n)
//	{
//		s = n % 10;
//		n = n / 10;
//		//printf("%d", s);
//		arr[t] = s;
//		t++;
//	}
//
//	printf("几个数字：%d\n", t);
//	printf("每一个数字是：\n");
//	for (i = t-1; i>=0; i--)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	printf("逆序数是：\n");
//	for (i = 0; i < t; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//
//	return 0;
//}


int main()
{
	int arr[] = { 1,3,5,6,8,9,10,2,4,7 };
	int i, j;
	int t;
	for (i = 1; i < 10; i++)
	{
		for (j = 0; j < 10 - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				t = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = t;
			}
		}
	}
	/*for (i = 0; i < 9; i++)
	{
		for (j = 0; j < i - 1 - j; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				t = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = t;
			}
		}
	}*/

	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}


	return 0;
}