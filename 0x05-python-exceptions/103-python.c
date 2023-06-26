/*
* File: 103-python.c
* Auth: Pealz
*/
#include <Python.h>
void print_python_list(PyObject *p);
void print_python_bytes(PyObject *p);
void print_python_float(PyObject *p);
/**
* print_python_list - Prints basic info about Python lists.
* @p: A PyObject list object.
*/
void print_python_list(PyObject *p)
{
Py_ssize_t size, alloc, i;
const char *type;
