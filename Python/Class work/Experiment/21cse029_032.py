def in_mat(r,c):
    mat=[]
    for i in range(r):
        row=[]
        for j in range(c):
           el=int(input(f"Enter element at position ({i+1},{j+1}): "))
           row.append(el)
        mat.append(row)
        
    return mat
def print_mat(mat):
    for row in mat:
        print(row)

def multi_mat(mat1,mat2):
    res=[[0 for _ in range (len (mat2[0]))] for _ in range(len(mat1))]
    for i in range(len(mat1)):
        for j in range (len(mat2[0])):
            for k in range (len(mat2)):
                res[i][j]+=mat1[i]+[k]*mat2[k][j]
    
    return res

r1 = int(input())
c1 = int(input())

r2 = int(input())
c2 = int(input())

if c1!=r2:
    print("matrix cannot be multiplied")
else:
    mat1=in_mat(r1,c1)
    mat2=in_mat(r2,c2)
    
    res_mat=multi_mat(mat1,mat2)
    
    print_mat(res_mat)                    
                    
        