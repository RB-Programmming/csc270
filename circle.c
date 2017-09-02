/*
 * circle.c
 * Assignment#2
 * Goals:
 * Correctly calculate diameter, circumference, and area of a circle based on radius.
 * Printed values will be rounded to three decimal places.
 * Returns 0 on success, 1 on failure.
 */

//Sets up input, output, and error streams (standard streams).
#include <stdio.h>
//Defines the value of PI (a preprocessor symbol)  as 3.1415926 for use throughout this program.
#define PI 3.1415926

/**
 *  The main method of the circle.c program requests that the user enters a positive number as a circle's radius
 *  If the entered value is positive, the program will then use the radius to calculate the diameter, circumference, and area of a circle with said radius, rounding to the third
 *  decimal place when needed. Otherwise, the program will return 1, indicating an incorrect value was used for the radius.
 */

int main (void){
	//Define and initialize a float variable to contain the radius entered by the user. 
	float radius=0;
	printf("Welcome to circle.c, a program for calculating a circle's  diameter, circumference, and area.\nPlease enter a positive number as the circle's radius.\n");
	scanf("%f", &radius);
	//Return 1 (indicating an error has occurred due to the invalid radius entry (it should not be less than 0) if the radius is less than zero.
	if(radius < 0){
		return 1;
	}
	//Initialize and define three float fields, calculating the value of each one based on the entered radius.
	printf("Calculating...");
	float diameter=0;
	float circumference=0;
	float area=0;

	//Prints the calculated values of the circle with the entered radius in the following format.

	/**
	 * A circle with radius (radius):
	 *	Diameter: (diameter)
	 *	Circumference: (circumference)
	 *	Area: (area)
	 */
	printf("A circle with radius %0.3f: \n\t Diameter: %0.3f \n\t Circumference %0.3f \n\t Area: %0.3f", radius, diameter, circumference, area);

	return 0;
	//Ends program.
}

/**
 * calcDiameter() takes a single float (float r, which should be the user entered radius) and multiplies it by 2 to find and return the diameter as a float.
 */ 
float calcDiameter (float r){
	float d= r*2;
	return d;
}

/**
 * calcCircumference takes a single float (float d, which should be the diameter calculated from the radius in calcDiameter()) and multiplies it by PI (already define as a
 * preprocessor symbol) to find the circumference of a circle  and return it as a float value.
 */
float calcCircumference(float d){
	float c=d*PI;
	return c;
}

/**
 * calcArea takes a single float (float r, which should be the radius of the circle entered by the user) and squares it , then multiplies it by PI (defined as a preprocessor
 * symbol) to find the area of the circle. 
 */
float calcArea (float r){
	float rSquared= r*r;
	float a=rSquared*PI;
	return a;
}

