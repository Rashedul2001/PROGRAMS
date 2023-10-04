num = int(input())
for i in range(num):
    for j in range(num):
        if j == num-1:
            print("*")
        elif(i == 0 or j == 0 or i == num-1):
            print("* ", end="")
        else:
            print("  ", end="")
