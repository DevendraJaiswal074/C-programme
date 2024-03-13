// Strings are usually ordered in lexicographical order. That means they are ordered by comparing their leftmost different characters. For example, abc < abd because c < d. Also z >yyy because z >y. If one string is an exact prefix of the other it is lexicographically smaller, e.g., gh >ghij.

// Given an array of strings sorted in lexicographical order, print all of its permutations in strict lexicographical order. If two permutations look the same, only print one of them. See the ‘note’ below for an example.

// Complete the function next_permutation which generates the permutations in the described order.

// For example, s = [ab, bc, cd]. The six permutations in correct order are:

// ab bc cd
// ab cd bc
// bc ab cd
// bc cd ab
// cd ab bc
// cd bc ab

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(char **s, int i, int j)
{
    char * tmp = s[i];
    s[i] = s[j];
    s[j] = tmp;
}

void reverse(char **s, int start, int end)
{
    while(start<end)
    {
        swap(s,start++,end--);
    }
}

int next_permutation(int n, char **s)
{
    /**
    * Complete this method
    * Return 0 when there is no next permutation and 1 otherwise
    * Modify array s to its next permutation
    */
    for(int i=n-2;i>-1;i--)
    {
        if(strcmp(s[i+1],s[i])>0)
        {
            //get min max
            for(int j=n-1;j>i;j--)
            {
                if(strcmp(s[j],s[i])>0)
                {
                    //do swap
                    swap(s,i,j);
                    // do reverse
                    reverse(s,i+1,n-1);
                    return 1;
                }
            }
        }
    }
    return 0;
}