ZZa=input("enter the string")
w_list=a.split()
w_f={}
for w in w_list:
    w_f[w]=w_f.get(w,0)+1
print(w_f)
