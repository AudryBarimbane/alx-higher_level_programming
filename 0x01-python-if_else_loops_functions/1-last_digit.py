#!/usr/bin/python3
import random
number = random.randint(-10000, 10000)

digitl = abs(number) % 10
if number < 0:
    digitl = -digitl
print(f"Last digit of {number:d} is {digitl:d} and is ", end="")
if digitl > 5:
    print("greater than 5")
elif digitl == 0:
    print("0")
else:
    print("less than 6 and not 0")
