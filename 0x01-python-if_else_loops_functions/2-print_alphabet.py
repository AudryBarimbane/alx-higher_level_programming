#!/usr/bin/python3
"""Print alphabet in lowercase"""

for l in range(ord('a'), ord('z') + 1):
    print("{:c}".format(l), end='')
