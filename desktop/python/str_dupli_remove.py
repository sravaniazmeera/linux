#************************string duplicates remove******************
'''str=input("enter the string")
a=""
for e in str:
    if e not in a:
        a=a+e
print(a)'''
#*******************using list**************************************
str=input("enter the string")
a=[]
for e in str:
    if e not in a:
        a.append(e)
print(a)
for i in range(0,len(a)):
    print(a[i],end="")

