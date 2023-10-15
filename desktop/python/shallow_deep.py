#*****************shallow copy*****************
'''import copy
a=[[1,2],[3,4],[5,6]]
b=copy.copy(a)
print(a)
print(b)
b[0][0]=33
print(a)
print(b)'''
#***************************************
import copy
a=[1,2,3,4,5]
b=copy.copy(a)
print(a)
print(b)
b[3]=66
print(a)
print(b)
