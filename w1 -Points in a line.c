/* Points in a line

Level: Medium

Given three points (x1, y1), (x2, y2) and (x3, y3) , write a program to check if all the three points fall on one straight line.

INPUT:

Six integers x1, y1, x2, y2, x3, y3 separated by whitespace.

OUTPUT:

Print “Yes” if all the points fall on straight line, “No” otherwise.

CONSTRAINTS:
-1000 <= x1, y1, x2, y2, x3, y3 <= 1000  */

#include<stdio.h>

int main()
{
   
   int x1,x2,x3,y1,y2,y3 ;							// variables to store the x,y coordinates of three points
   
   scanf ("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);	// reads the x,y coordinates of three points
   
   float m ;										// stores the slope of line connecting first two points

	if ( ( x1 == x2 ) && ( x2 == x3 ))				// checks if line is vertical
	{
		printf ("Yes");
		return 0 ;
	}
	
   m = (y2-y1)/(x2-x1);								// calculates the slope of line
   
   if  ( (x3 * m) == y3 )							// check if point three satisfies the slope of the line
   	printf ("Yes");
   else 
   	printf ("No");
   
   return 0;
}
