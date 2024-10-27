import random
import string

"""val1=string.ascii_letters
val2=string.digits
val3=string.punctuation
print (val1)
print (val2)
print (val3)"""

password_len=16
charVal=string.ascii_letters+string.digits+string.punctuation
password=""
for i in range(password_len):
    password+=random.choice(charVal)
    
"""by using list comprehension [function for i in range ]

password="".join([random.choice(charVal) for i in range(password_len)])"""    
    
print ("Your Password is : ",password)    