#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

#define Max 10
//int main()
//{
//	/*char a1[] = { "that" };
//	char a2[] = { " the" };
//
//	int k;
//	k = strcmp(a1, a2);
//	printf("%d", k);*/
//
//	int k[5]={0};
//	int i;
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%d", &k[i]);
//	}
//	
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d", k[i]);
//	}
//
//	
//
//
//	return 0;
//}

//int main()
//{
//	char arr[Max] = { 0 };
//	int i, j,n;
//	char k;
//
//	for (i = 0; i < Max; i++)
//	{
//		scanf("%c", &arr[i]);
//	}
//	n = sizeof(arr) / sizeof(arr[0]);
//	printf("n的值是：%d\n", n);
//	//冒泡排序
//	//for (i = 0; i < n-1; i++)
//	//{
//	//	for (j = 0; j < n - 1 - i; j++)
//	//	{
//	//		if (arr[j] > arr[j + 1])
//	//		{
//	//			k = arr[j];
//	//			arr[j] = arr[j + 1];
//	//			arr[j + 1] = k;
//	//		}
//	//	}
//	//}
//
//	//选择排序
//	for (i = 0; i < n-1; i++)
//	{
//		for (j = i + 1; j < n; j++)
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
//
//	for (i = 0; i < n; i++)
//	{
//		printf("%c ", arr[i]);
//	}
//
//
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
//
//	int i,n,k,j,t;
//	n = sizeof(arr) / sizeof(arr[0]);
//	printf("n的个数是：%d\n",n);
//	j = n;
//	t = n / 2;
//	printf("t的值是：%d\n", t);
//	for (i = 0; i < j / 2; i++)
//	{
//		k = arr[i];
//		arr[i] = arr[n - 1];
//		arr[n - 1] = k;
//		n = n - 1;
//		printf("%d\n", n);
//		
//		
//	}
//	for (i = 0; i < j; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//
//
//
//
//	return 0;
//}

//void invert(int a[],int k)
//{
//	int t;
//	if (k != 0)
//	{
//		t = a[0];
//		a[0] = a[k - 1];
//		a[k - 1] = t;
//	}
//	invert(a+1, k - 1);
//}
//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int i;
//	//invert(a, 5);
//
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", a[i]);
//	}
//
//	return 0;
//}

//int fun(int k)
//{
//	if (k == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return k * fun(k - 1);
//	}
//}
//
//
//int main()
//{
//	int n,x;
//	n = 5;
//	x=fun(n);
//	printf("%d", x);
//	return 0;
//}

//int main()
//{
//	int a = 1, b = 1, c,i;
//	int n;
//	n = 10;
//	printf("%d %d ", a, b);
//
//	for (i = n - 2; i > 0; i--)
//	{
//		c = a + b;
//		printf("%d ", c);
//		a = b;
//		b = c;
//	}
//
//
//
//
//}


//int main()
//{
//	int i, j;
//
//	for (i = 101; i <= 200; i=i+2)
//	{
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j == i)
//		{
//			printf("%d\n", i);
//		}
//
//	}
//
//
//
//	return 0;
//}


int main()
{
	//int i, j;
	//for (i = 1; i <= 9; i++)
	//{
	//	for (j = 1; j <= i; j++)
	//	{
	//		printf("%-2d*%-2d= %-2d ", j, i, i * j);
	//	}
	//	printf("\n");
	//}
	int i;
	float s;
	s = 100;
	float h= 100;
	for (i = 1; i <= 10; i++)
	{
		h = h / 2.0;
		s = s + h;
	}

	printf("%f", s);


	return 0;
}