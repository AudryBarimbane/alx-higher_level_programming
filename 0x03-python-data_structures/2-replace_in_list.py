#!/usr/bin/python3
def replace_in_list(my_list, idx, element):
    if idx < 0:
        return (my_list)

    lengL = len(my_list)

    if idx > lengL - 1:
        return (my_list)

    my_list[idx] = element

    return (my_list)
