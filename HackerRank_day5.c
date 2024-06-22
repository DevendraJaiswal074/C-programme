// Given an integer, n, print its first 10 multiples. Each multiple n x i (where 1 <= i <= 10) should be printed on a new line in the form: n x i = result.

// C
#include <stdio.h>
int main()
{
    int n;
    printf("ENTER A NUMBER");
    scanf("%d",&n);
    for (int i = 1; i < 11; i++)
    {
        printf("%d","*","%d","=","%d\n", n, i , n * i);
    }
    return 0;
}

// PYTHON
#!/bin/python3
import math
import os
import random
import re
import sys

if __name__ == '__main__':
    n = int(input())
    for i in range ( 1, 11 ):
        print ( n, "x", i, "=", n*i)