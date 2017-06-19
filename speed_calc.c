/*
        Copyright 2017 Kove W. Ochre-Salter.
        This program along with all it's ascociates(linux-sci-utils-v0.01) is and has been distributed under terms of the GNU General Public License Version 3 (GNU GPLv3).
*/


#include <stdio.h>
#include "../sciMath.h"

int main(void)
{
	/* Declaring variables distance and time */
	float dist, time;

	/* Initialising them to 0 */
	dist = 0;
	time = 0;

	printf("Enter speed, time: ");
	scanf("%f, %f", &dist, &time);
	printf("Speed = %f\n", calcSpeed(dist, time));
	return 0;
}
