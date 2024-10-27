def is_subset(a, b):

  if a.issubset(b):
    print("Set 1 is a subset of set 2.")
  else:
    print("Set 1 is not a subset of set 2.")

set1 = {1, 2, 3}
set2 = {1, 2, 3, 4}

is_subset(set1, set2)
