#right angle triangle

r=int(input())
for i in range(1,r+1):
    for j in range(1,i+1):
        print("*",end=" ")
    print()

#Inverted Right-angled Triangle:
rows = int(input())
for i in range(rows, 0, -1):
    for j in range(1, i + 1):
        print("*", end=" ")
    print()

#Pyramid:    
row = int(input())
for i in range(1, row + 1):
    for j in range(1, row - i + 1):
        print(" ", end=" ")
    for j in range(1, 2*i):
        print("*", end=" ")
    print()
    