#***********************filter()*****************
'''a=[1,2,3,4,5,6,7,8]
b=list(filter(lambda a:a%2==0,a))
print(b)'''
#***********************lambda function**************
'''a=lambda x,y:x if x>y else y
print(a(10,20))'''
'''a=lambda x,y,z:x if(x>y and x>z)else(y if (y>x and y>z)else z)
print(a(10,2,4))'''
'''a=lambda x,y,z:max(x,y,z)
print(a(1,2,3))'''
#*************************reduce function**************
from functools import reduce
a=[1,2,4,3,4,5]
b=reduce(lambda x,y:x if (x>y)else y,a)
c=reduce(lambda x,y:x+y,a)
print(c)
print(b)
s=["sravani","sam","","mirafra","*"]
x=reduce(lambda m,n:m+n,s)
print(x)
#*******************************map*************************
'''a=[1,2,3,4]
b=list(map(lambda x:x*2,a))
print(dict(zip(a,b)))'''
