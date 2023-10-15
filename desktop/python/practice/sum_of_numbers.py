from functools import reduce
a=[]
n=int(input("enter the num"))
for i in range(n):
    v=int(input("enter the value"))
    a.append(v)
b=reduce(lambda x,y:x+y,a)
print(b)
