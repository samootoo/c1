#include<stdio.h>
#include<math.h>
int main()
{
	double x, pi = 0.0, c=1.0, d = 1.0, f, g=0.0;
	int n;
	scanf("%lf %d", &x, &n);
	while (n > 0)
	{
		double pow(double a, double b);
		c = pow(x, n);
		f = n;
		while (f > 0)
		{
			d = f * d;
			g = c / d;
			f = f - 1;
		}
		pi = g + pi;
		n = n - 1;
		d = 1.0;
	}
	pi = pi + 1;
	printf("%8.6f", pi);
	return 0;
}