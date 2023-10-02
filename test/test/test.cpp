#define  _CRT_SECURE_NO_WARNINGS 1

#define pi 3.14
#include<stdio.h>
#include<math.h>
int main(void)
{
	double a = 1, b = 1, c = 0, d = 0, r, V;
	printf("enter the number1: ");
	scanf("%lf", &a);
	printf("enter the nunber2: ");
	scanf("%lf", &b);
	printf("enter the number3: ");
	scanf("%lf", &c);
	printf("enter the number4: ");
	scanf("%lf", &d);
	r = sqrt((a - c) * (a - c) + (b - d) * (b - d));
	V = 4.0 / 3.0 * pi * r * r * r;
	printf("r: %lf\n", r);
	printf("V: %lf\n", V);
	return 0;

}