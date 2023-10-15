#********************unic***********
'''n=int(input("enter num"))
a=[]
for i in range(1,n+1):
    v=int(input("enter the value"))
    a.append(v)
for i in range(n):
    c=0
    for j in range(i+1,n):
        if(a[i]==a[j]):
            c=c+1
    if(c==0):
        print(a[i])'''
#********************dupicates*************        
n=int(input("enter num"))
a=[]
for i in range(1,n+1):
    v=int(input("enter the value"))
    a.append(v)
for i in range(n):
    c=0
    for j in range(i+1,n):
        if(a[i]==a[j]):
            c=c+1
    if(c==1):
        print(a[i])
