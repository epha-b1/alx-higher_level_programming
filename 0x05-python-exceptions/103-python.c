#include <Python.h>
#include <stdio.h>

/**
 * print_python_list - prints some basic info about Python lists
 * @p: pointer to a Python object
 */
void print_python_list(PyObject *p)
{
	Py_ssize_t size, i;
	PyListObject *list;

	if (!PyList_Check(p))
	{
		printf("[ERROR] Invalid List Object\n");
		return;
	}

	list = (PyListObject *)p;
	size = PyList_GET_SIZE(p);

	printf("[*] Python list info\n");
	printf("[*] Size of the Python List = %ld\n", size);
	printf("[*] Allocated = %ld\n", list->allocated);
	for (i = 0; i < size; i++)
	{
		PyObject *item = PyList_GET_ITEM(p, i);
		PyObject_Print(item, stdout, 0);
		printf("\n");
	}
}

/**
 * print_python_bytes - prints some basic info about Python bytes
 * @p: pointer to a Python object
 */
void print_python_bytes(PyObject *p)
{
	Py_ssize_t size, i;
	PyBytesObject *bytes;

	if (!PyBytes_Check(p))
	{
		printf("[ERROR] Invalid Bytes Object\n");
		return;
	}

	bytes = (PyBytesObject *)p;
	size = PyBytes_GET_SIZE(p);

	printf("[.] bytes object info\n");
	printf("  size: %ld\n", size);
	printf("  trying string: %s\n", bytes->ob_sval);
	printf("  first 10 bytes: ");
	for (i = 0; i < size && i < 10; i++)
		printf("%02x ", (unsigned char)bytes->ob_sval[i]);
	printf("\n");
}

/**
 * print_python_float - prints some basic info about Python float objects
 * @p: pointer to a Python object
 */
void print_python_float(PyObject *p)
{
	PyFloatObject *float_obj;

	if (!PyFloat_Check(p))
	{
		printf("[ERROR] Invalid Float Object\n");
		return;
	}

	float_obj = (PyFloatObject *)p;

	printf("[.] float object info\n");
	printf("  value: %f\n", PyFloat_AsDouble(p));
}

