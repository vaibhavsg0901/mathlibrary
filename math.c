/******************************************************************************
 * Copyright (C) VAIBHAV GAWALI vaibhavsg0901@gmail.com
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; either version 2.1 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 */


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "math.h"


//This fabs() function returns absolute value of the number.
double fabs(double x) {
	if (x >= 0.00)
		return x;
	else 
		return (-x);
		}
		
//This exp() function returns the exponential value of number 		
double exp(double x) {
	double sum = 1;
	double term = 1;
	int n = 1;
	while (fabs(term)>=0.000001) {
		term = (term * x) / n;
		sum = sum + term;
		n++;
	}	
	return sum;
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
	double k;
	if(cosine(x) == 0.0 )
		k = strtod("inf", NULL);
		return k; 
//	else if(cosine(x) == 0.0 && sine(x) == -1.00)
//		return n_inf;	
//	else 
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
	double asin = x, term = x;
	int n = 1;
	while (fabs(term) > 0.0000001) {
		term = ((term) * (x * x) * (2 * n - 1) * (2 * n - 1)) / ((2 * n + 1) * (2 * n));
		asin = asin + term;	
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
		  
//This fact() function returns the factorial of the given number
int fact(int x) {
	int i = 1;
	int j = 1;
	if (x == 0)
		return 1;
	else {
		for(i = 1; i <= x; i++) {
			j = j * i;
		}
	}
	return j;
}


//This sqrt() function returns the squareroot of given number
double mysqrt(double x) {
	double l = 0 , h = x, b;
	double k;
	double m;
	int i;
	if(x < 0) {
		k = strtod("nan", NULL);
		return k;
	}
	else {	
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


//This log() function returns the logarithmic value  of x to the base e			
double log(double x) {
	double y = (x - 1)/(x + 1), sum = y, term = y;
	//double k = strtod("n_inf", NULL);
	//if(x == 0.00)
	//	return ninf;
	int n = 3;
	while(fabs(term) > 0.000001) {
		term = term * y * y;
		sum = sum + (term/n);
		n = n + 2;
	}
	return (2 * sum);
}		


//This log10() fuction returns the natural logarithmic value of x	
double log10(double x) {
	double l;
	//if (x == 0) 
	//	printf("ERROR:Entered value should be greater than 0 as domain is the numbers greater than ZERO");
	
	//else {
	    l = log(x);
	    return l / 2.3025850929940;
	}
	

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

//This myround() function returns the rounded off value of the given number
int myround(double x) {
	if(x<0.00000000000)
		return (x-0.5); 
	else
		return (x+0.5);
}						

int isgreater(double x, double y) {
	if((x - y) > 0)
		return 1;
	else return 0;
}		
	
int isgreaterequal(double x, double y) {
	if((x - y) >= 0)
		return 1;
	else return 0;
}	

int isless(double x, double y) {
	if((x - y) < 0)
		return 1;
	else return 0;
}	

int islessequal(double x, double y) {
	if((x - y) <= 0)
		return 1;
	else return 0;
}

//This ldexp returns x multiplied by 2 raised to the power of exponent.		 
double ldexp (double x, int y) {
	double z;
	z = x * pow(2, y);
	return z;
}

//This fmod() function returns the remainder of x divided by y 
double fmod (double x, double y) {
	int a = x = x * 1000000;
	int b = y = y * 1000000;
	double z = (a % b)/1000000; 
	return z;
}

//The returned value is the fraction component (part after the decimal), and sets integer to the integer component.
double modf(double x, double *y) {
	int z;
	double w;
	z = x;
	w = z;
	y = &w;
	return (x - z);
}	

//double frexp (double x, int *y) //{
	//int z;
	//int w;
	//y = &w;
	
	

 

		
	
