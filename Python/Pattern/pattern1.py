rows = int(input("Enter the numbers of rows: "))

for i in range(rows):
    for j in range(i):
        print(i,end=" ")
    print('')