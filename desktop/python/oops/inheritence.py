#•	How to use parent class variables in Child class ? how do you implement it?
class Parent:
    def __init__(self):
        self.parent_var = "I am a parent variable."

class Child(Parent):
    def __init__(self):
       # super().__init__()  # Call the parent class's constructor
           self.child_var = "I am a child variable."

    def display_variables(self):
        print("Parent Variable:", self.parent_var)
        print("Child Variable:", self.child_var)

# Create an instance of the child class
child_obj = Child()

# Access and display variables from both parent and child classes
child_obj.display_variables()

