/**
 * temp.c (Assignment #3) is a program designed to convert temperatures
 * between Celsius, Kelvin, and Fahrenheit. 
 * CSC-270
 * made by Ryan Barrett
 */

//Set up the standard input and output streams.
#include <stdio.h>

/**
 * The below methods all serve to calculate the conversions between the 
 * temperatures, celsius, kelvin, and fahrenheit. All of the below methods
 * take a single float (the amount of degrees in the temperature being
 * converted from and return a single float (the converted value in degrees).
 * The original parameter is not altered via this method.
 */

/**
 * celsiusToKelvin() converts a temperature in celsius (the float c parameter)
 * to its equivalent value in kelvin and returns that equivalent value.
 * K=C+273.15
 */
float celsiusToKelvin(float c){
	float kel=c+273.15;
	return kel;
}

/**
 * kelvinToCelsius() converts a temperature in kelvin (the float k parameter)
 * to its equivalent value in celsius, and returns that equivalent value.
 * C=K-273.15
 */

float kelvinToCelsius(float k){
	float cel=k-273.15
	return cel;
}

/**
 * celsiusToFahrenheit() converts a celsius temperature (the float c parameter)
 * to its equivalent fahrenheit temperature, and returns that equivalent temperature.
 * F=(C*1.8)+32
 */
float celsiusToFahrenheit(float c){
	float fahr=(c*1.8)+32;
	return fahr;
}

/**
 * fahrenheitToCelsius() converts a fahrenheit temperature (the float f parameter)
 * to its equivalent value in celsius, then returns that equivalent value.
 * C=(F-32)/1.8
 */
float fahrenheitToCelsius(float f){
	float cel=(f-32)/1.8;
	return cel;
}

/**
 * kelvinToFahrenheit converts a value in kelvin to a value in 
 *fahrenheit by using the kelvinToCelsius() and celsiustoFahrenheit() method to convert from kelvin to celsius, and then celsius to fahrenheit. The value for fahrenheit is returned. 
 */
float kelvinToFahrenheit(float k){
	float cel=kelvinToCelsius(k); //Find the equivalent value of k in celsius.
	float fahr=celsiusToFahrenheit(cel); //Find the equivalent value of cel in fahrenheit (celsius to fahrenheit) and assign it to fahr. 
	return fahr;
}
/**
 * fahrenheitToKelvin converts a value in fahrenheit to a value in kelvin by utilizing the fahrenheitToCelsius() and celsiusToKelvin() methods, then returning the final kelvin value found  during conversion.
 */
float fahrenheitToKelvin(float f){
	float cel=fahrenheitToCelsius(f); // Get the equivalent value of in celsius.
	float kel=celsiusToKelvin(cel); //Get the equivalent value of f in kelvin.
	return kel; 
}


/**
 * The main method used here reads and inputted temperature from the user,
 * then displays the temperature and its equivalents in the other conversions.
 * Example
 * ./temp
 * Enter input temperature: 18c
 * 18.00 C converts to:
 *	 64.40 F
 *	 291.15 K
 * As shown  here, the user inputs a number and a character. which is then
 * read and defined as a temperature that can be converted. It is then
 * converted to the different temperatures.
 */
int main(void){
	//Define and initialize field values.
	//Values entered by the user.
	float enteredTemp=0;
	char enteredScale=' '; //Represent temperature scale (C, F, or K)
	//Used to store the converted values of the original temperature.
	float convertedTempA=0;
	float convertedTempB=0;

	//Read user input.
	printf("Enter input temperature: ");
	scanf("%f %c", &enteredTemp, &enteredScale); 

	printf("\n%0.2f %c converts to:\n", enteredTemp, enteredScale);

	//Check the scale/ If valid, make conversions and display them on the terminal.
	if(enteredScale='f'  || enteredScale='F'){
		convertedTempA=fahrenheitToCelsius(enteredTemp);
		convertedTempB=fahrenheitToKelvin(enteredTemp);
		printf("\t%0.2f C\n\t%0.2f K", convertedTempA, convertedTempB);
	}
	else if(enteredScale='c' || enteredScale='C'){
		convertedTempA=celsiusToFahrenheit(enteredTemp);
		convertedTempB=celsiusToKelvin(enteredTemp);
		printf("\t%0.2f F\n\t%0.2f K", convertedTempA, convertedTempB);
	}
	else if(enteredScale='k' || enteredScale='K'){
		convertedTempA=kelvinToFahnrenheit(enteredTemp);
		convertedTempB=kelvinToCelsius(enteredTemp);
		printf("\t%0.2f F\n\t%0.2f C", convertedTempA, convertedTempB);
	|
	else{
		printf("Error: Invalid temperature scale entered.");
		return 1;
	}
	return 0; //Once completed, return 0.
}
