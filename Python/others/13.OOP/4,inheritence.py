class Account:
    def __init__(self,acc,pas):
        self.account=acc
        self.__password=pas
        
        
"""ac1=Account("12345","abwd2")
print(ac1.account)
print(ac1.__password)    """    #to make an attribute private we use __




class Car:
    color="black"
    @staticmethod
    def start():
        print("Car started..")
    @staticmethod
    def stop():
        print("Car stopped.")
        
class ToyotaCar(Car): #take inherited
    def __init__(self,name):
        self.name=name
        
class Fortuner(ToyotaCar):
    def __init__(self,typ):
        self.type= typ       

car1=ToyotaCar("fortuner")
car2=ToyotaCar("prius")
car3=Fortuner("dissel")

print (car1.name ) 
print (car1.start())  #single inheritence            
print(car1.color)
car3.start()    #multilevel inheritence   




class A:
    varA="Welcome to A"
    
class B:
    varB="Welcome to B"

class C(A,B): #multiple inheritence        
      VarC="Welcome to c"
      
c1=C()

print(c1.varA)
print(c1.varB)      
print(c1.VarC)