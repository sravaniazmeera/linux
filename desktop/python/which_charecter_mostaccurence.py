s="sravaniertrkcytrvkckkkkkkkkkkkkkkkkkkxz"
d={}
for e in s:
    if e in d:
        d[e]=d[e]+1
    else:
        d[e]=1
print(max(d,key=d.get))


