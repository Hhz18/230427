/*
#include<stdio.h>
#include<math.h>
int main()
{
	double a;
	double x1, x2;
	scanf_s("%lf", &a);
	if (a < 0) {
		printf("³ö´í");
	}
	else {
		x1 = 2 / a;
		x2 = (x1 + a / x1) / 2;
		while (fabs(x1 - x2) >= 0.0000000001) {
			printf("%f\n", x2);
			x1 = x2;
			x2 = (x1 + a / x2) / 2;
		}
		return 0;
	}
}
*/
#include<iostream>
#using namespace std;
int main()