s = input("Enter the string. ")
count = 0
for i in s:
    if i!='a' and i != 'e' and i != 'i' and i != 'o' and i != 'u':
        continue
    count+=1
print(f"The string {s} have {count} vowel(s). ")