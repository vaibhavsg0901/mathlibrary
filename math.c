#include <stdio.h>
#include "math.h"


//This fabs() function returns absolute value of the number
double fabs(double x) {
	if (x >= 0.00)
		return x;
	else 
		return (-x);
		}
		
//This exp() function returns the exponential value of number 		
double exp(double x) {
	double result = 1;
	int n = 2;
	double term = x;
	while(fabs(term) > 0.000001) {
		result = result + term;
		term = term*x/fact(n);
		n++;
	}
	return result;
}
		
//This sine() function returns sine of the angle in radians
double sine(double x ) {
	int sign = -1, n = 3;
	double term = x, sum = x;
	while( fabs(term) > 0.000001 ) {
		term = (term * x * x)/(n * (n-1) );
		sum = sum + (sign * term);
		sign = sign * (-1);
		n = n + 2;
	}
	return sum;
}		 

//This cosine() function returns cosine of the angle in radians
double cosine( double x ){
	int sign = -1, n = 2;
	double term = 1, sum = 1;
	while( fabs(term) > 0.000001 ) {
		term = (term * x * x)/(n * (n-1) );
		sum = sum + (sign * term);
		sign = sign * (-1);
		n = n + 2;
	}
	return sum;
}

//This tangent() function returns sine of the angle in radians
double tan(double x) {
	double tan;
	tan = sine(x) / cosine(x);
	return tan;
}		

//This sinh() function returns hyperbolic sine of x		 		  
double sinh(double x) {
	double t;
	t = (exp(x) - exp(-x))/2;
	return t;
}

//This cosh() function returns hyperbolic cosine of x
double cosh(double x) {
	double t;
	t = (exp(x) + exp(-x))/2; 
	return t;
}

//This tanh() function returns hyperbolic tangent of x
double tanh(double x) {
	double t;
	t = sinh(x) / cosh(x);
	return t;
}

//This asin() function returns the arc sine of x
double asin(double x) {
	double asin = x, t = x;
	int n = 1;
	while (!(t >= -0.0000001 && t <= 0.0000001)) {
		t = ((t) * (x * x) * (2 * n - 1) * (2 * n - 1)) / ((2 * n + 1) * (2 * n));
		asin = asin + t;	
		n++;
	}
	return asin;
}

//This acos() function returns the arc cosine of x
double acos(double x) {
	
	double acos;
	acos = (PI / 2) - asin(x);
	return acos;
}

//This atan() function returns the arc tangent of x
double atan(double x) {
	double result = x;
	int n = 3, sign = -1;
	double term = x;
	while(fabs(term) > 0.000001) {
		term = (term * x * x)/n;
		result = result + sign * term;
		sign = sign *(-1);
		n = n + 2;
	}
	return result;
}
		  

//This sqrt() function returns the squareroot of given number
double sqrt(double x) {
	double l = 0 , h = x, b;
	
	double m;
	int i;
	m = (l + h) / 2;
	for (i = 0; i <= 50; i++) {
		b = m * m;
		if(b == x) {
	        	return m;
	           	break;
	        } 
		else {
	        	if(m * m > x) {
	        		h = m;
	                m = (l + h) / 2;
	            } 
			else {
               		l = m;
               		m = (l + h) / 2;
            	}
         	}
      	}
      	return 0;
}

//This pow() function returns the value of x raised to the power of y 
double pow(double x, double y) {
    int i = 1;
	double p = 1;
	if(y == 0)
		return 1;
	if(y > 0) {
		while(i <= y) {
			p = p * x;
			i++;
		}
		return p;
	}
	if(y < 0) {
		int j = 1;
		y = - y;
		while(j <= y) {
			p = p * x;
			j++;
		}
		return (i / p);
	}
	return 0;
}

//This fact() function returns the factorial of the given number
int fact(unsigned int x) {
	long int i = 1;
	long int j = 1;
	if (x == 0)
		return 1;
	else {
		for(i = 1; i <= x; i++) {
			j = j * i;
		}
	}
	return j;
}

//This log() function returns the logarithmic value  of x to the base e			
/*double log(double x) {
	int n = 1;
	double log = x-1;
	int t = 1;
	while(!(t >= -0.0000000001 && t <= 0.000000001)) {
		t=(-1) * pow((x-1), n) / n;
		log = log + t;
		n = n + 2;
	}
	return log;
}

//This log10() fuction returns the natural logarithmic value of x	
double log10(double x) {
	if (x == 0) 
		printf("ERROR:Entered value should be greater than 0 as domain is the numbers greater than ZERO");
	
	else {
	    double l;
	    l = log(x);
	    return l / 2.3025850929940;
	}
}*/

//This myfloor() function returns largest integral value less than x. 
int myfloor(double x) {
	int n1;
	double n2;
	n1 = x - 1;
	n2 = x - 1; 
	if(n2 > n1) {
		return (int)x;
	}
	else {
		return n1;
	}
}			

//This myceil() function returns smallest integral value that exceeds x. 
int myceil(double x) {
	int n1;
	double n2;
	n1 = x + 1;
	n2 = x + 1; 
	if(n2 > n1) {
		return (int)(x+1);
	}
	else {
		return n1;
	}
}			











		
	
