''' 12. Write a Python program that calculates the factorial of a given number using recursion. '''

def factorial(num):
    if num == 0:
        return 1
    else:
        return num * factorial(num - 1)

num = int(input("Enter your number : "))
fac = factorial(num)
print(f"Factorial of your number is : {fac}")