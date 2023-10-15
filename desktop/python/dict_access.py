a={1:'dad',2:'mom',5:'siri',4:'sindhu'}
'''b=a.keys()
print(b)
c=a.values()
print(c)
d=a.items()
print(d)
for i in a:
    print(i,a[i])'''
for i in a:
    print(i,a.get(i))
d=a[1]
print(d)
e=a[2]
print(e)
f=a.get(8)# get function not give error,it will return none
g=a[8]
print(g)#it will give error because u acess key value not present in dict 
print(f)
