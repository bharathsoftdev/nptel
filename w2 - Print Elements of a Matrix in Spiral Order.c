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
	#include<stdio.h>

int main()
{

	int m, n, i, k = 0, l = 0;
	scanf ("%d%d",&m,&n);
	int mat[m][n];
	for ( k=0 ; k < m ; ++k )
	{
		for ( l=0 ; l < n ; ++l )
		{
			scanf (" %d",&mat[k][l]);
		}
	}
	printf ( "%d",mat[0][0]);
	 k = 0;
	 l = 0 ;
	while (k < m && l < n)
    	{
	        for (i = l; i < n; ++i)
	        {
	        	if (( k == 0 ) && ( i == 0 ))
	        		continue ;
	            printf(" %d", mat[k][i]);
	        }
	        k++;
	 
	        for (i = k; i < m; ++i)
	        {
	            printf(" %d", mat[i][n-1]);
	        }
	        n--;
	        if ( k < m)
	        {
	            for (i = n-1; i >= l; --i)
        	    {
	                printf(" %d", mat[m-1][i]);
	            }
        	    m--;
	        }
	        if (l < n)
	        {
	            for (i = m-1; i >= k; --i)
	            {
	                printf(" %d", mat[i][l]);
	            }
		    l++;   
        	}       
    	}
    	return 0;
}
    return 0;
}
