def add(firstName: str, lastName: str):
    firstName.capitalize()
    return firstName + " " + lastName

fname = 64
lname = "Gates"

name = add(fname, lname)
print(name)
