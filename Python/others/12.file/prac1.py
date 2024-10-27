#write something
f=open("D:\\Apps & Software & Others\\Practice\\Python\\others\\12.file\\prac1.txt","w+")
f.write("hi jan! i love u a lot.\n i miss u a lot")
f.seek(0)
data=f.read()
print(data)

f.close()