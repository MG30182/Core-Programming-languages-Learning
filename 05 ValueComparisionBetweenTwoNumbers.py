num1 = float(input("Enter your first number: "))
num2 = float(input("Enter your second number: "))
if num1>num2:
    print(f"{num1:.2f} is the maximum value between {num1:.2f} and {num2:.2f}. \nBy a difference of {num1-num2:.2f}")
elif num2>num1:
    print(f"{num2:.2f} is the maximum value between {num1:.2f} and {num2:.2f}. \nBy a difference of {num2-num1:.2f}")
else:
    print("Both numbers are equal")

# print(f"") lets you insert variables directly into the string
# {num:.2f} here .2f serves as the %.2f from c, qhere 2f means 2 digits after the decimal point.