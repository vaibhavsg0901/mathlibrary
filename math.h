/*/*****************************************************************************
 * Copyright (C) VAIBHAV GAWALI vaibhavsg0901@gmail.com
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; either version 2.1 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 */

#ifndef __MATH_H
#define __MATH_H
#ifndef __STRICT_ANSI__
#define E		2.7182818284590452354
#define LOG2E		1.4426950408889634074
#define LOG10E		0.43429448190325182765
#define LN2		0.69314718055994530942
#define LN10		2.30258509299404568402
#define PI		3.14159265358979323846
#define PI_2		1.57079632679489661923
#define PI_4		0.78539816339744830962
#define P_1_PI		0.31830988618379067154
#define P_2_PI		0.63661977236758134308
#define P_2_SQRTPI	1.12837916709551257390
#define SQRT2		1.41421356237309504880
#define SQRT1_2		0.70710678118654752440
#endif

#define nan = 0.0/0.0;
#define p_inf = 1.0/0.0;
#define n_inf = (-1.0)/0.0;

#define	_NAN	0x0001	/* Signaling "Not a Number" */
#define	_NINF	0x0004	/* Negative Infinity */
#define	_PINF	0x0200	/* Positive Infinity */

int isless(double, double);
int islessequal(double, double);
int isgreater(double, double);
int isgreaterequal(double, double);
double fabs(double);
double exp(double);
double sine(double);
double cosine(double);
double tan(double);
double sinh(double);
double cosh(double);
double tanh(double);
double asin(double);
double acos(double);
double atan(double);
double pow(double, double);
double log(double);
double log10(double);
int myfloor(double);
int myceil(double);
int myround(double);
double ldexp (double, int);
//double modf (double, double*);
double fmod (double, double);
int fact(int); 
double mysqrt(double);
#endif 
