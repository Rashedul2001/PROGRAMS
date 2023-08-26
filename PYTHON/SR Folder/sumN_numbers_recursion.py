def resum(n):
    if(n <= 1):
        return 1
    else:
        return n+resum(n-1)


n = int(input("Enter last number: "))
print("Sum is:", resum(n))
