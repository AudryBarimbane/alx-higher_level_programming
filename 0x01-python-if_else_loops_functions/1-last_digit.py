#!/usr/bin/python3
import random
number = random.randint(-10000, 10000)
if number >= 0:
    digitl = number % 10
else:
    digitl = number % -10

print(f"Last digit of {number:d} is {digitl:d} and is ", end="")

if digitl > 5:
    print(" and is greater than 5")
elif digitl == 0:
    print(" and is 0")
else:
    print(" and is less than 6 and not 0")
