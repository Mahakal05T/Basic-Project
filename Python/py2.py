student1 = {'ayush':15, 'anmol':10, 'yash':12}
student2 = {'sairaj':18, 'satish':20, 'uddesh':19}
student1.update(student2)
print(student1)
x = student1.values()
print(x)
x = student1.keys()
print(x)
print("sum of values in the dictionary: ")
print(sum(student1.values()))
