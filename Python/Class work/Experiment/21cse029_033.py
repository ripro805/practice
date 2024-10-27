for i in range (8):
    for j in range(8):
        if(i+j)%2==0:
            print("x",end=" ")
        else:
            print("O",end=" ")
    
    print()
    
for i in range(1,6):
    for j in range(i):
        print(i,end=" ")
    print()                    