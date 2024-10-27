# Define the Student class
class Student:
    College_name="BSMRSTU"
    #default constructor
    def __init__(self):
        pass
    # Prameterized constructor
    def __init__(self, name, age, salary):
        # Initialize instance variables with values passed to the constructor
        self.name = name  #self.something is using for the different value of every object
        self.age = age
        self.salary = salary


s1 = Student("Prova", 23, 25000.00)

print(s1.name)
print(s1.age)
print(s1.salary)


s2 = Student("Rizvi", 24, 26000.00)

print(s2.name)
print(s2.age)
print(s2.salary)
print(Student.College_name)#common for everyone
