#!/usr/bin/python3
for c1 in reversed(range(97, 123)):
    print("{:c}".format(c1 if (c1 % 2 == 0) else (c1 - 32)), end='')
