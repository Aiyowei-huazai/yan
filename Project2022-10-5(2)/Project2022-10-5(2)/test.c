#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int main()
{

	//char arr[] = { "abcdEFGHIJK123" };
	//int k,i,c;
	//c = 0;
	//k = sizeof(arr) / sizeof(arr[0]);
	//for (i = 0; i < k; i++)
	//{
	//	if (arr[i] >= 'a' && arr[i] <= 'z')
	//	{
	//		c++;
	//	}

	//}

	//printf("大写字母个数是：%d", c);

	//int i, n;
	//float sum;
	//n = 8;
	//sum = 0;
	//for (i = 10; i <= 100; i++)
	//{
	//	if ((i % 3 == 0) && n > 0)
	//	{
	//		sum = sum + 1.0 / i;
	//		n--;
	//	}
	//	if (n == 0)break;

	//}

	//printf("%f", sum);


	//int i, j,k;
	//k = 0;
	//for (i = 101; i <= 200; i++)
	//{
	//	for (j = 2; j < i; j++)
	//	{
	//		if (i % j == 0)
	//		{
	//			break;
	//		}
	//	}
	//	if (j == i)
	//	{
	//		k++;
	//		printf("%d\n", i);
	//	}
	//}
	//printf("总数是：%d ", k);

	int i, k,j;
	char c;
	scanf("%d%c%d", &i, &c, &k);

	switch (c)
	{
	case '+':j = i + k;
		break;
	case '-':j = i - k;
		break;
	case '*':j = i * k;
		break;
	case '/':j = i * 1.0 / k;
		break;
		
	}

	printf("%d %c %d =%d ", i, c, k,j);

	return 0;
}