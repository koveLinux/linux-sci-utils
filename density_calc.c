/*
        Copyright 2017 Kove W. Ochre-Salter.
        This program along with all it's ascociates(sciUtils_v0.01) is and has been distributed under terms of the GNU General Public License Version 3 (GNU GPLv3).
*/

#include <stdio.h>
#include "../sciMath.h"

int main(void)
{
	/* Declaring variables M(Mass) V(Volume)*/
	float m, v;
	
	/* Initialising variables M and V */
	m = 0;
	v = 0;

	printf("Enter Mass, Volume: ");
	scanf("%f, %f", &m, &v);
	printf("Density = %1.3f\n", calcDense(m, v));

	return 0;
}
