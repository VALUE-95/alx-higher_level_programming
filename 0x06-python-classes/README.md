# Python - Classes and Objects

This repository contains Python scripts that demonstrate the implementation of classes and objects in Python, specifically focusing on Object-Oriented Programming (OOP) concepts.

## Table of Contents

- [0. My first square](#0-my-first-square)
- [1. Square with size](#1-square-with-size)
- [2. Size validation](#2-size-validation)
- [3. Area of a square](#3-area-of-a-square)
- [4. Access and update private attribute](#4-access-and-update-private-attribute)
- [5. Printing a square](#5-printing-a-square)
- [6. Coordinates of a square](#6-coordinates-of-a-square)
- [7. Singly linked list](#7-singly-linked-list)
- [8. Print Square instance](#8-print-square-instance)
- [9. Compare 2 squares](#9-compare-2-squares)
- [10. ByteCode -> Python #5](#10-bytecode---python-5)

## General Requirements

- Allowed editors: vi, vim, emacs
- Interpreted/compiled on Ubuntu 20.04 LTS using Python3 (version 3.8.5)
- Code should use PEP8 style (checked with pycodestyle version 2.8.*)
- All files must be executable
- Length of files will be tested using `wc`
- Documentation required for modules, classes, and methods using Google Style Python Docstrings

## Tasks

### 0. My first square

Write an empty class `Square` that defines a square.

```python
class Square:
    pass
```

### 1. Square with size

Write a class `Square` that defines a square with a private instance attribute `size`.

```python
class Square:
    def __init__(self, size):
        self.__size = size
```

### 2. Size validation

Extend the `Square` class to include size validation.

```python
class Square:
    def __init__(self, size=0):
        self.__size = size
```

### 3. Area of a square

Add a public instance method `area` to the `Square` class that returns the current square area.

```python
class Square:
    def __init__(self, size=0):
        self.__size = size

    def area(self):
        return self.__size ** 2
```

### 4. Access and update private attribute

Modify the `Square` class to include a private instance attribute `size` with getter and setter methods.

```python
class Square:
    def __init__(self, size=0):
        self.__size = size

    @property
    def size(self):
        return self.__size

    @size.setter
    def size(self, value):
        if not isinstance(value, int):
            raise TypeError("size must be an integer")
        elif value < 0:
            raise ValueError("size must be >= 0")
        self.__size = value

    def area(self):
        return self.__size ** 2
```

### 5. Printing a square

Enhance the `Square` class to include a public instance method `my_print` that prints the square using the '#' character.

```python
class Square:
    def __init__(self, size=0):
        self.__size = size

    @property
    def size(self):
        return self.__size

    @size.setter
    def size(self, value):
        if not isinstance(value, int):
            raise TypeError("size must be an integer")
        elif value < 0:
            raise ValueError("size must be >= 0")
        self.__size = value

    def area(self):
        return self.__size ** 2

    def my_print(self):
        if self.__size == 0:
            print()
        else:
            for _ in range(self.__size):
                print("#" * self.__size)
```

### 6. Coordinates of a square

Extend the `Square` class to include a private instance attribute `position` representing the square's position.

```python
class Square:
    def __init__(self, size=0, position=(0, 0)):
        self.__size = size
        self.__position = position

    @property
    def size(self):
        return self.__size

    @size.setter
    def size(self, value):
        if not isinstance(value, int):
            raise TypeError("size must be an integer")
        elif value < 0:
            raise ValueError("size must be >= 0")
        self.__size = value

    @property
    def position(self):
        return self.__position

    @position.setter
    def position(self, value):
        if not isinstance(value, tuple) or len(value) != 2 \
                or not isinstance(value[0], int) or not isinstance(value[1], int) \
                or value[0] < 0 or value[1] < 0:
            raise TypeError("position must be a tuple of 2 positive integers")
        self.__position = value

    def area(self):
        return self.__size ** 2

    def my_print(self):
        if self.__size == 0:
            print()
        else:
            for _ in range(self.__position[1]):
                print()
            for _ in range(self.__size):
                print(" " * self.__position[0] + "#" * self.__size)
```

### 7. Singly linked list

Implement a singly linked list with a `Node` class and a `SinglyLinkedList` class.

```python
class Node:
    def __init__(self, data, next_node=None):
        self.data = data
        self.next_node = next_node

    @property
    def data(self):
        return self.__data

    @data.setter
    def data(self, value):
        if not isinstance(value, int):
            raise TypeError("data must be an integer")
        self.__data = value

    @property
    def next_node(self):
        return self.__next_node

    @next_node.setter
    def next_node(self, value):
        if value is not None and not isinstance(value, Node):
            raise TypeError("next_node must be a Node object")
        self.__next_node = value


class SinglyLinkedList:
    def __init__(self):
        self.head = None

    def sorted_insert(self, value):
        new_node = Node(value)
        if not self.head or value < self.head.data:
            new_node.next_node = self.head
            self.head = new_node
            return

        current = self.head
        while current.next_node and current.next_node.data < value:
            current = current.next_node

        new_node.next_node = current.next_node
        current.next_node = new_node

    def __str__(self):
        result = ""
        current = self.head
        while current:
            result += str(current.data) + "\n"
            current = current.next_node
        return result[:-1]  # Remove trailing newline for printing
```

### 8. Print Square instance

Extend the `Square` class to include a `__str__` method for better string representation.

```python
class Square:
    def __init__(self,

 size=0, position=(0, 0)):
        self.__size = size
        self.__position = position

    @property
    def size(self):
        return self.__size

    @size.setter
    def size(self, value):
        if not isinstance(value, int):
            raise TypeError("size must be an integer")
        elif value < 0:
            raise ValueError("size must be >= 0")
        self.__size = value

    @property
    def position(self):
        return self.__position

    @position.setter
    def position(self, value):
        if not isinstance(value, tuple) or len(value) != 2 \
                or not isinstance(value[0], int) or not isinstance(value[1], int) \
                or value[0] < 0 or value[1] < 0:
            raise TypeError("position must be a tuple of 2 positive integers")
        self.__position = value

    def area(self):
        return self.__size ** 2

    def my_print(self):
        if self.__size == 0:
            print()
        else:
            for _ in range(self.__position[1]):
                print()
            for _ in range(self.__size):
                print(" " * self.__position[0] + "#" * self.__size)

    def __str__(self):
        result = ""
        for _ in range(self.__position[1]):
            result += "\n"
        for _ in range(self.__size):
            result += " " * self.__position[0] + "#" * self.__size + "\n"
        return result[:-1]  # Remove trailing newline for printing
```

### 9. Compare 2 squares

Create a `Square` class with comparators based on square area.

```python
class Square:
    def __init__(self, size=0):
        self.size = size

    @property
    def size(self):
        return self.__size

    @size.setter
    def size(self, value):
        if not isinstance(value, (int, float)):
            raise TypeError("size must be a number")
        elif value < 0:
            raise ValueError("size must be >= 0")
        self.__size = value

    def area(self):
        return self.__size ** 2

    def __eq__(self, other):
        return self.area() == other.area()

    def __ne__(self, other):
        return self.area() != other.area()

    def __lt__(self, other):
        return self.area() < other.area()

    def __le__(self, other):
        return self.area() <= other.area()

    def __gt__(self, other):
        return self.area() > other.area()

    def __ge__(self, other):
        return self.area() >= other.area()
```

### 10. ByteCode -> Python #5

Create a `MagicClass` class that mirrors the given Python bytecode.

```python
#!/usr/bin/python3
import math


class MagicClass:
    def __init__(self, radius=0):
        self.__radius = 0
        if type(radius) is not int and type(radius) is not float:
            raise TypeError("radius must be a number")
        self.__radius = radius

    def area(self):
        return self.__radius ** 2 * math.pi

    def circumference(self):
        return 2 * math.pi * self.__radius
```

## How to Use

Clone the repository and run the Python scripts using a Python 3 interpreter.

```bash
git clone https://github.com/your-username/alx-higher_level_programming
cd alx-higher_level_programming/0x06-python-classes
python3 script_name.py
```

Replace `your-username` with your GitHub username and `script_name.py` with the name of the Python script you want to execute.

## Author

- Your Name
- GitHub: [your-username](https://github.com/your-username)

Feel free to include additional information or sections as needed.
