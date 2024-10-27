def avg_of_el(l):
    if not l:  
        return 0  
    total = sum(l)
    return total / len(l)
num = [10, 26, 39, 46, 58]
avg= avg_of_el(num)
print("Average:", avg)
