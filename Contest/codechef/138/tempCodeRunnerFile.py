import math
t=int(input())
for _ in range(t):
 x,y=map(int,input().split())
 up=10*(x-y)
 down=y-100
 min=math.ceil(up/down)

print (min)