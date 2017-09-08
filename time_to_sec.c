/*
 * time_to_sec.c
 *
 *  Created on: Jul 20, 2016
 *      Author: leune
 *      Modified by: Ryan Barrett
 */

// appropriate #include statements
//Creates input and output streams.

#include <stdio.h>
//Define preprocessors for conversion values.
#define MINTOSEC 60
#define HOURTOSEC 3600

/* Convert a time interval specified in hours, minutes and seconds to
 * seconds.
 * Parameters:
 *     hours, minutes, seconds: input time elements
 * Preconditions:
 *     0 <= minutes < 60
 *     0 <= seconds < 60 
 * Return:
 *     number of seconds in the interval
 */

unsigned int time_to_sec(unsigned int hours, unsigned int minutes, unsigned int seconds) {
	/*
 	 * Convert hours and minutes to seconds value and add to seconds to
 	 * determine total number of seconds, then return sum.
	 */
	if((minutes < 0 || minutes > 60) && (seconds < 0 || seconds > 60)){
		printf("Entered time not within valid bounds.");
		return 0;
	}
	int time=hours*HOURTOSEC+minutes*MINTOSEC+seconds;
	return time;
}

/* Print a formatted representation of the calculation
 * Parameters:
 *     hours, minutes, seconds: input time elements
 * Postcondition:
 *     Function will write the calculation to standard output.
 */

void format_seconds(unsigned int hours, unsigned int minutes, unsigned int seconds) {
	printf("%u hours, %u minutes and %u seconds is equal to %u seconds.", hours, minutes, seconds, time_to_sec(hours, minutes, seconds);
}

int main(void) {
	format_seconds(4, 13, 20);
	format_seconds(8, 0, 0);
	format_seconds(1, 30, 0);
}
