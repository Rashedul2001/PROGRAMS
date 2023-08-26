name=input("Enter Your Name: ")
date=input("Enter The Date: ")
template='''Hi <|name|>,
You are selected.
<|Date|>
'''
print(template.replace("<|name|>",name).replace("<|Date|>", date))