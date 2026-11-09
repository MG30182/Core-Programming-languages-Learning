
print("Enter an integer: ", end="") # end=" " just tells program to continue executing in the same line without it, input appears down.
num = int(input())                  # defines that input is a interger

if num > 0:
    print("Positive number")
elif num < 0:
    print("Negative number")
else:
    print("Zero")