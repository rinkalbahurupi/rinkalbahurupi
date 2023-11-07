# thke positive integers input and tell if it is even or odd
# Take positive integer input and tell if it is even or odd
'''n = int(input("Enter the number: "))
if n % 2 == 0:
    print("It is an even number")
else:
    print("It is an odd number")'''

# cost price selling price
'''cp = int(input("Enter the cost price: "))
sp = int(input("Enter the selling price: "))

if sp > cp:
    profit = sp - cp
    print("We have a profit:", profit)
elif sp < cp:  # Corrected from "else if" to "elif"
    loss = cp - sp  # Corrected from "loss = cp - sp:" to "loss = cp - sp"
    print("We have a loss:", loss)
else:
    print("We have no profit, no loss")'''

#take input percentage of a student and print the grade according to marks.
'''m = int(input("enter the marks"))
if m > 80:
    print("Very good")
elif m > 60:
    print("Good grade")
elif m > 40:
    print("Average")
else:
    print("fail")'''
'''eng_m = int(input("Enter the English marks:"))
math_m = int(input("Enter the Math marks: "))

if eng_m > 90 and math_m > 78:
    print("A grade")
elif eng_m > 90 or math_m > 78:
    print("B grade")
else:
    print("C grade")'''

# Take positive integers input tell if it is a four digit number or not.
'''num = int(input("Entert the number:"))
if num >= 1000 and num <= 9999:
    print("It is a four digit num");
else:
    print("It is not four digit num")'''

#Take 3 positive integers input and print the greatest of them.
'''n1 = int(input("Enter the number n1"))
n2 = int (input ("Enter the num n2"))
n3 = int(input("enter the num n3"))
if n1 > n2 and n1 > n3:
 print(n1,"is the gratest num")
elif n2 > n1 and n2 > n3:
 print(n2,"is the greatest num")
else:
 print(n3,"is the greatest num")'''

#nested if else 
'''num = int(input("Enter the num"))
if num % 5 == 0:
    print("Number is divisible by 15")
else:
    if num % 3 == 0 or num % 5 == 0:
        print("number is not divisible by 15 but divisible by 3 or 5")
    else:
        print("nuberr is neither divisible by 3 or 5")'''

#mtch case
# lets make a claculator using match oprators
'''n1 = int(input("Enter n1: "))
n2 = int(input("Enter n2: "))
o = input("Enter operator: ")

result = 0

if o == "+":
    result = n1 + n2
    print("Sum is", result)
elif o == "-":
    result = n1 - n2
    print("Difference is", result)
elif o == "*":
    result = n1 * n2
    print("Product is", result)
else:
    print("Invalid operator")'''
# You can add more cases as needed.


# ternaryop.
n = int(input("enter the num"))
o = "Evenn" if  n % 2 == 0 else "odd"
print("output is", o)