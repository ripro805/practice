s = input("Enter the desired password.: ")
while True:
    upper,lower,digit=0,0,0
    for ch in s:
        if ch>='a' and ch<= 'z':
            lower=1
        elif ch>='A' and ch<= 'Z':
            upper=1
        if ch>='0' and ch<= '9':
            digit = 1
    n = len(s)
    if n>=8 and upper == 1 and lower ==1 and digit ==1:
        print(f"{s} is a Valid password.")
        break
    else :
        print("The password you have entered is not a valid password. ")
        s = input("Enter the valid password.: ")
    