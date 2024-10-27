s = input("Enter the string: ")
flag = 0
i, j= 0, len(s)
while(i<j):
    if len(s)<3:
        break
    if s[i] != s[j]:
        flag =1
        break
    
if(flag==1):
    print("THe string is not palindrome.")
else:
    print("The string is palindrome.")