# how we creating a tuple
'''colours = ("red", "black", "yellow", "pink", "blue")
fruit = ("apple",)
print(type(fruit))
print(len(colours))
print(colours[0])

# Since 'colours' is a tuple, you can't use 'remove'. Instead, create a new tuple without "pink"
colours = tuple(color for color in colours if color != "pink")
print(colours)

print(colours[-1])
print(colours[1:3])
print(colours[-2])

if "pink" in colours:
    print("pink is part of tuple")

for i in colours:
    print(i)

more_colours = ("white", "purple")
colours = colours + more_colours  # Concatenate tuples
print(colours)
'''

#reverse tuple
'''input_tuple = (1,2,3,4,5,6,7,8,9)
list = []
for x in reversed(input_tuple):
    list.append(x)
    output_tuple = tuple(list)
print(output_tuple)
'''

'''input_tuple = ('a', 'b', 'c', 'd', 'e', 'f')
list = []

for x in reversed(input_tuple):
    list.append(x)

output_tuple = tuple(list)
print(output_tuple)'''

#sets

names = {"rinku", "rinkal", "mahi"}
print(names)
print(type(names))  # Use parentheses instead of square brackets for type()

for x in names:
    print(x)

if "rinku" in names:
    print("rinku is in the set")

names.add("sai")
print(names)

names_list = ["kiya", "piya"]
names.update(names_list)  # Use parentheses instead of square brackets for update()
print(names)

#removing elements
names.remove("piya")
print(names)

#joined 2 sets

s1 = {'a', 'b', 'c'}
s2 = {'d', 'e', 'f'}
s1.union(s2)
print(s1,s2)
s3 = s1.union(s2)
print(s3)

#update function
s1.update(s2)
print(s1)

# keep duplicate while joining
s1.intersection_update(s2)
print(s1)

#keep all valuve excep duplicate
s1.symmetric_difference_update(s2)
print(s1)


# Given three arrayss we have to find common elements in three sorted list using sets.

'''l1 = [1,55]
l2 = [3,4,5,5,10]
l3 = [5,5,10,20]
#typing casting
s1 = set(l1)
s2 = set(l2)
s3 = set(l3)
s1s2 = s1.intersection_update(s2)
final_set = s1s2.intersection_update(s3)
final_list = list(final_set)
print(final_list)'''

'''l1 = [1, 5, 5]
l2 = [3, 4, 5, 5, 10]
l3 = [5, 5, 10, 20]

# Type casting
s1 = set(l1)
s2 = set(l2)
s3 = set(l3)

# Intersection and update
s1.intersection_update(s2)
s1.intersection_update(s3)

# Convert set to list
final_list = list(s1)

print(final_list)'''

'''l1 = [1,3,4,4]
l2 =[1,2,3,5,4,6,4]
s1 = set(l1)
s2 = set(l2)
s1.intersection_update(s2)

final_list = list(s1)
print(final_list)'''

l1 = [1, 2, 3, 4, 5, 3]
l2 = [6, 4, 98, 67, 3]
l3 = [65, 34, 89, 3, 78, 0]

s1 = set(l1)
s2 = set(l2)
s3 = set(l3)

s1.intersection_update(s2)
s2.intersection_update(s3)
s3.intersection_update(s1)

final_list = list(s1)
print(final_list)
