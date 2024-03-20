animal = ["tiger","lion","elephant","gorilla","giraffe"]
print(animal)
#remove 3 index element
animal.pop(3)
print(animal)
#append new animal in last
animal.append("monkey")
print(animal)
#delete beginning element
animal.pop(0)
#print all animal
print(animal)
for x in animal:
    print(x)
#print only starting 3 element
print(animal[0:3])

