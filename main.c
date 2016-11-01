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


#include <stdio.h>
#include "math.h"
#include<stdlib.h>
#include<string.h>
int main() {
	double w, x, y, z;
	int m;
	char *str = (char *)malloc(16);
	FILE *fp;
	fp = fopen("input.txt", "r");
	while(!feof(fp)) {
		fscanf(fp, "%s",  str);
		if(!strcmp(str, "fabs")) {
			fscanf(fp, "%lf", &x);
			fscanf(fp, "%lf", &y);
			z = fabs(x);
			if(z == y)
				printf("fabs successfull\n");
			else
				printf("fabs Unsuccessfull\tanswer should be %lf\n", z);
		}
		else if(!strcmp(str, "exp")) { 
			fscanf(fp, "%lf", &x);
			fscanf(fp, "%lf", &y);
			z = exp(x);
			if((z - y) <= 0.000001 && (z - y) >= -0.000001 )
				printf("exp successfull\n");
			else
				printf("exp Unsuccessfull\tanswer should be %lf\n", z);
		}
		else if(!strcmp(str, "sine")) { 
			fscanf(fp, "%lf", &x);
			fscanf(fp, "%lf", &y);
			z = sine(x);
			if((z - y) <= 0.00001 && (z - y) >= -0.00001 )
				printf("sine successfull\n");
			else
				printf("sine Unsuccessfull\tanswer should be %lf\n", z);
		}
		else if(!strcmp(str, "cosine")) { 
			fscanf(fp, "%lf", &x);
			fscanf(fp, "%lf", &y);
			z = cosine(x);
			if((z - y) <= 0.00001 && (z - y) >= -0.00001 )
				printf("cosine successfull\n");
			else
				printf("cosine Unsuccessfull\tanswer should be %lf\n", z);
		}
		else if(!strcmp(str, "tan")) { 
			fscanf(fp, "%lf", &x);
			fscanf(fp, "%lf", &y);
			z = tan(x);
			if((z - y) <= 0.00001 && (z - y) >= -0.00001 )
				printf("tan successfull\n");
			else
				printf("tan Unsuccessfull\tanswer should be %lf\n", z);
		}
		else if(!strcmp(str, "sinh")) { 
			fscanf(fp, "%lf", &x);
			fscanf(fp, "%lf", &y);
			z = sinh(x);
			if((z - y) <= 0.00001 && (z - y) >= -0.00001 )
				printf("sinh successfull\n");
			else
				printf("sinh Unsuccessfull\tanswer should be %lf\n", z);
		}
		else if(!strcmp(str, "cosh")) { 
			fscanf(fp, "%lf", &x);
			fscanf(fp, "%lf", &y);
			z = cosh(x);
			if((z - y) <= 0.00001 && (z - y) >= -0.00001 )
				printf("cosh successfull\n");
			else
				printf("cosh Unsuccessfull\tanswer should be %lf\n", z);
		}
		else if(!strcmp(str, "tanh")) { 
			fscanf(fp, "%lf", &x);
			fscanf(fp, "%lf", &y);
			z = tanh(x);
			if((z - y) <= 0.00001 && (z - y) >= -0.00001 )
				printf("tanh successfull\n");
			else
				printf("tanh Unsuccessfull\tanswer should be %lf\n", z);
		}
		else if(!strcmp(str, "tanh")) { 
			fscanf(fp, "%lf", &x);
			fscanf(fp, "%lf", &y);
			z = tanh(x);
			if((z - y) <= 0.00001 && (z - y) >= -0.00001 )
				printf("tanh successfull\n");
			else
				printf("tanh Unsuccessfull\tanswer should be %lf\n", z);
		}
		else if(!strcmp(str, "atan")) { 
			fscanf(fp, "%lf", &x);
			fscanf(fp, "%lf", &y);
			z = atan(x);
			if((z - y) <= 0.00001 && (z - y) >= -0.00001 )
				printf("atan successfull\n");
			else
				printf("atan Unsuccessfull\tanswer should be %lf\n", z);
		}
		else if(!strcmp(str, "asin")) { 
			fscanf(fp, "%lf", &x);
			fscanf(fp, "%lf", &y);
			z = asin(x);
			if((z - y) <= 0.00001 && (z - y) >= -0.00001 )
				printf("asin successfull\n");
			else
				printf("asin Unsuccessfull\tanswer should be %lf\n", z);
		}
		else if(!strcmp(str, "acos")) { 
			fscanf(fp, "%lf", &x);
			fscanf(fp, "%lf", &y);
			z = acos(x);
			if((z - y) <= 0.00001 && (z - y) >= -0.00001 )
				printf("acos successfull\n");
			else
				printf("acos Unsuccessfull\tanswer should be %lf\n", z);
		}
		
		else if(!strcmp(str, "pow")) { 
			fscanf(fp, "%lf", &x);
			fscanf(fp, "%lf", &w);
			fscanf(fp, "%lf", &y);
			z = pow(x, w);
			if((z - y) <= 0.00001 && (z - y) >= -0.00001 )
				printf("pow successfull\n");
			else
				printf("pow Unsuccessfull\tanswer should be %lf\n", z);
		}
		else if(!strcmp(str, "log")) { 
			fscanf(fp, "%lf", &x);
			fscanf(fp, "%lf", &y);
			z = log(x);
			if((z - y) <= 0.00001 && (z - y) >= -0.00001 )
				printf("log successfull\n");
			else
				printf("log Unsuccessfull\tanswer should be %lf\n", z);
		}
		else if(!strcmp(str, "log10")) { 
			fscanf(fp, "%lf", &x);
			fscanf(fp, "%lf", &y);
			z = log10(x);
			if((z - y) <= 0.00001 && (z - y) >= -0.00001 )
				printf("log10 successfull\n");
			else
				printf("log10 Unsuccessfull\tanswer should be %lf\n", z);
		}
		else if(!strcmp(str, "myfloor")) { 
			fscanf(fp, "%lf", &x);
			fscanf(fp, "%lf", &y);
			z = myfloor(x);
			if((z - y) <= 0.00001 && (z - y) >= -0.00001 )
				printf("myfloor successfull\n");
			else
				printf("myfloor Unsuccessfull\tanswer should be %lf\n", z);
		}
		else if(!strcmp(str, "myceil")) { 
			fscanf(fp, "%lf", &x);
			fscanf(fp, "%lf", &y);
			z = myceil(x);
			if((z - y) <= 0.00001 && (z - y) >= -0.00001 )
				printf("myceil successfull\n");
			else
				printf("myceil Unsuccessfull\tanswer should be %lf\n", z);
		}
		else if(!strcmp(str, "myround")) { 
			fscanf(fp, "%lf", &x);
			fscanf(fp, "%lf", &y);
			m = myround(x);
			if((m - y) <= 0.00001 && (m - y) >= -0.00001 )
				printf("myround successfull\n");
			else
				printf("myround Unsuccessfull\tanswer should be %d\n", m);
		}
		else if(!strcmp(str, "ldexp")) { 
			fscanf(fp, "%lf", &x);
			fscanf(fp, "%d", &m);
			fscanf(fp, "%lf", &y);
			z = ldexp(x, m);
			if((z - y) <= 0.00001 && (z - y) >= -0.00001 )
				printf("ldexp successfull\n");
			else
				printf("ldexp Unsuccessfull\tanswer should be %lf\n", z);
		}
		else if(!strcmp(str, "fmod")) { 
			fscanf(fp, "%lf", &x);
			fscanf(fp, "%lf", &w);
			fscanf(fp, "%lf", &y);
			z = fmod(x, w);
			if((z - y) <= 0.00001 && (z - y) >= -0.00001 )
				printf("fmod successfull\n");
			else
				printf("fmod Unsuccessfull\tanswer should be %lf\n", z);
		}
		/*else if(!strcmp(str, "modf")) { 
			double *m;
			fscanf(fp, "%lf", &x);
			fscanf(fp, "%lf", &y);
			z = modf(x, &m);
			if((z - y) <= 0.00001 && (z - y) >= -0.00001 )
				printf("modf successfull\n");
			else
				printf("modf Unsuccessfull\tanswer should be %lf\n", z);
		}*/
		else if(!strcmp(str, "fact")) { 
			fscanf(fp, "%lf", &x);
			fscanf(fp, "%lf", &y);
			z = fact(x);
			if((z - y) <= 0.00001 && (z - y) >= -0.00001 )
				printf("fact successfull\n");
			else
				printf("fact Unsuccessfull\tanswer should be %lf\n", z);
		}
		else if(!strcmp(str, "mysqrt")) { 
			fscanf(fp, "%lf", &x);
			fscanf(fp, "%lf", &y);
			z = mysqrt(x);
			if((z - y) <= 0.00001 && (z - y) >= -0.00001 )
				printf("mysqrt successfull\n");
			else
				printf("mysqrt Unsuccessfull\tanswer should be %lf\n", z);
		}
	}
	free(str);	
}	
	

