sub1 = int(input("Enter first Subject Number: "))
sub2 = int(input("Enter second Subject Number: "))
sub3 = int(input("Enter Third Subject Number: "))
total = sub1+sub2+sub3

if(sub1 < 33 or sub2 < 33 or sub3 < 33):
    print("You Have Faild in The Examnination.")
elif((total/3) < 40):
    print("You Have Faild in The Examnination.")
else:
    print("You Have Passed in The Examination.")
