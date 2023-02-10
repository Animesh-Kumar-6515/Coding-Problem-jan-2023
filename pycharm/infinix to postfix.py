
from queue import LifoQueue
stack=[]
str=""
ope="+-*/"
value=input("Enter any operation you want to convert to postfix expression :")


""" so basically we are trying to do is that we will create a stack in which we
 will add all the operator symbol and brackets
and then we will create  a string in which we will add all the operands 
we will perform all the operation according  to the check performed on the input string"""


def getSize(stack):
    return stack.size
def isEmpty(stack):
    return stack.size==0

for i in value:
    if(i=="("):
        stack.append(i)
    elif i in ope:
        stack.append(i)
    elif(i==")"):
        x=stack.get()

    else:
        str.join(i)
