# sets are items of unorder items
# set is changable but each element in sets are unchanged 
# we take boolean,float,int,string,tupple aas set but not list and dictionary because they are changable.

collection={1,2,2,3,2,3,4,"rizvi","ripro","prova"}
print(collection) #sets ignore duplicating
print(type(collection))
print(len(collection))#total number of items

col=set()#creating empty set
print(type(col))

#set method
collection.add("Baby") #add new element
print(collection)

collection.remove(4) # remove element
print(collection)
print(collection.pop()) #remove a random value 
print(collection.pop())
print(collection.pop())
print(collection.pop())
print(collection.pop())
collection.clear() #empties the set
print(collection)

#union and intersection
set1={1,2,3,4,5,6,7}
set2={4,5,6,7,8,9,10}
print(set1.union(set2))
print(set1.intersection(set2))
#it never change the real value of set1 and set2


"""you are given a list of subjects for students.
asume one classroom is required for 1 subject .
how many classrooms are needed by all students.

"python","java","c++","python","javascript","java","python",
"java","c++","c"
"""

set3={"python","java","c++","python","javascript","java","python","java","c++","c"}
print(set3)
print(len(set3))



""" figure out a way to store 9 & 9.0
AS separate values in the set.(you can take
help of built in data type)
"""
#1

value={9,'9.0'}
print(value)

#2
values={
    ("float",9.0),
    ("int",9)
}
print(values)
