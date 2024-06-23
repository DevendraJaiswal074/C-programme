// There is a series,S, where the next term is the sum of pervious three terms. Given the first three terms of the series, a,b,c and  respectively, you have to output the nth term of the series using recursion.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// Complete the following function.

int find_nth_term(int n, int a, int b, int c)
{
    // Write your code here.
    if (n == 1)
    {
        return a;
    }
    else if (n == 2)
    {
        return b;
    }
    else if (n == 3)
    {
        return c;
    }
    else
    {
        return find_nth_term(n - 1, a, b, c) + find_nth_term(n - 2, a, b, c) + find_nth_term(n - 3, a, b, c);
    }
}

int main()
{
    int n, a, b, c;

    printf("Enter a number of nth terms:");
    scanf("%d", &n);
    printf("Enter value of a :");
    scanf("%d", &a);
    printf("Enter value of b:");
    scanf("%d", &b);
    printf("Enter value of c :");
    scanf("%d", &c);
    int ans = find_nth_term(n, a, b, c);

    printf(" the nth number are: %d", ans);
    return 0;
}