mylist = []
a=int(input("enter list limit: "))
for x in range (0,a):
    b=int(input("enter a elements: "))
    mylist.append(b)
c = set()
yourlist = []
for x in mylist:
    if x not in c:
        yourlist.append(x)
        c.add(x)
print("Before list: "+ str(mylist))
print("After list: "+ str(yourlist))
countdictionary = {}
for x in yourlist:
    counter = 0

    num = x
    for x in mylist:
        if(num==x):
            counter = counter+1
            countdictionary.update({x:counter})
print("Occurance list: "+ str (countdictionary))
