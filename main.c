#include <stdio.h>
#include "math.h"

int main() {
	double x, y;
	printf("Enter the value of the x\n");
	scanf("%lf", &x );
	printf("Enter the value of the y\n");
	scanf("%lf", &y ); 
	printf("%lf\n", fabs(x));
	printf("%lf\n", exp(x));
	printf("%lf\n", sine(x));
	printf("%lf\n", cosine(x));
	printf("%lf\n", tan(x));
	printf("%lf\n", sinh(x));
	printf("%lf\n", cosh(x));
	printf("%lf\n", tanh(x));
	//printf("%lf\n", asin(x));
	//printf("%lf\n", acos(x));
	printf("%lf\n", atan(x));
	printf("%lf\n", sqrt(x));
	printf("%lf\n", pow(x, y));
	printf("%d\n", fact(x));
	//printf("%lf\n", log(x));
	//printf("%lf\n", log10(x));*/
	printf("%d\n", myfloor(x));
	printf("%d\n", myceil(x)); 
}

