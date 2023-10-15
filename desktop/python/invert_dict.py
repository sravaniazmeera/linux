a={1:"s",2:'r',3:'w'}
b={}
'''for k,v in a.items():
    b[v]=k
print(b)'''
b={v:k for k,v in a.items()}
print(b)
