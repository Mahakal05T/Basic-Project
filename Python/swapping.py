num1 = int(input("enter a first number: "))
num2 = int(input("enter a second number: "))

print("-------Before swapping-------")
print("first number: ",num1)
print("second number: ",num2)

"""temp = num1
num1 = num2
num2 = temp"""
#without using third variable 
num1 = num1 + num2
num2 = num1 - num2
num1 = num1 - num2

print("-------After swapping--------")
print("first number:",num1,)
print("second number",num2)
