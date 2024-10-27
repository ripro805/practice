"""Operator Overloading-->
    when the same operator is allowd to have different meaning according to the context"""
    
"""Operator and dunder function:
a+b    a.__add__(b)
a-b    a.__sub__(b)
a*b    a.__mul____(b)
a/b    a.__truediv____(b)
a%b    a.__mod____(b)
"""

#make a complex class and add 2 numbers

class Complex:
    def __init__(self,real,img):
        self.real=real
        self.img=img
    
    def showNumber(self):
        print(self.real,"i+",self.img,"j")
   
    """def add(self,num2):
        newReal=self.real+num2.real
        newImg=self.img+num2.img
        return Complex(newReal,newImg)
        Instead of it we can use dunder function like -->>
        """
    def __add__(self,num2):
        newReal=self.real+num2.real
        newImg=self.img+num2.img
        return Complex(newReal,newImg)  
    
      
    def __sub__(self,num2):
        newReal=self.real-num2.real
        newImg=self.img-num2.img
        return Complex(newReal,newImg)    

num1=Complex(1,2)
num1.showNumber()

num2=Complex(4,5)
num2.showNumber()

"""num3=num1.add(num2)
num3.showNumber()
for dunder function 
we can write  """

num3=num1+num2
num3.showNumber()

num4=num1-num2
num4.showNumber()
      
            