a=[]
n=int(input("enter the num"))
for i in range(1,n+1):
    value=int(input("entr the value"))
    a.append(value)
for i in range(n):
    for j in range(i+1,n):
        if(a[i]<a[j]):
            temp=a[i]
            a[i]=a[j]
            a[j]=temp
print(a)
