#include <Python.h>

static PyObject* set_flag(PyObject* self, PyObject* args) {
    int value;

    if(!PyArg_ParseTuple(args, "i", &value))
        return NULL;

    Py_BytesWarningFlag = value;
    return Py_None;
}

static PyMethodDef myMethods[] = {
    {
        "set_flag",
        set_flag,
        METH_VARARGS,
        "Set the BytesWarning flag",
    },
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef bytes_warning = {
    PyModuleDef_HEAD_INIT,
    "bytes_warning",
    "Bytes warning hack",
    -1,
    myMethods
};

PyMODINIT_FUNC PyInit_bytes_warning(void) {
    return PyModule_Create(&bytes_warning);
}
