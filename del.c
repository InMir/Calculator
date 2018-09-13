#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "del.h"


double del(double a, double b, double c, double d){
	double x,y;
	x = (a*c + b*d)/(c*c + d*d);
	y = (b*c - a*d)/(c*c + d*d);
	printf("(%f + %f*i)\n",x,y);	
	return 0;
}
