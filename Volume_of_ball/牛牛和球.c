#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main()
{
	double q = (double)4 / (double)3, w = 3.14, e = 0;
	int r = 0, t = 0;
	scanf("%d", &r);
	t = pow(r, 3);
	e = q * w * (double)t;
	printf("%lf\n", e);
	return 0;
}