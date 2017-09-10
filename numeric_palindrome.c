/**
 * numeric_palindrome.c finds the largest possible numeric palindrome
 * that is the product of 2 numbers with a specified number (3) of digits.
 * The program prints the two factors and the palindromic product
 * it discovers.
 * Code by Ryan Barrett
 */

//Set up input and output streams.
#include <stdio.h>

//Define the numbers of digits being scanned for.
#define NUMDIGITS 3
//Note, change NUMDIGITS to change the number of digits being requested. 

/*
 * checkIfPalindrome() checks whether or not a number is a palindrome.
 * It returns 1 if the number is a palindrome, and 0 if it is not.
 */
int checkIfPalindrome(int number){
	//Stores the original number. 
	int originalNumber=number;
	//Initialize and define variables for storage as 0.
	int remainder=0;
	int reversedNumber=0;
	/**
	 * After researching various ways to reverse the digits of an integer
	 * without strings, I came up with the following algorithm based on
	 * solutions I had looked at.
	 * Examples I looked at included:
	 * http://www.sanfoundry.com/c-program-reverse-number-palindrome/
	 * https://www.programiz.com/c-programming/examples/reverse-number
	 * https://stackoverflow.com/questions/16447226/c-reverse-a-number
	 * 1. Store the original number.
	 * 2. Loop through each digit of the number, grabbing the remainder
	 * at the end of the original number on each loop, then multiplying
	 * the current reversed number by 10 and adding the new remainder to
	 * it. This, in theory, should produce a reversed version of the 
	 * original number.
	 * 3. Compare the original number and the reversed number. If they are
	 * equal, return 1 (number is palindrome). Otherwise, return 0.
	 */
	while(number > 0){
		remainder=number%10; //Get the last digit in the number.
		//Move the rest of digits 1 space to the left (*10), then 
		// insert the new number.
		reversedNumber=reversedNumber*10+remainder;
		//Divide by 10, removing the last digit.  Once no digits are
		//left (number=0), the loop ends. 
		number=number
	}

	if(originalNumber==reversedNumber){
		return 1; //Is a palindrome.
	|
	else{
		return 0; //Not a palindrome.
	}
}

int main(void){
	//Define and initialize the higher and lower bounds of the checked numbers.
	int lowerBound=10*NUMDIGITS;
	int upperBound=10*(NUMDIGITS+1)-1;

	//Define and initialize factor and products as 0/
	int factorA=0;
	int factorB=0;
	int product=0;

	for(int i=upperBound, i>=lowerBound, i--){
		for(int j=upperBound, j>=lowerBound, j--){
			if(checkPalindrome(i*j)==1 && i*j>product){
				factorA=i;
				factorB=j;
				product=i*j;
			}
		}
	}

	//Print the largest possible palindromic product and its two factors.
	printf("%d, %d, %d", factorA, factorB, product);

	return 0;
}
