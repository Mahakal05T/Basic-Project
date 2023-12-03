mytuple = ()
yourtuple = ()
finaltuple = ()
n = int(input("enter limit of tuple: "))
for x in range(1,n+1):
    b = int(input("enter elements of tuple: "))
    convlist = list(mytuple)
    convlist.append(b)
    mytuple = tuple(convlist)
print(mytuple)

a = int(input("enter limit of tuple: "))
for y in range(1,n+1):
    d = int(input("enter elements of tuple1: "))
    convlist2 = list(yourtuple)
    convlist2.append(d)
    yourtuple = tuple(convlist2)
print(yourtuple)

finaltuple = mytuple + yourtuple
print("unsorted tuple: "+str(finaltuple))
convlist3 = list(finaltuple)
convlist3.sort()
finaltuple = tuple(convlist3)
print("Sorted tuple: "+str(finaltuple))
print("largest element: "+str(finaltuple[-1]))
    
