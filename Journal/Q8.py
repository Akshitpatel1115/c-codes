''' 8. Write a program to find the number of key-value pairs in a dictionary. '''

dic = {"name" : "Akshit" , "Age" : 19, "roll No" : 325, "phone No" : 9890987678, "div" : "E", "class" : "FY-BCA"}

num_pairs = len(dic.items())
print(f"Total Number of key-values pairs in a dictionary : {num_pairs}")