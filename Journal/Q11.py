''' 11. Write a Python program to calculate the sum of digits of a number. '''

num = int(input("Enter your number : "))
sum = 0
for i in str(num):
    sum += int(i)
print(f"The sum of {num} is {sum}")