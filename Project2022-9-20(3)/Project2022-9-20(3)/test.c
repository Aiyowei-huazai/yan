//#include<stdio.h>
//
//
//
//
//int main()
//{
//	/*int m = 8, n = 6;
//	int r;
//
//	while (n)
//	{
//		r = m % n;
//		m = n;
//		n = r;
//
//	}
//	printf("%d", m);*/
//
//
//	//int x = 4;
//
//	//if (!x % 2 != 0)
//	//{
//	//	printf("偶数");
//	//}
//	//else printf("奇数");
//
//
//	/*int a, b;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20)break;
//		if (b % 3 == 1) b = b + 3;
//		continue;
//	}
//	b -= 5;
//
//
//	printf("a=%d\n", a);
//	printf("b=%d\n", b);*/
//
//
//	/*int i = 0, j = 1;
//
//	int k = (j == 1) ? i+=3 : i ;*/
//
//
//	/*printf("%d", strlen("\t\"065\xffa\n"));*/
//
//
//
//	//printf("%d", i);
//
//	char func(char arr[]);
//
//	char arr[] = "abcdefgh";
//
//	func(arr);
//
//
//	return 0;
//}
//
//char func(char arr[])
//{
//	if (*arr != '\0')
//	{
//		func(arr + 1);
//	}
//	return putchar(( * arr));
//
//	/*while ((*arr) != '\0')
//	{
//		putchar(( * arr));
//		arr++;
//	}*/
//}

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int max(int m, int n)
{
	int r;
	while (n)
	{
		r = m % n;
		m = n;
		n = r;
	}
	return m;
}


int main()
{/*
	int m = 8;
	int n = 2;*/
	int m, n;

	printf("请输入两个整数！\n");

	scanf("%d%d", &m, &n);
	max(m, n);
	printf("最大公约数是：%d\n", max(m, n));


	printf("最小公倍数是：%d\n", m * n / max(m, n));



	return 0;
}