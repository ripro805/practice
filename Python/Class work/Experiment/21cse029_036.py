
def find_max_min(l):
    if not l:  
        return None, None  
    max_val = min_val = l[0]   
    for n in l:
        if n > max_val:
            max_val = n
        elif n < min_val:
            min_val = n
    return max_val, min_val
num = [3, 8, 2, 5, 10]
max, min = find_max_min(num)
print("Maximum:", max)
print("Minimum:", min)
