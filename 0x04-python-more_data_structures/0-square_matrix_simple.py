#!/usr/bin/python3
def square_matrix_simple(matrix=[]):
    result = []
    for num in matrix:
        row = list(map(lambda x: x ** 2, num))
        result.append(row)
    return result
