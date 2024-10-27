#string
str1="This is a String"
str2='This is a string'
str3="""This is a string"""
str4="This is it's color"


str5="this is a string .we are creating it in python" #together
print(str5)
str6="this is a string.\nwe are creating it in python"#nextline
print(str6)
str7="this is a string.\twe are creating it in python"#tab
print(str7)

#string add
str8="Ri"
str9="Pro"
final_str=str8+" "+str9
print(str8+str9)
print(final_str)
print(len(str5)) #string length
print(str7[6]) # string indexing

#string slicing= Accesing part of string
print(str7[2:10])
print(str7[:9])#starting from 0
print(str7[8:])#to last index
print(str7[8:len(str7)])#to last index
print(str7[-14:-10])#backward slicing

#string Function
str10="I love u Prova"
print(str10.endswith("va")) #str.endswith()=is a built in function that return true if sting ends with substr
print(str10.endswith("ve"))
str11='i love u Prova'
print(str11.capitalize()) #capitalize the first letter
print(str11.replace("Prova","Sadia")) #replace any letter or substring
print(str11.find("love"))#search any word or letter
print(str11.count("Prova"))#how many time a word or a letter is used

#input user name and print its length
str12=input("Enter your name: ")
print(len(str12))

#find the occurance of'&' in a string
str13="me & Prova loves each other"
print(str13.find("&"))
