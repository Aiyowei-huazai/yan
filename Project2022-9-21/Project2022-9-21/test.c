////#include<stdio.h>
////
////
////
////
////int main()
////{
////	char arr1[20] = "abcrf";
////	char arr2[20] = "  deflh";
////	void fun(char a1[], char a2[]);
////	fun(arr1, arr2);
////
////	printf("%s", arr1);
////	return 0;
////}
////
////void fun(char a1[], char a2[])
////{
////	int i = 0, j = 0;
////	while (*(a1 + i) != '\0')i++;
////	while (*(a2 + j) != '\0')
////	{
////		a1[i] = a2[j];
////		j++;
////		i++;
////	}
////	a1[i] = '\0';
////}
//
//
//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	char arr1[20] = "abcdefghijkhhh";
//	printf("数组的字符数是：%d\n", strlen(arr1));
//	char tar = 'a';
//
//	void fun(char arr[], char tar);
//	fun(arr1, tar);
//
//	printf("%s", arr1);
//	printf("\n数组的字符数是：%d\n", strlen(arr1));
//	return 0;
//}
//
//void fun(char arr[], char tar)
//{
//	int i = 0, j = 0;
//
//	while (*(arr + i) != '\0')
//	{
//		if (*(arr + i) != tar)
//		{
//			arr[j] = arr[i];
//			j++;
//		}
//		i++;
//	}
//	arr[j] = '\0';
//
//
//}


#include<stdio.h>




int main()
{
	char arr[80] = "hello word hi h";
	int fun(char arr[]);
	int n;
	
	n = fun(arr);


	printf("%d", n);

	return 0;
}
int fun(char arr[])
{
	int i = 0;
	int s = 0;
	int f = 0;
	while (arr[i] != '\0')
	{
		if (arr[i] == ' ')
		{
			f = 1;
		}
		if (f == 1)
		{
			f = 0;
			s++;
		}
		i++;
	}
	return s+1;
}

//int main()
//{
//	int i, num = 0, word = 0;
//	char str[30] = "    hello word hi h";
//	for (i = 0; i < 80; i++)
//	{
//		if (str[i] == ' ') word = 0;
//		else if (word == 0)
//		{
//			word = 1;
//			num++;
//		}
//
//	}
//	printf("%d", num);
//
//
//	return 0;
//}