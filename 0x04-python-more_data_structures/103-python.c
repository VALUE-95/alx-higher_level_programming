#include <Python.h>

void print_python_bytes(PyObject *p) 
{
	printf("[.] bytes object info\n");

	if (!PyBytes_Check(p)) 
	{
		printf("  [ERROR] Invalid Bytes Object\n");
		return;
	}

	Py_ssize_t size = PyObject_Size(p);
	char *str = PyBytes_AsString(p);

	printf("  size: %ld\n", size);
	printf("  trying string: %s\n", str);

	printf("  first 10 bytes: ");
	for (Py_ssize_t i = 0; i < size && i < 10; ++i) 
	{
		printf("%02x ", (unsigned char)str[i]);
	}
	printf("\n");
}

void print_python_list(PyObject *p) 
{
	printf("[*] Python list info\n");

	Py_ssize_t size = PyList_Size(p);
	Py_ssize_t allocated = ((PyListObject *)p)->allocated;

	printf("[*] Size of the Python List = %ld\n", size);
	printf("[*] Allocated = %ld\n", allocated);

	for (Py_ssize_t i = 0; i < size; ++i) 
	{
		PyObject *element = PyList_GetItem(p, i);
		printf("Element %ld: ", i);

		if (PyBytes_Check(element)) 
		{
			print_python_bytes(element);
		} 
		else if (PyLong_Check(element)) 
		{
			printf("int\n");
		} 
		else if (PyFloat_Check(element)) 
		{
			printf("float\n");
		} 
		else if (PyTuple_Check(element)) 
		{
			printf("tuple\n");
		} 
		else if (PyList_Check(element)) 
		{
			printf("list\n");
		} 
		else if (PyUnicode_Check(element)) 
		{
			printf("str\n");
		} 
		else 
		{
			printf("unknown\n");
		}
	}
}
