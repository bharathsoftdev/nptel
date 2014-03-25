/*

Most Frequent Element in a Sequence

Level: Medium

Write a program to read a sequence of N integers and print the number that appears the maximum number of times in the sequence.

INPUT

Input contains two lines. First line in the input indicates N, the number of integers in the sequence. Second line contains N integers, separated by white space.

OUTPUT

Element with the maximum frequency. If two numbers have the same highest frequency, print the number that appears first in the sequence.

CONSTRAINTS

1 <= N <= 10000
The integers will be in the range [-100,100].
*/

#include<stdio.h>

int main()
{
/*write your code here*/

        int arr[1000];
        int num,i,j,temp,max,element = 999999999;
        scanf( "%d", &num );
        for( i=0; i<num; i++ )
        scanf( "%d", &arr[i] );
        max = 0;
        for(i=0;i<num;i++)
        {
                temp = 0;
                if(arr[i]==element)
                {
                        continue;
                }
                for(j=0; j<num; j++)
                {
                        if(arr[i]==arr[j])
                        {
                                temp++;
                        }
                }
                if(temp > max)
                {
                        max = temp;
                        element = arr[i];
                }
        }
        printf("%d",element);

    return 0;
}
