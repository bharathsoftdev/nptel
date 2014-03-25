/*
Maximum Sum of Rows, Columns and Diagonals

Write a program that reads an NxN square matrix M that calculates the sum of the elements in individual rows, individual columns and the two main diagonals. Among these sums, print the largest.

Consider the following matrix of order 3x3:

1 10 13

2 14 12

3 9 8

The row sum values are 1+10+13=24, 2+14+12=28 and 3+9+8=20. The column sum values are 1+2+3=6, 10+14+9=33 and 13+12+8=33. The diagonal sums are 1+14+8=23 and 13+14+3=30. The expected output is maximum among these sums, which is 33.

INPUT:

First line contains a value N representing the dimension of the input matrix M, followed by N lines, each line representing a row of the matrix. Within each row, N values are given and are separated by whitespace.

OUTPUT:

A value which is the maximum among  N row sums, N column sums and the two main diagonal sums in M.

CONSTRAINTS:

The entries in M are integers.

1<=N<=100

-100 <= Mij <= 100
*/

#include<stdio.h>
int main()
{
        int a[10][10],n,i,j;
        int p[20] = {0},sum = 0;
        int k=0, l=0; int c; int d1=0, d2=0;
        scanf("%d",&n);
        for(i=0; i<n; i++)
                for(j=0; j<n; j++)
                        scanf("%d",&a[i][j]);
        c=0;
        //calculating row suns:
        for(i=0; i<n; i++)
        {
                sum = 0;
                for(j=0; j<n; j++)
                {
                        sum = sum + a[i][j];
                }
                p[c] = sum;
                c++;
        }
        //calculating column sum:
        for(k=0; k<n; k++)
        {
                sum = 0;
                for(j=0; j<n; j++)
                {
                        sum = sum + a[j][k];
                }
                p[c] = sum;
                c++;
        }
        //diagonal sum
        for(l=0; l<n; l++)
                for(k=0; k<n; k++)
                        {
                                if(l == k)
                                {
                                        d1 = d1 + a[k][l];
                                }
                                if( (l+k) == (n-1))
                                {
                                        d2 = d2 + a[k][l];
                                }
                        }
        p[c] = d1; c++;
        p[c] = d2; c++;
        //sorting
        for(l=0; l<c; l++)
                for(k=0; k<c; k++)
                {
                        if(p[k] <= p[k+1])
                        {
                                i = p[k];
                                p[k] = p[k+1];
                                p[k+1] = i;
                        }
                }
        //printing
        printf("%d", p[0]);
        return 0;
}
