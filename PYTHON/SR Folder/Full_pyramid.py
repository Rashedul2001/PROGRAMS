row = int(input("Enter the number of rows:"))
for i, j in zip(range(1, row+1), range(row-1, -1, -1)):
    star = i
    for space in range(j-1, -1, -1,):
        print(" ", end='')

    while star != 0:
        if star == 1:
            print("*")
            break
        print("* ", end='')
        star -= 1
print("\n")

for i in range(1, row+1):
    print("")
    for j in range(row-i):
        print(" ", end='')
    for j in range(2*i-1):
        print("*", end='')
    for j in range(row-i):
        print(" ", end="")
