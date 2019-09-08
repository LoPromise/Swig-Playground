import signum

class Callback(signum.ICallback):
    def __init__(self, fnToCall):
        signum.ICallback.__init__(self)
        self.fnToCall = fnToCall
    def Call(self):
        self.fnToCall()

def TestFunction():
    print('Hello from a callback!')
def TestFunctionRetValue(x):
    print('Hello from a callback!')


a=signum.signum_calc(4)
print("signum.signum_calc(4) = "+str(a))
a=signum.signum_calc(-4)
print("signum.signum_calc(-4) = "+str(a))

i=signum.Register()
print("assign C++ Object to o o=signum.Register()"+str(4))
a=i.addEntry(4)
print("b=o.addEntry(0) = "+str(4))
a=i.addEntry(6)
print("b=o.addEntry(0) = "+str(6))
b=i.getEntry(0)
print("b=o.getEntry(0) = "+str(b))
b=i.getEntry(1)
print("b=o.getEntry(1) = "+str(b))

o=signum.Example()
callback = Callback(TestFunction)
print("set Callback")
o.GiveCallback(callback)
print("calling Callback")
o.CallCallback()
