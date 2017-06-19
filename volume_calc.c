/*
        Copyright 2017 Kove W. Ochre-Salter.
        This program along with all it's ascociates(linux-sci-utils-v0.01) is and has been distributed under terms of the GNU General Public License Version 3 (GNU GPLv3).
*/


#include <stdio.h>
#include "../sciMath.h"

/* Defining the main function that takes 1 array as an argument */
int main(void)
{
	/* Decalring function(Better description see its definition */
	int getOp(void);

	/* Declaring function(Better description see its definition) */
	void help(void);

	/* Declaring variables v, l, b, h, r all as float */
	float v, l, b, h, r;
	int opType;

	/* Initialising variables to 0*/
	v = 0;
	l = 0;
	b = 0;
	h = 0;
	r = 0;
	opType = 0;

	printf("Enter the opertation type: ");	
	opType = getOp();

	/* Checking if the argument was rect */
	if(opType == 1)
	{
		printf("Enter Length, Breadth, Height: ");
		scanf("%f, %f, %f", &l, &b, &h);
		printf("Volume = %f\n", calcRectVol(l, b, h));

		/* exiting program */
		return 0;
	}

	/* Checking if the argument was Box */
	else if(opType == 2)
	{
		printf("Enter Side: ");
 		scanf("%f", &l);
		printf("Volume = %f\n", calcBoxVol(l));

		/* exiting program*/
		return 0;
	}

	/* Checking if the argument was sphere */
	else if(opType == 3)
	{
		printf("Enter radius: ");
		scanf("%f", &r);
		printf("Volume = %f\n", calcSphereVol(r));

		/* Exiting program */
		return 0;
	}

	/* Checking if the argument was cylender, cone or pyramid */
	else if(opType == 4)
	{
		printf("Enter radius, height: ");
		scanf("%f, %f", &r, &h);
		printf("Volume = %f\n", calcCCPVol(r, h));

		/* Exiting program */
		return 0;
	}

	/* Checking if the argument was help */
	else if(opType ==  5)
	{
		help();

		/* exiting program */
		return 0;
	}

	/* Checking if argument was none of the above*/
	else
	{
		help();

		/* exiting porgram */
		return 0;
	}
}

/* Function returns the argument which specifys the formular to utilise */
int getOp(void)
{
        int input = 0;

        scanf("%d", &input);
        return input;
}

/* Prints a list of available arguments */
void help(void)
{
        printf("Volume Calc V 0.01:\n\t1: use the rectangle formular v = lbh\n\t2: use the cube fomrular v = sss\n\t3: use sphere fomrular v = (4/3)PIr^3\n\t4: use Cylender, Cone or"
	 "Pyramid formular v = PIr^2h\n\t5: display this info and exit\n");
}
