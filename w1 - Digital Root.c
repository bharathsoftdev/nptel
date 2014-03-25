/*Digital Root

Level: Easy
The digital root (also called repeated digital sum) of a number is a single digit value obtained by an iterative process of summing digits. Digital sum of 65536 is 7, because 6+5+5+3+6=25 and  2+5 = 7. Write a program that takes an integer as input and prints its digital root.

INPUT:

A single integer N

OUTPUT:

Digital root of the number N.

CONSTRAINTS:

1 <= N <= 10^7 */

#include<stdio.h>

int main() {

	long int num ;					// stores the number
	
	int sum,temp ;					// additional variables
	
	scanf ("%ld",&num);				// reads the number
	
	loop:							// jump point
	sum = 0 ;						// initialize sum to zero
	while ( num != 0 )				// till number becomes zero the loop is executed
	{
	
		temp = num % 10 ;			// save the right most digit of num in temp
		sum += temp ;				// add temp to sum
		num /= 10 ;					// remove the right most digit of num
	
	}

	if ( sum > 9 )					// if sum is not a single digit value then
	{
		num = sum ;					// repeat the above procedure with the sum as the new number
		goto loop;
	}
	
	printf ("%d",sum);				// print final sum of the number
	
   return 0;
}

