def sum_el(l):
    total=0
    for  n in l:
        total+=n
    return total

num=[10,23,45,65,45,68,12] 
totalSum=sum_el(num)   

print("Total sum:",totalSum)