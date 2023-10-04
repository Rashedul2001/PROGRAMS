def remstrip(myList, name):
    name.strip()
    if name in myList:
        myList.remove(name)
    else:
        return True
    return myList


name = input("Enter the name to remove: ")
myList = ["Rashedul", 'Rohan', "Soniya", "Nasrin", "Baby"]
print("Before removing the list is:", myList)
if remstrip(myList, name) == True:
    print("Name Not Found.")
else:

    print("After removing the list is: ", remstrip(myList, name))
