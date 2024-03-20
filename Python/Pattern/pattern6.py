rows = int(input('Enter the numbers of rows: '))
for i in range(rows, 0, -1):
    num = i
    for j in range(0, i):
        print(num, end=' ')
    print('\r')