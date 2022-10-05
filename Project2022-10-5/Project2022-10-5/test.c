//#include<stdio.h>
//
//
//
////int main()
////{
////	int arr[3][3]={0};
////	printf("%d", arr[1][1]);
////
////	return 0;
////}
//
//
//int main()
//{
//	//float sum = 0, s = 0, z = 1.0, t = 2.0;
//	//int i;
//	//for (i = 1; i <= 20; i++)
//	//{
//	//	sum = sum + t / z;
//	//	s = t;
//	//	t = t + z;
//	//	z = s;
//	//}
//
//	//printf("%f", sum);
//
//
//	/*int n, num = 20;
//	float t, a = 2, b = 1, s = 0;
//	for (n = 1; n <= num; n++)
//	{
//		s = s + a / b;
//		t = a;
//		a = a + b;
//		b = t;
//	}
//	printf("%f", s);*/
//
//	//int i, j,z;
//	//for (i = 1; i <= 5; i++)
//	//{
//	//	for (j = 1; j < i; j++)
//	//	{
//	//		printf(" ");
//	//	}
//	//	for (z = 1; z <= 5; z++)
//	//	{
//	//		printf("* ");
//	//	}
//	//	printf("\n");
//	//}
//	//int i, j, k;
//	//char a[5][5];
//	//for (i = 0; i < 5; i++)
//	//{
//	//	for (j = 0; j < 5; j++)
//	//	{
//	//		a[i][j] = '*';
//	//		printf(" ");
//	//		printf("%c", a[i][j]);
//	//	}
//	//	printf("\n");
//	//	for (k = 1; k <= i + 1; k++)
//	//	{
//	//		printf(" ");
//	//	}
//	//}
//	//printf("\n");
//
//
//	//int i;
//	//int c;
//	//c = 0;
//	//for (i = 750; i <= 801; i++)
//	//{
//	//	if(((i % 4 == 0 )&& (i % 100 != 0)) || (i % 400 == 0))
//	//	//if (((i % 4 == 0) && (i % 100 != 0)))
//	//	{
//	//		printf("%d\n", i);
//	//		c++;
//	//	}
//	//}
//	//printf("总数是：%d", c);
//
//
//
//
//
//
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

struct Date
{
	int day;
	int month;
	int year;
};


int main()
{
	struct Date d;
	int i,k1,k2;
	i = 2;

	do
	{
		if (i == 2)
			printf("请输入起始年/月/日 例如2015,5,31\n");
		else if (i == 1)
			printf("请输入距离年/月/日 例如2022,10,5\n");

		scanf("%d,%d,%d", &d.year, &d.month, &d.day);
		/*printf("\n");
		printf("请输入起始年/月/日 例如2015,5,31\n");

		scanf("%d,%d,%d", &d1.year, &d1.month, &d1.day);*/

		if ((d.month > 12) || (d.day > 31))
		{
			printf("输入错误，结束！");
			return 0;
		}

		switch (d.month)
		{
		case 1:
			break;
		case 2: d.day = d.day + 31;//31
			break;
		case 3:d.day = d.day + 59;//28
			break;
		case 4:d.day = d.day + 90;//31
			break;
		case 5:d.day = d.day + 120;//30
			break;
		case 6:d.day = d.day + 151;//31
			break;
		case 7:d.day = d.day + 181;//30
			break;
		case 8:d.day = d.day + 212;//31
			break;
		case 9:d.day = d.day + 243;//31
			break;
		case 10:d.day = d.day + 273;//30
			break;
		case 11:d.day = d.day + 304;//31
			break;
		case 12:d.day = d.day + 334;//30
			break;

		}

		//printf("%d  %d  %d ", d.year, d.month, d.day);

		if ((d.year % 4 == 0 && d.year % 100 != 0) || (d.year % 400 == 0) && (d.month > 2))
		{
			d.day = d.day + 1;
		}

		if (i == 2)
		{
			k1 = d.day;
		}
		else if (i == 1)
		{
			k2 = d.day;
		}

		i--;

	} while (i);
	//printf("是这年的第%d 天", d.day);
	printf("距离还有 %d 天", k2 - k1);
	return 0;
}