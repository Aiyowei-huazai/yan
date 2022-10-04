////
//
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//
//
//int main()
//{
//	//int x;
//	//x = 10;
//	//if (x < 1)
//	//{
//	//	printf("%d", x);
//	//}
//	//else if (x < 10 && x >= 1)
//	//{
//	//	printf("%d", 2 * x - 1);
//	//}
//	//else if (x >= 10)
//	//{
//	//	printf("%d", 3 * x - 11);
//	//}
//	//int x;
//	//x = 60;
//	//char g;
//	//switch (x / 10)
//	//{
//	//case 10:
//	//case 9:g = 'A';
//	//	break;
//	//case 8:g = 'B';
//	//	break;
//	//case 7:g = 'C';
//	//	break;
//	//case 6:g = 'D';
//	//	break;
//	//default:g = 'E';
//	//	break;
//	//}
//
//	//printf("%c", g);
//
//	//int i, n;
//	//double h = 100, s = 100;
//	//for (i = 1; i <= 10; i++)
//	//{
//	//	h *= 0.5;
//	//	if (i == 1)continue;
//	//	s = 2 * h + s;
//	//}
//	//printf("h=%f,s=%f", h, s);
//
//	//float h = 100,s=0;
//	//int i;
//	//
//	//for (i = 1; i <= 10; i++)
//	//{
//	//	s = s + h;
//	//	h = h / 2.0;
//	//}
//
//	//printf("%f,%f", s,h);
//
//
//	//int a, b, c,t;
//	//a = 2, b = 1, c = 13;
//	//printf("%d,%d,%d\n", a, b, c);
//
//	//if (a < b)
//	//{
//	//	a = a + b;
//	//	b = a - b;
//	//	a = a - b;
//
//	//}
//	//if (a < c)
//	//{
//	//	t = a;
//	//	a = c;
//	//	c = t;
//	//}
//	//if (b < c)
//	//{
//	//	t = b;
//	//	b = c;
//	//	c = t;
//	//}
//
//	//printf("%d,%d,%d", a, b, c);
//
//
//	/*int i;
//	int s = 1;
//	for (i = 1; i <= 10; i++)
//	{
//		s = (s + 1) * 2;
//	}
//	printf("%d", s);*/
//	/*int i = 1, sum = 0;
//	for (; i <= 10; i++)
//	{
//		sum = 2 * sum + 1;
//	}
//	printf("%d", sum);*/
//
//	/*int i, sum = 0;
//	for (i = 10; i >= 1; i--)
//	{
//		sum = sum * 2 + 1;
//	}
//	printf("%d", sum);*/
//
//    char arr[10]={0};
//	int z = 0, k = 0, s = 0, e = 0,i;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%c", &arr[i]);
//	}
//	for (i = 0; i < 10; i++)
//	{
//		if ((arr[i] >= 'a' && arr[i] <= 'z') || (arr[i] >= 'A' && arr[i] <= 'Z'))
//		{
//			z = z + 1;
//		}
//		else if (arr[i] == ' ')k = k + 1;
//		else if (arr[i] >= '0' && arr[i] <= '9')s = s + 1;
//		else e = e + 1;
//	}
//	printf("字母的个数是：%d  空格的个数是：%d   %d    %d", z, k, s, e);
//
//	return 0;
//}

#include<stdio.h>


int main()
{
	//int n = 7, s = 1;
	//int i,j;
	//for (i = 2; i < n / i; i++)
	//{
	//	if (n % i == 0)
	//	{
	//		s = s + i + n / i;
	//	}
	//}

	//printf("%d", s);

	//int i, j;
	//int s = 1;
	////i = 28;
	//for (i = 27; i <= 28; i++)
	//{
	//	for (j = 2; j < i / j; j++)
	//	{
	//		if (i % j == 0)
	//		{
	//			s = s + j + i / j;
	//			printf("%d\n", s);
	//		}
	//		
	//	}
	//	
	//	if (i == s)
	//	{
	//		printf("%d\n", s);
	//		s = 1;
	//	}
	//}


	int n, j, i, s;
	for (n = 6; n < 1000; n++)
	{
		s = n - 1;
		for (i = 2; i < n; i++)
		{
			if (n % i == 0)
			{
				s = s - i;
			}
		}
		if (s == 0)
		{
			printf("%3d its fastors are 1 ", n);
			for (j = 2; j < n; j++)
			{
				if (n % j == 0)
				{
					printf("%d ", j);
				}
			}
			printf("\n");
		}
	}
	


	return 0;
}