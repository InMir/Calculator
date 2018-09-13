#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "umn.h"


double umn(double a, double b, double c, double d){
	int x,y;
	x = a*c - b*d;
	y = b*c + a*d;
	printf("(%d + %d*i)\n",x,y);
	return 0;
}
