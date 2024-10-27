nested_list = [
    [(1, 2), (3, 4)],
    [(5, 6), (7, 8), (9, 10)],
    [(11, 12)]
]

x_cor=[]
y_cor=[]

for subl in nested_list:
    for(x,y) in subl:
        x_cor.append(x)
        y_cor.append(y)

print(x_cor)
print(y_cor)        