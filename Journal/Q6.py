''' 6. Create list and perform append, pop, and slice operation. '''

# creating list
sub = ["ps","acc","os","sec","os"]

#append method
sub.append("rdbms")
print(f"sub list after append method : {sub}")

#pop method
sub.pop(4)
print(f"sub list after pop method : {sub}")

#slice
print(f"sub list after slice operation : {sub[1:4]}")