#count the even number
with open("D:\\Apps & Software & Others\\Practice\\Python\\others\\12.file\\prac5.txt", "r") as f:
    data = f.read()
    #print(data)
count = 0
num = data.split(",")
for x in num:
    if (int(x) % 2 == 0):
        count += 1
print(count)
