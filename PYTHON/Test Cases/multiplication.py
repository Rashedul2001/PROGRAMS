table = int(input("Enter the number to print multiplication table:\n"))
for i in range(1, 11):
    # f and {} lets us use variables inside print
    print(f"{table}X{i}={i*table}", end=" ")
i = 1
print("")  # automatically prints an endline
# print("\n") prints two endlines
while i <= 10:
    print(f"{i}X{table+1}={i*(table+1)}")
    i += 1
