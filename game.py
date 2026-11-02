"""
Write a python program to create a game where the user has to choose the same number as the
computer from 1 to 10.

"""

import random as r
import sys

while True:
    computer = r.choice([1,2,3,4,5,6,7,8,9,10])
    player = input("Enter any number from 1 to 10:  \n")
    print(f"Computer chose {computer}\nYou chose {player}\n")

    if int(computer)==int(player):
        print("You win!\n")
        sys.exit()
        
    else:
        print("You lose! Let's try again!\n")