#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "summ.h"


double summ(double a, double b, double c, double d){
	int x,y;
	x = a + c;
	y = b + d;
	printf("(%d + %d*i)\n",x,y);
	return 0;
}
