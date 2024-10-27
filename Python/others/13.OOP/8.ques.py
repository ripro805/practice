"""Define a circle class to create a circle 
with radus r using the constructor .
define an area() method of the class which
calculates the area of the circle.
define an parameter() method of the class which
calculates the parameter of the circle."""


class Circle:
    def __init__(self,r):
        self.r=r
      
    def Area(self):
        self.area=3.1416*self.r*self.r
        print ("Area: ",self.area)
    
    def Parameter(self):
        self.parameter=2*3.1416*self.r
        print("Parameter:",self.parameter)

rad=Circle(5)
rad.Area()
rad.Parameter()

print("\n")

"""Definr a Employee class with attributes 
role,department,salary
this class also has a showdetails ()method
create an engineer class that inherits
properties from employee and has additional
attribute name and age"""   


class Employee:
    def __init__(self,role,dept,salary):
        self.role=role
        self.dept=dept
        self.salary=salary 
    
    def showDetails(self):
        print("Role:",self.role)
        print("Department:",self.dept)
        print("Salary:",self.salary)
        
class Engineer(Employee):
    def __init__(self,name,age):
        self.name=name
        self.age=age        
        super().__init__("Senior Officer","Cyber security",85000)
    
    def showDetails(self):
        print("Name:",self.name)
        print("Age:",self.age)
        super().showDetails()    
        
a1=Engineer("Ripro",26)              

a1.showDetails() 
    
print('\n')


"""Create a class called Order which stores
item and it's price.
Use Dunder function __gt__()to convey that:
 order1>order2 if price of orde1>price of order2"""
 

class Order:
    def __init__(self,item,price):
        self.item=item
        self.price=price
    
    def showDetails(self):
        print("Item:",self.item)
        print("Price:",self.price)             
    
    def __gt__(self,ordr2):
        return self.price>ordr2.price       
    
ordr1=Order("Chips",20)
ordr2=Order("Tea",6)
 
ordr1.showDetails()
ordr2.showDetails()
print(ordr1>ordr2)    