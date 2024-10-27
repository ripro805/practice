def binary_search(sorted_list, target, low, high):
    if low > high:
        return -1

    
    mid = (low + high) // 2

    
    if sorted_list[mid] == target:
        return mid
    
    elif target < sorted_list[mid]:
        return binary_search(sorted_list, target, low, mid - 1)
    else:
        return binary_search(sorted_list, target, mid + 1, high)



sorted_list = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
target = int(input("Enter the target value to find: "))
result = binary_search(sorted_list, target,0,len(sorted_list))

if result != -1:
    print(f"The target value {target} is at index {result}.")
else:
    print(f"The target value {target} is not in the list.")
