#*********************prime or not***************
'''n=int(input("enter the num"))
c=0
for i in range(1,n+1):
    if(n%i==0):
        c=c+1
if(c==2):
    print("prime")
else:
    print("not prime")'''
#**********************up to n prime*************
n=int(input("enter the num"))
for i in range(2,n+1):
    if(i>1):
        for j in range(2,i):
            if(i%j==0):
                break
        else:
            print(i)
#*************************array prime*************
'''n=[1,2,3,4,5,6,7]
prime=[]
for i in n:
    c=0
    for j in range(1,i):
        if(i%j==0):
            c=c+1
    if(c==1):
        prime.append(i)
print(prime)'''
