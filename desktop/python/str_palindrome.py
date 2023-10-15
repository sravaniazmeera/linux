'''str=input("enter the string")
a=str[::-1]
if(str==a):
    print("palindrome")
else:
    print("not palindrome")'''
str=input("enter the string")
a=len(str)
b=""
while(a>0):
    b=b+str[a-1]
    a=a-1
print(b)
if(str==b):
    print("palindrome")
else:
    print("not palindrome")
