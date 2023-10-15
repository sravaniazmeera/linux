#****************args*****************
'''def display(*a):
    print(a[1])
display(1,2,3,4)'''
#***********************kwargs*************
def display(**s):
    for k,v in s.items():
        print(k,v)

    print(s['a'])
display(a ='sravni',b ="sindhu")
