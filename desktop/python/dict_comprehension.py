'''d={e:e*e for e in range(1,5)}
print(d)   # its give the dict like {1:1,2:4,3:9,4:16}
d={(e,e*e)for e in range(1,5)}
print(d)   # its give tuple of dict like {(1,2),(2,4),(3,9),(4,16)}
d=dict((e,e*e)for e in range(1,5))
print(d)  # its give like dict {1:1,2:4,3:9,4:16}
d={}
for x in range(1,5):
    d[x]=x*2
print(d)'''
'''a=[1,2,3,4]
b=[2,3,4,5]
c=dict(zip(a,b))
print(c)
d={}
for k,v in zip(a,b):
    d[k]=v
print(d)'''
'''s="abcbacdgwesfcba"
d={i:s.count(i) for i in s}
print(d)'''
a=[1,2,3,4]
b=[2,3,4,5]
'''d={a:b for a,b in zip(a,b)}
print(d)'''
'''for a,b in zip(a,b):
    print(a,b)'''
'''e=dict((a,b) for a,b in zip(a,b))
print(e)'''


