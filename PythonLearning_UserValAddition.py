def add(a, b):
    return a + b

a = int(input("enter the first number: "))
b = int(input("enter the second number: "))

result = add(a, b)
print("the sum is:", result)

"""
→we define a function named "add" that takes 2 parameters, "a" and "b", and returns "a + b"
→we ask the user to enter values and store them in "a" and "b"
→we call the "add" function, passing in "a" and "b" so it runs, adds them, and gives back the answer, which we store in "result".
→we print "result", which already holds the answer from add() so print() just displays it, it doesn't run add() itself.
"""