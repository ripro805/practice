def get_datatype(val):
    return type(val).__name__

var1 = 42
var2 = 3.14
var3 = "Hello"
var4 = [1, 2, 3]
print(get_datatype(var1))
print(get_datatype(var2))
print(get_datatype(var3))
print(get_datatype(var4))
