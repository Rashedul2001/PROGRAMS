n = int(input("Enter row number: "))
for i in range(n):
    for j in range(n-i):
        if j == n-i-1:
            print("*")
        else:
            print("* ", end='')
