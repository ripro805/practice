def rev_list(l):
    lft = 0
    rt = len(l) - 1
    while lft < rt:
        l[lft], l[rt] = l[rt], l[lft]
        lft += 1
        rt -= 1
num = [3, 1, 4, 2, 5]

rev_list(num)

print("Reversed list:", num)
