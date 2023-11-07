'''fruits = ["apple" , "mango", "straberry"]
print(fruits)
print(type(fruits))'''

#Adding elements to a list 
#fruits = ["apple", "banana", "orange", "kiwi", "mango"]

#fruits . append("kiwi")\print(fruits)

#fruits . insert(1, "kiwi")
#print(fruits)

#more_fruits = ["kiwi", "apple"]
#fruits.extend(more_fruits)
#print(fruits)

#fruits.remove("banana")
#print(fruits)

#fruits.pop()
#print(fruits)

#changing item in a list
#fruits[1] = "kiwi"
#print(fruits)

#fruits[1:3] =["papaya"]
#print(fruits)

# sorting.
'''fruits.sort()
fruits.sort(reverse=True)
print(fruits)'''

#list comprehension
'''n_fruits = [fruits for fruits in fruits if "a" in fruits]
print(n_fruits)'''


#Given a list in python and provide the index of the elelments write a program to swap the two elements in the list .
n = int(input("Enter the size of the list: "))
my_list = []

for _ in range(n):
    num = int(input("Enter a number: "))
    my_list.append(num)

idx1 = int(input("Enter index 1: "))
idx2 = int(input("Enter index 2: "))

temp = my_list[idx1]
my_list[idx1] = my_list[idx2]
my_list[idx2] = temp

print(my_list)









