"""A class method is bound to the class
and receives the class as an implicit first argument
static method can't access or modify class state and generally for utility

class Student:
@classmethod
def college (cls):
    pass"""
    
class Person:
    name="anonymous"
    
    @classmethod
    def changeName(cls,name):
        cls.name=name
        
p1=Person()
p1.changeName("Ripro")
print(p1.name)
print (Person.name)            
    