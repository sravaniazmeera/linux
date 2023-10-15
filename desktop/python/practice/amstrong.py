n=int(input("enter the num"))
temp=n
res=0
while(n>0):
    r=n%10
    res=res+(r*r*r)
    n=n//10
if(temp==res):
    print("amstrong")
else:
    print("not amstrong")
