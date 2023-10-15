
#*************default __init__ constructor*****************
'''class Default:
    
    #defining default constructor
    def __init__(self):
        self.var1 = 56
        self.var2 = 27
        
    #class function for addition
    def add(self):
        print("sum=", self.var1 + self.var2)

obj = Default()     # since default constructor doesn’t take any argument
obj.add()'''
#***************parameterised __inti__con*********************
'''class Default():

    #defining parameterised constructor
    def __init__(self, n1, n2):
        self.var1 = n1
        self.var2 = n2

    #class function for addition
    def add(self):
        print("Sum is ", self.var1 + self.var2)

obj = Default(121,136)              #Creating object for a class with parameterised init
obj.add()'''
#***************default __init__****************
class Teacher:
    # definition for init method or constructor with default argument
    def __init__(self, name = "Preeti Srivastava"):
        self.name = name
     # Random member function
    def show(self):
        print(self.name, " is the name of the teacher.")
        
t1 = Teacher()
t1.show()#name is initialised with the default value of the argument
t2 = Teacher('Chhavi Pathak')    #name is initialised with the passed value of the argument
t2.show()
