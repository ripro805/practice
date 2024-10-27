
str= input()
rev_str = ""
indx = len(str) - 1
while indx >= 0:
    rev_str += str[indx]
    indx -= 1
print("Reversed string:", rev_str)
