Swig-Playground
This is a Test Project for swig wrapping of c++ code

<code>swig -c++ -python signum.i</code>

<code>g++ -c -fpic signum_wrap.cxx signum.cpp -I/usr/include/python2.7</code>

<code>g++ -shared signum.o signum_wrap.o -o _signum.so</code>
