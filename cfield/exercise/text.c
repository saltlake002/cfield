#include<stdio.h>
#include<math.h>
int main()
{
	float p0 = 0, rate = 0, n = 0,p,z;
	scanf_s("%f%f%f", &p0, &rate, &n);
	z = pow(1 + rate, n);
	p = p0 * z;
	printf("%.2f", p);
	return 0;

}