#!/usr/bin/python3
def best_score(a_dictionary):
    max = 0
    if not bool(a_dictionary):
        return None
    for key, value in a_dictionary.items():
        if value > max:
            max = value
            max_key = key
    return max_key
