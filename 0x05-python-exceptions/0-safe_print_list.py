#!/usr/bin/python3

def safe_print_list(my_list=[], x=0):
    value = 0

    for element in my_list:
        if value < x:
            try:
                print(f"{element}", end='')
                value += 1
            except IndexError:
                break
    print()
    return value
