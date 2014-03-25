/*
Substrings

Write a program that takes two input strings S1 and S2 and finds if S2 is a substring of S1 or not. If S2 is a substring of S1, the program should print the index at S1 at which there is a match. If S2 is not a substring of S1, the program should print -1. If S2 appears in S1 multiple times, print the first index in S1 at which the match occurred.

INPUT:

Two strings S1 and S2, separated by whitespace.

OUTPUT:

One integer, which is either the index at which the match occurred or -1. Remember, the indices start at 0 for arrays.

CONSTRAINTS:

Each string contains at most 19 characters.
The strings will contain only letters from the alphabet (a-z and A-Z).
Match has to be case-sensitive.
*/

#include<stdio.h>
#include<string.h>
int main()
{
        char str[100], search[100];
        int i,j,count1 =0, count2 = 0;
        int flag; int pos = 0, k = 0, n = 0;
        gets(str);
        n = strlen(str);
        for(i=0; i<n; i++)
        {
                if(str[i] != ' ')
                        continue;
                else
                {
                        pos = i;
                        break;
                }
        }
        i++;
        for(j=i; j<n; j++)
        {
                search[k] = str[j];
                k++;
        }
        search[k] = '\0';
        str[i] = '\0';
        count1 = strlen(str);
        count2 = strlen(search);

    for (i = 0; i <= count1 - count2; i++)
    {
        pos = i;
        for (j = i; j < i + count2; j++)
        {
            flag = 1;
            if (str[j] != search[j - i])
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
            break;
    }
    if (flag == 1)
        printf("%d",pos);
    else
        printf("-1");

        return 0;
}
