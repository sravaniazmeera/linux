n=int(input("enter num"))
a=[]
for i in range(n):
    v=int(input("enter the value"))
    a.append(v)
min=a[0]
max=a[0]
for i in range(n):
    if(a[i]>max):
        max=a[i]
    if(a[i]<min):
        min=a[i]
print("min=",min)
print("max=",max)
'''a=[1,2,3,4]
min=a[0]
max=a[0]
for i in a:
    if(i>max):
        max=i
    if(i<min):
        min=i
print(max,min)'''
