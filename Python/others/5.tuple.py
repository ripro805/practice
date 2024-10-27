# tuple is a built in data type that lets us create an unchanged sequence of values
marks=(85, 56,89,75,64,100,56,89,75)
print(marks)
print(type(marks))
print(marks[0])

#marks[0]=67 we cannot change it like that

tup=() #empty tupple
print(tup)

tupp=(45,) #single value tupple
print(tupp)

print(marks[3:5]) #tupple slicing

print(marks.index(75)) #return index of first occurance
print(marks.count(75)) # count total occurence 


#COUNT the number of students with grade "A" in a tupple
student=("A","B","D","A","B","C","D","A","C","A","B","D","C","A")
print(student.count("A"))

#store the above values ina list and sort them from a to d
student=["A","B","D","A","B","C","D","A","C","A","B","D","C","A"]
student.sort()
print(student)