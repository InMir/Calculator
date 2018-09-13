#include "summ.h"
#include "umn.h"
#include "del.h"
#include "minus.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>


int main()
{
	int a,b,c,d;
	char oper = '+';
	printf("a = ");	
	scanf("%d",&a);
	printf("b = ");	
	scanf("%d",&b);
	printf("c = ");	
	scanf("%d",&c);
	printf("d = ");	
	scanf("%d",&d);
	printf("Complex numbers one (%d + %d*i)\n" ,a,b);
	printf("Complex numbers two (%d + %d*i)\n" ,c,d);
	printf("To exit, enter 'e'\n");
	printf("Enter the operation: ");	
	while(1)
	{
		scanf("%c", &oper);		
		if(oper == '+')	
		{
			summ(a, b, c, d);
			printf("Enter the operation: ");
		}
		if(oper == '-')	
		{
			minus(a, b, c, d);
			printf("Enter the operation: ");
		}		
		if(oper == '*')	
		{
			umn(a, b, c, d);
			printf("Enter the operation: ");
		}
		if(oper == '/')	
		{
			del(a, b, c, d);
			printf("Enter the operation: ");
		}
		if(oper == 'e')	
		{
			return 0;
		}
	}	
}
