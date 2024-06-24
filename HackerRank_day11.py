# We define an hourglass in A to be a subset of values with indices falling in this pattern in A‘s graphical representation:

#!/bin/python3

import math
import os
import random
import re
import sys



if __name__ == '__main__':

    
    array = []

for _ in range(6):
    dam = [int(x) for x in str(input()).split(" ")]
    array.append(dam)

max = -9*7

for a in range(6):
    for b in range(6):
        if b + 2 < 6 and a + 2 < 6:
            final = array[a][b] + array[a][b + 1] + array[a][b + 2] + array[a + 1][b + 1] + array[a + 2][b] + array[a + 2][b + 1] +array[a + 2][b + 2]
            if final > max:
                max = final

print(max)

