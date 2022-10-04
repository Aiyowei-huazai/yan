#include<stdio.h>



int main()
{
	int i, j;
	int s;
	for (i = 6; i <= 1000; i++)
	{
		s = i - 1;
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				s = s - j;
			}
		}
		if (s == 0)
		{
			printf("%d 的因子是：1 ", i);
			for (j = 2; j < i; j++)
			{
				if (i % j == 0)
				{
					printf("%d ", j);
				}
			}
			printf("\n");
		}
		
	}




	return 0;
}