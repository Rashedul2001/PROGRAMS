import random


def comput(user, comp):
    if(comp == user):
        return None
    elif comp == 'W' and user == 'S':
        return True
    elif comp == 'S' and user == 'G':
        return True
    elif comp == 'G' and user == 'W':
        return True
    else:
        return False


Possibility = ['S', 'W', 'G']

print("Enter S for Snake,G for Gun and W for Water..")
user = input("Enter your Choice:")
user = user.upper()

comp = random.randint(0, 2)
comp = Possibility[comp]
print(f"Computer Choose {comp} and you choose {user}")
result = comput(user, comp)
if result == True:
    print("You Won!")
elif result == None:
    print("The match was Draw.")
else:
    print("You Lost!")
