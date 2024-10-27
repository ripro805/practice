marks=[94.5,78,90,89,65.5,75]
print(marks) #list
print(type(marks)) #type
print(len(marks)) #length
print(marks[4]) #index

student=['Rizvi',94.5,'Kushtia'] #python can store different data types
print(student)                  
student[0]="Prova"#list can be changed but string cannot be changed
print(student) 

#list slicing is same as string slicing
marks=[85, 56,89,75,64,100,56]
print(marks[3:7])

#list method
marks.append(92) #add one element at the end
print(marks)

marks.sort() #sorts in accending order
print(marks)

marks.sort(reverse=True) #sorts in descending order
print(marks) 

marks.reverse() #reverse list
print(marks)

marks.insert( 3,96) #insert element at index
print(marks)

marks.remove(56) #remove the first occurance of the element
print(marks)

marks.pop(6) #remove element at index
print(marks)

#enter 3 name of movies and store them in a list

movies=[]
movies.append(input("enter the 1st movie:"))
movies.append(input("enter the 2nd movie:"))
movies.append(input("enter the 3rd movie:"))
print(movies)

#if a list contains palindrome of elements
list1=[1,2,3,2,1]
copy_list1=list1.copy()
copy_list1.reverse()

if (copy_list1==list1):
    print("It's a palindrome")
else:
    print("It's not a palindrome")

list2=['m','a','m',"r"]
copy_list2=list2.copy()
copy_list2.reverse()

if (copy_list2==list2):
    print("It's a palindrome")
else:
    print("It's not a palindrome")            