#include<stdio.h>
#include<math.h>
int main()
{
	double m = 0, c = 1, v = 1, b = 1;
	int i, a[20] = { 0 }, w[20] = { 0 }, d = 1, h = 1, n, k, e = 0, f = 1000, g = 0;

	scanf("%d", &n);
	printf("%d,", n);
	while (h > 0)
	{
		double pow(double x, double y);
		b = pow(10, m);
		f = b;
		h = n / f;
		m++;
	}
	k = m - 1;
	m = m - 2;
	for (i = 1; i <= k; i++)
	{
		double pow(double x, double y);
		c = pow(10, m);
		w[i] = n / c;
		a[i] = w[i] - w[i - 1] * 10; m--;
		while (v <= a[i])
		{
			d = v * d;
			v++;
		}
		v = 1;
		e = e + d;
		d = 1;

	}
	for (i = 2; i <= k; i++)
	{
		printf("%d!+", a[i - 1]);

	}
	printf("%d!=", a[i - 1]);
	printf("%d", e);
	printf("\n");
	if (e == n)
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
	return 0;
}