#********************decimal to binary*********************
'''n=int(input("enter the decimal num"))
binary=0
base=1
while(n>0):
    rem=n%2
    binary=binary+rem*base
    n=n//2
    base=base*10
print(binary)'''
#*********************binary to decimal**********************
'''n=int(input("enter the binary num"))
deci=0
base=1
while(n>0):
    rem=n%10
    deci=deci+rem*base
    n=n//10
    base=base*2
print(deci)'''
#****************another method**********************
n=int(input("enter the num"))
bin=""
while(n>0):
    r=n%2
    n=n//2
    bin=str(r)+bin
print(bin)
