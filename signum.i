%module signum
%{
    /* Every thing in this file is being copied in
     wrapper file. We include the C header file necessary
     to compile the interface */
	#include "signum.hpp"

%}
%include "signum.hpp"
/* explicitly list functions and variables to be interfaced */
//int signum(int n);
/* or if we want to interface all functions then we can simply
   include header file like this -
   %include "signum.hpp"
*/
