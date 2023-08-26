num = int(input("Enter a number to check:"))
for i in range(2, num):
    if(num % i == 0):
        print("Number is not prime.")
        break
else:
    print("The number is Prime")
