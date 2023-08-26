def factorial(num):
    if num <= 1:
        return 1
    else:
        return num*factorial(num-1)


n = int(input("Enter a integer number to find Factorial:"))
print("The Factorial is:", factorial(n))
