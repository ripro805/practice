numbers = input().split()
numbers = [int(num) for num in numbers]
sum = 0
count = 0
maximum = float('-inf')
minimum = float('inf')
for num in numbers:
    sum += num
    count += 1
    if num > maximum:
        maximum = num
    if num < minimum:
        minimum = num
average = sum / count

print("Sum of the numbers:", sum)
print("Average of the numbers:", average)
print("Maximum value in the list:", maximum)
print("Minimum value in the list:", minimum)
