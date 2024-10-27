#find a word
def chck_word():
    with open("D:\\Apps & Software & Others\\Practice\\Python\\others\\12.file\\prac1.txt","r") as f:
      data=f.read()

    word="jan"
    if (word in data):
      print("Found")
    else:
      print("Not Found")    
    print(data)


chck_word()
