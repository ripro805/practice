year=int(input())
if year%4==0 and year%100!=0 or year%400==0:
    print("It's a leapyear")
else:
    print("It's not a leapyear")    