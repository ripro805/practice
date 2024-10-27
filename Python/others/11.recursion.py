#print n to 1 
def show(n):
    if (n==0):
        return
    print(n)
    show(n-1)  
    
show(50)    


#factorial
def fact(n):
    if(n==0 or n==1):
        return 1
    else:
        return (n*fact(n-1))


print(fact(3))

#print the sum of n natural number
def calc_sum(n):
    if(n==0):
      return 0
    print(n)
    return calc_sum(n-1)+n
    
    
    
sum=calc_sum(5)
print(sum)                  



#print all elements in a list
def print_list(list, indx):
    if(indx==len(list)):
        return
    print (list[indx])
    print_list(list,indx+1)
    
l=["a","b","c","d","e"]
print_list(l,0)    