//#include<stdio.h>
//int main()
//{
//	int i;
//	float k = 1.0, a = 0, b = 0,c=0;
//	for (i = 1; i <= 2; i++)
//	{
//		if (i <= 10) { c = c + 1 / (k * i); }
//		if (i <= 50) { b = b + (k * i) * (k * i);}
//		if (i <= 100) { a = a + i; }
//		
//	}
//	printf("%f ", a + b + c);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i, a, b, c;
//	for (i = 100; i < 1000; i++)
//	{
//		a = i / 100;
//		b = i / 10 % 10;
//		c = i % 10;
//		if (c * c * c + b * b * b + a * a * a == i)printf("%d\n", i);
//	}
//	
//}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i, j;
	char s;
	scanf("%c", &s);
	for (i = 0; i <= s - 65; i++)
	{
		for (j = s - 65 - i; j > 0; j--)
			printf(" ");
		for (j = 1; j <= i * 2 + 1; j++)
			printf("%c", 65 + i);
		printf("\n");
	}
	for (i = s - 65; i > 0; i--)
	{
		for (j = s - i - 65; j >= 0; j--)
			printf(" ");
		for (j = 1; j <= i * 2 - 1; j++)
			printf("%c", 65 + i - 1);

		printf("\n");
	}

	return 0;
}