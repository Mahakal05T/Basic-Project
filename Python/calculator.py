class calculator:
    def __init__(self):
        self.num1 = int(input("Enter first number "))
        self.num2 = int(input("Enter second number "))
        self.choice = int(input("Select your choice\n 1 for addition\n 2 for subtraction\n 3 for multiplication\n 4 for Division\n"))

        if(self.choice == 1):
            print(self.num1 + self.num2)
        elif(self.choice == 2):
            print(self.num1 - self.num2)
        elif(self.choice == 3):
            print(self.num1 * self.num2)
        elif(self.choice == 4):
            print(self.num1 / self.num2)
        else:
            print("Invalid operation....")

calc = calculator()
