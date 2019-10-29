#include<stdio.h>
#include<math.h>
int main()
{
	double e, a = 1.0, b = 1.0, c = 1.0, n = 1.0, d = 0.0, f, pi = 1.0, g, h, l = 0.0;
	scanf("%lf", &e);
	while (pi < e)
	{
		n++;
		a = 2 * n - 1;
		b = a * b;
		f = n;
		while (f > 1)
		{
			--f;
			c = c * f;
		}
		d = c / b + d;
		pi = 2 * (d + 1);
		l = c;
		c = 1;

	}
	g = fabs(pi - e);
	h = fabs(pi - 2 * l / b - e);
	if (h < g)
	{
		n = n-1;
		pi = pi - 2 * l / b;
		printf("%9.7f %.0f", pi, n);
	}
	else
	{
		n = n - 1; pi = pi - 2 * l / b;
		printf("%9.7f %.0f", pi, n);
	}

	return 0;
}