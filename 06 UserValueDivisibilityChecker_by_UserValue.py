print("choose your input type:\n1. Integer\n2. float")
choice = int(input("enter choice (1 or 2): "))
print("-------------------------")
if choice == 1:
    num = int(input("Enter an integer you want to check the divisibility for: "))
    div1 = int(input("→ Enter the input for first divisiblity check: "))
    div2 = int(input("→ Enter the input for second divisiblity check: "))
    print("-------------------------")
    if div1 == 0 and div2 == 0:
        print("ERROR: Both numbers cannot be zero. Please restart")
    elif div1 == 0:
        if num % div2 == 0:
            print(f"RESULT: {num} is divisible by\n→ {div2} only.\n→ First divisor is zero.")
        else:
            print(f"RESULT: {num} is not divisible by\n→ {div2}\n→ First divisor is zero.")
    elif div2 == 0:
        if num % div1 == 0:
            print(f"RESULT: {num} is divisible by\n→ {div1} only.\n→ Second divisor is zero.")
        else:
            print(f"RESULT: {num} is not divisible by\n→ {div1}\n→ Second divisor is zero.")
    elif num % div1 == 0 and num % div2 == 0:
        print(f"RESULT: {num} is divisible by both\n→ {div1}\n→ {div2}")
    elif num % div1 == 0:
        print(f"RESULT: {num} is divisible by\n→ {div1} only.")
    elif num % div2 == 0:
        print(f"RESULT: {num} is divisible by\n→ {div2} only.")
    else:
        print(f"RESULT: {num} is divisible by\n→ neither {div1}\n→ nor {div2}")
elif choice == 2:
    num = float(input("Enter a number you want to check the divisibility for: "))
    div1 = float(input("→ Enter the input for first divisiblity check: "))
    div2 = float(input("→ Enter the input for second divisiblity check: "))
    print("-------------------------")
    if div1 == 0 and div2 == 0:
        print("ERROR: Both divisors cannot be zero. Please restart")
    elif div1 == 0:
        if num % div2 == 0:
            print(f"RESULT: {num} is divisible by\n→ {div2} only.\n→ First divisor is zero.")
        else:
            print(f"RESULT: {num} is not divisible by\n→ {div2}\n→ First divisor is zero.")
    elif div2 == 0:
        if num % div1 == 0:
            print(f"RESULT: {num} is divisible by\n→ {div1} only.\n→ Second divisor is zero.")
        else:
            print(f"RESULT: {num} is not divisible by\n→ {div1}\n→ Second divisor is zero.")
    elif num % div1 == 0 and num % div2 == 0:
        print(f"RESULT: {num} is divisible by both\n→ {div1}\n→ {div2}")
    elif num % div1 == 0:
        print(f"RESULT: {num} is divisible by\n→ {div1} only.")
    elif num % div2 == 0:
        print(f"RESULT: {num} is divisible by\n→ {div2} only.")
    else:
        print(f"RESULT: {num} is divisible by\n→ neither {div1}\n→ nor {div2}")
else:
    print("ERROR: invalid choice. please restart and enter either 1 or 2.")
