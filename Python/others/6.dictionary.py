info= {
    "key" :"value",
    "name" : "Prova",
    "learning":"Digital marketing",
    "Subjects":["python","java","c"],
    "topics":("dict","set"),
    "age":22,
    "is adult":True,
    "marks":96.5
    
}
print(info)
print(type(info))

#accessing value
print(info["name"])
print(info["age"])
print(info["marks"])
print(info["topics"])

#changing value or adding new key
info["name"]="Rizvi"
info["surname"]="Ripro"
print(info)  

#creating null dict
null_dict={}
#print(null_dict)
null_dict["name"]="Ripro" #adding value at null dict
print(null_dict)

#nested dictionary
student={
    "name":"Prova",
    "subject":{
        "phy":93,
        "chem":96.5,
        "math":94
    }
}
print(student)
print(student["subject"])
print(student["subject"]["math"])

#dictionary method
print(student.keys()) #return all key
print(list(student.keys())) #type cast
print(len(list(student.keys())))#find length
print(student.values())#return all values
print(student.items()) #return all key and values as tupple
print(student.get("name")) #return all key according to the value
"""if we type print (student("subject")) 
                or
print (student.get("subject"))

both of them give the same value 
               but
if we take unknown thing 1st one give error and the
rest of the code will not  work but the 2nd one give None
and the rest of the code will work               

"""
new_dict={"age":"22","city":"Kushtia"}
student.update(new_dict) # insert some item in dict
print(student)


"""store following word meaning in a python dictonary:
table:"a piece of furniture","list od fact & figure"
cat :"a small animal"
"""

dicto={
"table":("a piece of furniture","list od fact & figure"),
# as there are mutiple value so we take it as tupple or list
"cat":"a small animal"
}
print (dicto)



"""enter marks of 3 subjects from the user and store them
in a dictionary.start with an empty dictionary& add one by one
use subject name as key & marks as value
"""

dictor={}
x=int(input("enter the marks of english: "))
dictor.update({"english":x})
x=int(input("enter the marks of physics: "))
dictor.update({"physics":x})
x=int(input("enter the marks of math : "))
dictor.update({"math":x})
print (dictor)