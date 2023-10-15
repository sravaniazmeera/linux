#************************findall()*************
'''import re
a=input("enter the string")
e=input("enter the find charecter")
b=re.findall(e,a)
print(b)'''
#*********************search()*****************
import re
a=input("enter the string")
e=input("enter the find charecter")
b=re.search(e,a)
print(b)
c=b.span()
print(c)
