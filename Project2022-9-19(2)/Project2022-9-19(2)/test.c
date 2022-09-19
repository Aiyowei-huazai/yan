//#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int n = 10;

int main()
{
	int i,k,j;
	int arr[10] = {0};
	
	printf("输入十个整形数据！\n");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("\n");

	printf("请输入需要删除的数据！");
		scanf("%d", &k);
	void fun(int arr[], int k);


	fun(arr, k);


	printf("\n删除后的数据是：");
	for (j = 0; j < n; j++)
	{
		printf("%d", arr[j]);
	}
	return 0;
}

void fun(int arr[], int k)
{
	int i,j;
	for (i = 0; i < n; i++)
	{
		if (arr[i] == k)
		{
			for (j = i; j < n - 1; j++)
			{
				arr[j] = arr[j + 1];
			}
			n--;
			i--;
		}
	}
}