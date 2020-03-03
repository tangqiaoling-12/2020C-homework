#include <stdio.h>
#include <math.h>

#define H 3.14159265358979323846
int main()
{
	int i = 1;
	double x, x2, result = 1, t1 = 1, t2 = 1, t3;

	printf("Input the times of H:");
	scanf("%lf", &x);
	x2 = H * x * x * H;

	do
	{
		t1 *= x2;
		t2 *= ((2 * i - 1) * 2 * i);
		t3 = (t1 / t2);
		if (i % 2 == 0)
			result += t3;
		else
			result -= t3;
		i++;
	} while (t3 > 0.0000001 || t3 < -0.0000001);

	printf("result=%lf\n", result);

	return 0;
}
