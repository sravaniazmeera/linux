a=[1,2,3,4,5]
b=[3,4,5,6,7]
c=[3,4,5,9,1]
#d=set(a)&set(b)&set(c)
#print(d)
d=[]
for i in a:
    if i in b:
        if i in c:
            d.append(i)or print(i)
print(d)
