#include<stdio.h>
#include<math.h>
int main()
{
double e, a = 1.0, pi = 1.0, b, c, n = 0.0, d, f;
scanf("%lf", &e);
while (2 * pi < e)
{
	n++;
	a = 2 * n / (2 * n - 1) * 2 * n / (2 * n + 1);
	pi = a * pi;
}
d = 2 * pi;
b = fabs(2 * pi - e);
c = fabs(2 * pi / a - e);
if (b >= c)
{
	f = (2 * pi /a); n = n - 1;
	printf("%11.9f %.0f", f, n);

}
else
{
	d = 2 * pi;
	printf("%11.9f %.0f", d, n);
}
return 0;
}