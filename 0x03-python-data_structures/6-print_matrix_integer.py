#!/usr/bin/python3
def print_matrix_integer(matrix=[[]]):
    if not matrix:
        print("Matrix is empty")
    else:
        for row in matrix:
            for number in row:
                print("{:d}".format(number), end=" ")
            print()