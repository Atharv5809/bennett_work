# Every prime number greater than 3 is found to be either +1 or -1 to a multiple of 6
# 5,7,11,13,17....

import sys
import math

print("Enter any number for prime check:\nEnter negative integer to end the program")

while True:

    n = int(input())

    if n < 0:
        sys.exit()

    elif n == 0 or n == 1:
            print("The given number is neither a prime nor a composite number\n")

    elif n == 2 or n == 3:
        print("The given number is a prime number\n")

    elif n % 2 == 0 or n % 3 == 0:
        print("The given number is not a prime number\n")

    else:
        limit = math.isqrt(n)
        i = 5
        while i <= limit:
            if n % i == 0 or n % (i + 2) == 0:
                print("The given number is not a prime number\n")
                break
            i += 6
        else:
            print("The given number is a prime number\n")