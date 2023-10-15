#@@@@@@@@@@@@@@@@@@@@@@@@@@@  up to n primenumbers@@@@@@@@@@@@@@@@@@@@@@
'''n=int(input("enter the any num"))
for i in range(1,n):
    c=0
    for j in range(1,i+1):
        if(i%j==0):
            c=c+1
    if(c==2):
        print(i)'''


n=[1,2,3,4,5,6,7]
prime=[]
for i in n:
    c=0
    for j in range(1,i+1):
        if(i%j==0):
            c=c+1
    if(c==2):
        prime.append(i)
print(prime)

