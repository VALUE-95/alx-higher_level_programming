#include <Python.h>
#include <stdio.h>

/**
 * print_python_bytes - Print information about Python bytes objects
 * @p: Python object (bytes)
 */
void print_python_bytes(PyObject *p)
{
    PyBytesObject *bytes_obj;
    Py_ssize_t size, i;
    char *str;

    printf("[.] bytes object info\n");

    if (!PyBytes_Check(p))
    {
        printf("  [ERROR] Invalid Bytes Object\n");
        return;
    }

    bytes_obj = (PyBytesObject *)p;
    size = PyBytes_GET_SIZE(p);
    str = PyBytes_AS_STRING(p);

    printf("  size: %ld\n", size);
    printf("  trying string: %s\n", str);
    printf("  first 10 bytes:");

    for (i = 0; i < size && i < 10; ++i)
        printf(" %02x", (unsigned char)str[i]);

    printf("\n");
}

/**
 * print_python_list - Print information about Python lists
 * @p: Python object (list)
 */
void print_python_list(PyObject *p)
{
    PyListObject *list_obj;
    Py_ssize_t size, i;
    PyObject *item;

    printf("[*] Python list info\n");

    if (!PyList_Check(p))
    {
        printf("[ERROR] Invalid List Object\n");
        return;
    }

    list_obj = (PyListObject *)p;
    size = PyList_GET_SIZE(p);

    printf("[*] Size of the Python List = %ld\n", size);
    printf("[*] Allocated = %ld\n", list_obj->allocated);

    for (i = 0; i < size; ++i)
    {
        item = PyList_GET_ITEM(p, i);
        printf("Element %ld: %s\n", i, Py_TYPE(item)->tp_name);

        if (PyBytes_Check(item))
            print_python_bytes(item);
    }
}
