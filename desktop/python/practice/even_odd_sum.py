n=int(input("enter the num"))
esum=odsum=0
for i in range(1,n+1):
    if(i%2==0):
        esum=esum+i
    else:
        odsum=odsum+i
print(esum,odsum)
