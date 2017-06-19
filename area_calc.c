/*
	Copyright 2017 Kove W. Ochre-Salter.
	This program along with all it's ascociates(sciUtils_v0.01) is and has been distributed under terms of the GNU General Public License Version 3 (GNU GPLv3).
*/

#include <stdio.h>
#include "../sciMath.h"

int main(void)
{
	/* Declaring the helpful output */
	char help[] = "\nArea calc v 0.01:\n\t1: use rectangular math.\n\t2: use boxish math.\n\t3: use circular math.\n\t4: use triangular math.\n\t5: be helpful\n";
	
	/* Declaring vairables to store length, height, radius respectively */
	float l, h, r, b;
	int opType;

	/* Initialtinsing variables to 0 */
	l = 0;
	h = 0;
	r = 0;
	b = 0;
	opType = 0;

	printf("Enter object: ");
	scanf("%d", &opType);
	
	/* Checking if input was 1(Rectangular) */
	if(opType == 1)
	{
		printf("Enter length, height: ");
		scanf("%f, %f", &l, &h);
		printf("Area = %f\n", calcRectArea(l, h));
		
		/* Exiting program */
		return 0;
	}
	
	/* Checking if the input was 2(Boxish) */
	else if(opType == 2)
	{
		printf("Enter length: ");
		scanf("%f", &l);
		printf("Area = %f\n", calcBoxArea(l));

		/* Exiting program */
		return 0;
	}
	
	/* Checking if the input was 3(Circular) */
	else if(opType == 3)
	{
		printf("Enter radius: ");
		scanf("%f", &r);
		printf("Area = %f\n", calcCirArea(r));

		/* Exiting program */
		return 0;
	}

	/* Checking if the input was 4(triangular) */
	else if(opType == 4)
	{
		printf("Enter base, height: ");
		scanf("%f, %f", &b, &h);
		printf("Area = %f\n", calcTriArea(b, h));

		/* Exiting program */
		return 0;
	}

	/* Checking if input was 5(helpful) */
	else if(opType == 5)
	{
		/* Being helpful */
		printf("%s\n", help);
		
		/* Exiting program */
		return 0;
	}

	/* Checking if input was none of the above */
	else
	{	
		/* Being helpful */
		printf("%s\n", help);

		/* Exiting program */
		return 0;
	}
}
