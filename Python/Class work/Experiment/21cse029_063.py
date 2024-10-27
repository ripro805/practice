def trans_mat (mat):
    transd_mat=[[mat[j][i] for j in range(len (mat))]for i in range (len (mat[0]))]
    return transd_mat

mat = [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9]
]

transd_mat=trans_mat(mat)

print ("Orginal mat:")
for r in mat:
    print (r)
    
print("\n\n Transposed Mat:")
for r in transd_mat:
    print(r)    