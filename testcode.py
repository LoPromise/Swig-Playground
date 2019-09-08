import signum

def callback_python():
 print("callback from c to python")

a=signum.signum_calc(4)
print("signum.signum_calc(4) = "+str(a))
a=signum.signum_calc(-4)
print("signum.signum_calc(-4) = "+str(a))

o=signum.Register()
print("assign C++ Object to o o=signum.Register()"+str(4))
a=o.addEntry(4)
print("b=o.addEntry(0) = "+str(4))
a=o.addEntry(6)
print("b=o.addEntry(0) = "+str(6))
b=o.getEntry(0)
print("b=o.getEntry(0) = "+str(b))
b=o.getEntry(1)
print("b=o.getEntry(1) = "+str(b))
a=signum.global_callback(callback_python)
