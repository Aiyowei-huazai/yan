#include<stdio.h>



////≤Â»Î≈≈–Ú
//int main()
//{
//	int arr[] = { 4,1,5,3,2,6,9,8,7,10 };
//	int i, j,temp,z;
//
//	for (i = 1; i < 10; i++)
//	{
//		temp = arr[i];
//		for (j = i - 1; j >= 0 && temp < arr[j]; j--)
//		{
//			arr[j + 1] = arr[j];
//		}
//		arr[j+1] = temp;
//	}
//
//	for (z = 0; z < 10; z++)
//	{
//		printf("%d ", arr[z]);
//	}
//
//
//	return 0;
//}
//

//—°‘Ò≈≈–Ú



//int main()
//{
//	int arr[] = { 1,3,5,7,9,2,4,6,8,10 };
//	int i, j, temp,k,z;
//	for (i = 0; i < 10; i++)
//	{
//		k = i;
//		for (j = i + 1; j < 10; j++)
//		{
//			if (arr[k] < arr[j])
//			{
//				k = j;
//			}
//		}
//		if (i != k)
//		{
//			temp = arr[i];
//			arr[i] = arr[k];
//			arr[k] = temp;
//		}
//	}
//
//	for (z = 0; z < 10; z++)
//	{
//		printf("%d ", arr[z]);
//	}
//
//
//}


int main()
{
	/*int a[3][3] = { 1,2,3,4,5,6,7,8,9 };
	printf("%d\n", ( * (a + 1))[2]);
	printf("%d\n",*(a[1]+2));
	printf("%d\n", *(&a[2][0]-1));*/


	//char s[10]; s = "abcd";


	/*char x[] = "abcd";
	char y[] = { 'a','b','c','d' };

	printf("%d\n", strlen(x));
	printf("%d\n", strlen(y));*/


	/*char arr[] = "12345";
	int i, sum = 0;
	for (i = 0; i < 5; i++)
	{
		sum = sum * 10 + arr[i] - '0';
	}
	printf("%d\n", sum);*/

	//int a[] = { 1,2,3,4,5,6 };

	//int* t = a;

	////printf("%d",(*t)++);

	////printf("%d\n", *t++);
	//printf("%d\n", ((*t)++));
	////printf("%d\n",(*t)++ );
	////printf("%d\n", ++*t);


	int* p, a[] = { 1,3,5,7,9 };
	int k;
	p = a;

	k = (*p)++;
	printf("%d\n", k);




	return 0;
}