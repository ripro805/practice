def difference(a, b):

  difference = a.difference(b)
  
  if not difference:
    print("No elements found ")
  else:
    print("Elements in set A but not in set B:")
    for elmnt in difference:
      print(elmnt)

se1 = {1, 2, 3, 4}
set2 = {2, 4, 5, 6}

difference(se1, set2)
