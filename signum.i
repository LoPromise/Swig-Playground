%module(directors="1") signum
%feature("director") ICallback;
%feature("nodirector") Example;


%{
   #include "signum.hpp"
%}


%include "signum.hpp"
