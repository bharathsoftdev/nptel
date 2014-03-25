/* Sum of Numbers

Level: Easy

Write a program that reads numbers which are in the range 0 to 100,  till it encounters -1. Print the sum of all the integers that you have read before you encountered -1

INPUT:

A sequence of integers separated by whitespace. There may be other integers following -1.

OUTPUT:

Sum of all integers in the sequence before you encounter -1. Any integer that is input after -1 in the sequence should be ignored.

CONSTRAINTS:

Atmost 10 integers will be given in the input. One of them is guaranteed to be a -1.
Inputs will be in the range 0 to 100 (both included). */

#include<stdio.h>

int main()
{

	int num , i , sum = 0 ;                             // Initailize variables

	for ( i = 0 ; i < 10 ; ++i )                        // 10 iterations
	{
		scanf ("%d", &num) ;                            // reads 10 integers
		if ( num == -1 )                                // checks if -1 has been encountered
			break ;                                     // exits for loop
		else if ( ( num <= 100 ) && ( num >= 0 ) )      // checks if the constraint is satisfied
			sum += num ;                                // adds the number to the sum
	}
	
	printf ( "%d", sum ) ;                              // prints the sum

	return 0;                                           // exits program
}
