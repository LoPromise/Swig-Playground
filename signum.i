%module(directors="1") signum
%feature("director") ICallback;
%feature("nodirector") Example;


%{
   #include "signum.hpp"
%}

%typemap(python,in) PyObject *pyfunc {
  if (!PyCallable_Check($source)) {
      PyErr_SetString(PyExc_TypeError, "Need a callable object!");
      return NULL;
  }
  $target = $source;
}

%include "signum.hpp"
