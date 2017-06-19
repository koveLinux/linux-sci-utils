/*
        Copyright 2017 Kove W. Ochre-Salter.
        This program along with all it's ascociates(sciUtils_v0.01) is and has been distributed under terms of the GNU General Public License Version 3 (GNU GPLv3).
*/

#define PI 3.14
#define HALF 0.5

/* Declarations: */

/* Declaring function(Better description see its definition) */
double calcRectVol(float Length, float Breadth, float Height);

/* Declaring function(Better description see its definition) */
double calcBoxVol(float Length);

/* Declaring function(Better description see its definition) */
double calcSphereVol(float radius);

/* Declaring function(Better description see its definition) */
double calcCCPVol(float radius, float height);

/* Declaring functuin(Better description see its definition) */
double calcRectArea(float length, float height);

/* Declaring function(Better description see it's definition)  */
double calcBoxArea(float length);

/* Declaring function(Better description see it's definition) */
double calcCirArea(float radius);

/* Declaring function(Better description see it's definition) */
double calcTriArea(float base, float height);

/* Declaring function(Better description see its definition) */
double calcDense(float mass, float volume);

/* Declaring funtion(Better description see its definition) */
double calcSpeed(float distance, float time);

/* Definitions: */

/* Takes 3 variables as arguments and returns their product*/
double calcRectVol(float Length, float Breadth, float Height)
{
        return Length * Breadth * Height;
}

/* Takes 1 variable as an argumanent and returns its cubed value */
double calcBoxVol(float Length)
{
        return Length * Length * Length;
}

/* Takes 1 arument and return the volume of sphere */
double calcSphereVol(float radius)
{
	return (4.0 / 3.0) * PI * (radius * radius * radius);
}

/* Takes 2 variables as arguments and returns the volume of the cylender, cone or pyramid */
double calcCCPVol(float radius, float height)
{
	return (PI * (radius * radius)) * height;
}

/* Takes 2 variables as arguments and returns their product */
double calcRectArea(float length, float height)
{
	return length * height;
}

/* Takes 1 variable as an argument and returns it's square value */
double calcBoxArea(float length)
{
	return length * length;
}

/* Takes 1 variable as an argument and returns the area of the circle */
double calcCirArea(float radius)
{
	return PI * (radius * radius);
}

/* Takes 2 variables as arguments and returns their product */
double calcTriArea(float base, float height)
{
	return HALF * base * height;
}


/* Takes 2 variables as arguments and returns their product */
double calcDense(float mass, float volume)
{
	return mass / volume;
}

/* Takes 2 variables as arguments and returns their qoutient */
double calcSpeed(float distance, float time)
{
	return distance / time;
}
