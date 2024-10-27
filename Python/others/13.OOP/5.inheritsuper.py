"""super method:
is used to access the 
methods of the parent class"""

class Car:
    color="black"
    def __init__(self,type):
        self.type=type
    @staticmethod
    def start():
        print("Car started..")
    @staticmethod
    def stop():
        print("Car stopped.")
        
class ToyotaCar(Car): 
    def __init__(self,name,type):
        super().__init__(type)
        self.name=name
        super().start()
        
        
c1=ToyotaCar("fortuner","disel")
print (c1.name)
print(c1.type) 
      