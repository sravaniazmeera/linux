#*********************usiing set method***************
'''a=[1,2,3,4,5,3,4,5]
b=set(a)
print(b)
c=list(b)
print(c)'''

#**********************using list comprehension***********
'''a=[1,2,3,4,5,2,3,4]
b=[]
[b.append(e) for e in a if e not in b]
print(b)'''
#*******************using list comprehension in runtime******
'''n=int(input("enter the num"))
a=[]
for i in range(1,n+1):
    value=int(input("enter the value"))
    a.append(value)
b=[]
[b.append(e) for e in a if e not in b]
print(b)'''
#*************************using for loop**********************
'''a=[1,2,3,4,3,4,5]
b=[]
for e in a:
    if e not in b:
        b.append(e)
print(b)'''
#**********************using fromkeys*****************
a=[1,2,3,1,23]
b=list(dict.fromkeys(a))
print(b)
