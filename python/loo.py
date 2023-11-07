'''for i in range(1,11):
    print(i, "Hello World")'''

#print elements of  a using fir loop.
'''list = [12,43,65,67,97,56]
for i in list:
    print(i)'''

#pattern
'''n = int(input("Enter the num"))
for _ in range(n):
    print("*" * 5)'''

'''n = int(input("Enter the num"))
for i in range(1, n+1):
    for j in range(1, n+1):
        print(j, end="")
    print()'''

'''1
1 2
1 2 3
1 2 3 4'''

'''n = int(input("Enter the num"))
for i in range(1,n+1):
    for j in range(1,i+1):
        print(j, end="")
    print ()'''

n = int(input("Enter the num:"))
for i in range(1,n+1):
    print(" " * (n-i), end="")
    for j in range(1, 2 * i):
        print(j, end="")
    print()







