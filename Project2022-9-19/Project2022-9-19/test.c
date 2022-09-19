//#include<stdio.h>
//#include<string.h>
//
//
//#define N 20
//
//int main()
//{
//	char arr[N];
//	int i = 0;
//	gets(arr);
//
//
//	void fun(char arr[], int n);
//
//	//fun(arr, sizeof(arr));
//	fun(arr, strlen(arr));
//
//	/*for (i = 0; i < sizeof(arr); i++)
//	{
//		printf("%c", arr[i]);
//	}
//	*/
//	puts(arr);
//
//	return 0;
//}
//
//void fun(char arr[], int n)
//{
//	char  tem;
//	int i,j;
//	for (i = 0; i <( n / 2); i++)
//	{
//		tem = arr[i];
//		arr[i] = arr[n - i-1];
//		arr[n - i-1] = tem;
//	}
//	/*for (i = 0, j = n - 1; i <= j; i++, j--)
//	{
//		tem = arr[i];
//		arr[i] = arr[j];
//		arr[j] = tem;
//	}*/
//
//
//}


#include<stdio.h>
#include<string.h>


#define N 20


int main()
{
	char arr[N];
	void fun(char arr[], int n);
	gets(arr);

	fun(arr, strlen(arr));

	puts(arr);

	return 0;
}

void fun(char arr[], int n)
{
	char* p1 = arr;
	char* p2 = arr + n - 1;
	char tem;

	while (p1 <= p2)
	{
		tem = *p1;
		*p1 = *p2;
		*p2 = tem;
		p1++;
		p2--;

	}
}