//#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int n = 10;

int main()
{
	int i,k,j;
	int arr[10] = {0};
	
	printf("����ʮ���������ݣ�\n");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("\n");

	printf("��������Ҫɾ�������ݣ�");
		scanf("%d", &k);
	void fun(int arr[], int k);


	fun(arr, k);


	printf("\nɾ����������ǣ�");
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