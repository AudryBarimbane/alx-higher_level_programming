#!/usr/bin/python3
if __name__ == "__main__":
    import sys
    sol = 0
    for n in sys.argv:
        if n != sys.argv[0]:
            sol += int(n)
    print(sol)
