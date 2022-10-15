#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>


//int main()
//{
//	//printf("%d\n", strlen("\101"));
//	printf("\n");
//	return 0;
//}

//int main()
//{
//	int arr[][4] = {1,2,-3,-4,0,-12,-13,-14,-21,23,0,-24,-13,32,-33,0};
//	int b[16] = { 0 };
//	int i, j,m=0,s=0;
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			if (arr[i][j] > 0)
//			{
//				b[m++] = arr[i][j];
//			}
//		}
//	}
//	for (i = 0; i < m; i++)
//	{
//		printf("%d ", b[i]);
//		s = s + b[i];
//	}
//	printf("\n总和是：%d\n", s);
//
//	return 0;
//}
//
//int strcmp1(char* p1, char* p2)
//{
//	while (*p1 != '\0' || *p2 != '\0')
//	{
//		if (*p1 == *p2) { p1++; p2++; }
//		else return *p1 - *p2;
//	}
//}
//void fun1(char* p1)
//{
//	int i;
//	for (i = 0; i < 5; i++)
//	{
//		/*if(strcmp1(*(p1+i)))*/
//		printf("%s ", p1+i);
//	}
//}
//void fun(char(*p1)[20])
//{
//	int i,j;
//	char a[20];
//	for (i = 0; i < 4; i++)
//	{
//		//printf("%s ", p1 + i);
//		for (j = i + 1; j < 5; j++)
//		{
//			if (strcmp(p1 + i, p1 + j) > 0)
//			{
//				strcpy(a, p1 + i);
//				strcpy(p1 + i, p1 + j);
//				strcpy(p1 + j, a);
//			}
//		}
//	}
//}
//
//
//int main()
//{
//	char arr[][20] = { "abc","xabdfg","abbd","dcdbe","cd" };
//	int i,j;
//	for (i = 0; i < 5; i++)
//	{printf("%s ", arr + i);}
//	fun(arr);
//	printf("\n");
//	for (i = 0; i < 5; i++)
//	{
//		printf("%s ", arr + i);
//	}

		/*char str1[] = {"bbc"};
char str2[] = {"abc"};
int k;
k = strcmp1(str1, str2);
if (k > 0)printf("大于");
else if (k == 0) printf("等于");
else if (k < 0) printf("小于");
else printf("你编写出错啦");*/
//	return 0;
//}



void f(char p[][20], int n);
void main()
{
	int i; char p[][20] = { "abc","xabdfg","abbd","dcdbe","cd" };
	f(p, 5); for (i = 0; i < 5; i++)puts(p[i]);
}
void f(char p[][20],int n)
{
	char a[20] = { 0 }; int i, j, t;
	for (i = 1; i < n; i++)
	{
		t = 0;
		for (j = 0; j < n - i; j++)
		{
			if (strcmp(p[j], p[j + i]) > 0)
			{
				t += 1; strcpy(a, p[j]);
				strcpy(p[j], p[j + 1]); strcpy(p[j + 1], a);
			}
			if (t == 0)break;
		}
	}
}
