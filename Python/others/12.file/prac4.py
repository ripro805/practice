#search a word in line
def chck_line():
    with open("D:\\Apps & Software & Others\\Practice\\Python\\others\\12.file\\prac4.txt", "r") as f:
        line_no = 1
        while True:
            data = f.readline()
            if not data:
                break  # Break if there's no more data to read
            if "jan" in data:
                print(line_no)
                return
            line_no += 1

        print("Pattern not found")
        return -1

chck_line()
