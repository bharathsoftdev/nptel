/*
Print Elements of a Matrix in Spiral Order

Level: Medium Write a program that reads an MxN matrix A and prints its elements in spiral order. You should start from the element in the 0th row and 0th column in the matrix and proceed in a spiral order as shown below. 1→ 2→3→      4                          ↓ 5→ 6→ 7          8 ↑            ↓        ↓ 9   10←11       12 ↑                       ↓ 13←14←15←16
Output for the above matrix: 1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10

INPUT:

First line contains two integers M and N separated by whitespace. The next M lines contain elements of matrix A, starting with the topmost row. Within each row, the elements are given from left to right.

OUTPUT:

Elements of the matrix printed in a spiral order. All the elements should be separated by whitespace.

CONSTRAINTS:

1 <= M <= 5, 1 <= N <= 5. Elements in the matrix will be in the range [-100,100]
*/

#include<stdio.h>

int main()
{
/*write your code here*/

	int m , n ;
	
	scanf ( "%d", &m);
	scanf ( "%d", &n);
	
	int i, j ;
	
	int arr[m][n] ;
	
	for ( i = 0 ; i < m ; ++ i )
	{
		for ( j = 0 ; j < n ; ++j )
		{
			scanf ( "%d", &arr[i][j] );
		}
	}

	
	for ( i = 0 ; i < m ; ++i )
	{
		for ( j = 0 ; j < n ; ++j )
		{
			printf ( "%d", arr[i][j] );
		}
	}

    return 0;
}
