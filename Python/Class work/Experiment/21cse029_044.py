
def add_mat(m1, m2):
  
    if len(m1) != len(m2) or len(m1[0]) != len(m2[0]):
        return None

    res = [[0 for _ in range(len(m1[0]))] for _ in range(len(m1))]

    for i in range(len(m1)):
        for j in range(len(m1[0])):
            res[i][j] = m1[i][j] + m2[i][j]

    return res

m1 =      [[1, 2, 3],
           [4, 5, 6],
           [7, 8, 9]]

m2 =      [[9, 8, 7],
           [6, 5, 4],
           [3, 2, 1]]

res_mat = add_mat(m1, m2)

if res_mat:
    for r in res_mat:
        print(r)
