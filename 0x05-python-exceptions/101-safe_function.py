#!/usr/bin/python3
import sys


def safe_function(fct, *args):
    try:
        result = fct(*args)
        return result
    except Exception as e:
        print("Exception: {}".format(e), file=sys.stderr)
        return None


def my_div(a, b):
    return a / b


def print_list(my_list, length):
    i = 0
    while i < length:
        print(my_list[i])
        i += 1
    return length
