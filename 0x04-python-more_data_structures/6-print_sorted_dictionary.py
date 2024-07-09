#!/usr/bin/python3
def print_sorted_dictionary(a_dictionary):
    l_sort = list(a_dictionary.keys())
    l_sort.sort()
    for i in l_sort:
        print("{}: {}".format(i, a_dictionary.get(i)))
