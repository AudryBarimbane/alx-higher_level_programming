#!/usr/bin/python3
def element_at(my_list, idx):
    if idx < 0:
        return (None)

    lenL = len(my_list)

    if idx > lenL - 1:
        return (None)

    return(my_list[idx])
