a=[1,2,3,4,5]
try:
    b=int(input("entier the index number"))
    c=a[b]
    print(c)
    v=int('abc')
except (IndexError,ValueError)as msg:
    print(msg)
'''except (ValueError)as msg:
    print(msg)'''

