#include<stdio.h>
int main()
{
	int m, n, a, x = 0, b, y = 0, z = 0, flag = 0;
	scanf("%d %d", &m, &n);
	if (n >=1000)
	{
		n = 999;
	}
	if (m <= 100)
	{
		b = 100;
		while ( 100<= b && n >= b)
		{
			z = b / 100;
			y = (b - z * 100) / 10;
			x = b - z * 100 - y * 10;
			a = x * x * x + y * y * y + z * z * z;
			b = 100 * z + 10 * y + x;
			if (a == b)
			{
				printf("%d ", b);
				flag = 1;
			}
			b++;
		}
	}
	else
	{
		b = m;
		while (m <= b && n >= b)
		{
			z = b / 100;
			y = (b - z * 100) / 10;
			x = b - z * 100 - y * 10;
			a = x * x * x + y * y * y + z * z * z;
			b = 100 * z + 10 * y + x;
			if (a == b)
			{
				printf("%d ", b);
				flag = 1;
			}
			b++;
		}
	}	if (flag == 0)
		{
			printf("No Answer");
		}
	return 0;
}