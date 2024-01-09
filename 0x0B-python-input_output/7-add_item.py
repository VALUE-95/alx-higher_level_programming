#!/usr/bin/python3

"""Add all arguments to a Python list and save them to a file."""
import sys
import argparse
import json


def load_items(file_path):
    try:
        with open(file_path, 'r') as file:
            return json.load(file)
    except FileNotFoundError:
        return []


def save_items(items, file_path):
    with open(file_path, 'w') as file:
        json.dump(items, file)


def main():
    parser = argparse.ArgumentParser(description="Add\
            items to a Python list and save to a file.")
    parser.add_argument('items', nargs='*', help='Items to add to the list')
    args = parser.parse_args()

    file_path = "add_item.json"

    items = load_items(file_path)
    items.extend(args.items)
    save_items(items, file_path)


if __name__ == "__main__":
    main()
