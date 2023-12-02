#!/usr/bin/python3
def add_tuple(tuple_a=(), tuple_b=()):
    # If a tuple is smaller than 2, use 0 for each missing integer
    a = (0, 0) if len(tuple_a) < 2 else tuple_a[:2]
    b = (0, 0) if len(tuple_b) < 2 else tuple_b[:2]

    return (a[0] + b[0], a[1] + b[1])
