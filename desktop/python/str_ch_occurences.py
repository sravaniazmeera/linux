str=input("enter the string")
l=list(str)
f=[l.count(e) for e in l]
d=dict(zip(l,f))
print(d)
'''s="abcbaceytytey"
d={i:s.count(i) for i in s}
print(d)'''
