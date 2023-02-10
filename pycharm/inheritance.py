class A:
    def function1(self):
        print("function 1 is working")
    def function2(self):
        print("function 2 is working")
class B(A):
    def function3(self):
        print("function 3 is working")
    def function4(self):
        print("function 4 is working")
a1=A()
a1.function1()
a1.function2()

b1=B()
B.