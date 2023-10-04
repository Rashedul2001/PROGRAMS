f = open("Poem.txt", "r")
if('twinkle' in f.read()):
    print("Yes Twinkle is in the txt file.")
else:
    print("The Word twinkle is not present in the file.")
f.close()
