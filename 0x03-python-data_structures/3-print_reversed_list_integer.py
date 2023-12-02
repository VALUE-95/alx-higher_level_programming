#!/usr/bin/python3
def print_reversed_list_integer(my_list=[]):
    if not my_list:
        print("The list is empty.")
    else:
        for number in reversed(my_list):
            print("{:d}".format(number))