#methods are functions that belongs to objects
#creating class
class Student :
    def __init__(self, fullname):
        self.name=fullname
 
   
   #creating object method     
    def hello(self):
      print("hi",self.name)

s5=Student("Prova")
s5.hello()


#creating method for student name and marks    

class Student:
    def __init__(self,name,marks):
        self.name=name
        self.marks=marks
        
    def greet (self):
        print ("Welcome",self.name)
    def get_marks(self):
        return self.marks

s1=Student("Prova",float(97.5))
s2=Student("Rizvi", 96)
s1.greet()
print(s1.get_marks())
s2.greet()
print(s2.get_marks( )) 


#create student class that takes name and marks of 3 subject as arguments in constructor then create a method to print the average

class Stu:
    def __init__(self,name,marks):
        self.name=name
        self.marks=marks
        
    def get_avg (self):
        sum=0
        for mark in self.marks:
            sum+=mark
        print("Hi",self.name,"\nYour Average score is: ",sum/3)
            
s3=Stu("Prova",[98,97,92])
s4=Stu ("Rizvi",[91,98,94])

s3.get_avg()
s4.get_avg()           
            
                    
"""methods that don't use the self parameter (work at class)

class Student:
   @staticmethod  #decorator
   def college():
    print ("ABC College")
    
    
    
**DEcorator allows us to wrap another function in order to 
extend the behaviour of the wrapped function, without
permanently modifying it     
"""


    
"""create a class with 2 attributes
    balance and account no.
    create a method for debit credit
    and printing the balance
    """
    
class Account:
    def __init__(self,acc,bal):
        self.account=acc
        self.balance=bal
        
    def debit(self,amount):
            self.balance-=amount
            print("Bdt",amount,"was debited")
            print("Total Balance:",self.get_balance())  
    def credit(self,amount):
            self.balance+=amount
            print("Bdt",amount,"was credited")    
            print("Total Balance:",self.get_balance())
    def get_balance(self):
            return self.balance
        
        
ac1=Account(12345,100000)
ac1.debit(3000)
ac1.credit(500)
ac1.credit(4000)
ac1.debit(200)           