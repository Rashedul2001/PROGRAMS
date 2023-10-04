import random


def getScore():
    score = random.randint(0, 1000)
    print("The Score is: {}".format(score))
    return score


newscore = getScore()
# f=open("High_Score.txt", "r")>>>> f.close()>>>>or
with open("High_Score.txt", "r") as f:
    oldscore =
