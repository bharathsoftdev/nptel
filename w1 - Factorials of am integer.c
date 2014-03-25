/* Factors of an integer

Level: Medium

Write a program to print all the factors of a positive integer A.

INPUT:

A single integer A

OUTPUT:

Factors of the number A, in ascending order, separated by whitespace. 1 and A are also factors of A.

CONSTRAINTS:

2 <= A <= 10000 */

#include<stdio.h>

int main()
{
  
    int num = 1 , max ;						// initialize variables
    scanf ("%d",&max);						// read the number
    for ( num = 1 ; num < max ; ++ num )	// check all numbers from 1 to the number if they are factors
    {
    	if ( max%num == 0 )					// check if the number is a factor
    		printf ("%d ",num);				// print the factor
    }
    printf("%d",max);
    return 0;
}
