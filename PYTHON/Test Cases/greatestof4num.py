num1 = int(input("Enter the first Number: "))
num2 = int(input("Enter the second Number: "))
num3 = int(input("Enter the third Number: "))
num4 = int(input("Enter the fourth Number: "))
if(num1 > num2):
    gfirst = num1
else:
    gfirst = num2
if(num3 > num4):
    gsecond = num3
else:
    gsecond = num4
if(gsecond > gfirst):
    print("The greatest number is ", gsecond)
else:
    print("The greatest number is ", gfirst)
