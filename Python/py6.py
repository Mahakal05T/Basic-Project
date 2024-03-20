S1= int ( input ("enter first subject marks: "))

S2 =int ( input (" enter second subject marks :"))

S3= int ( input ("enter third subject marks: "))

sum = S1 + S2 + S3
print("sum of all subject marks: ",sum)

percentage = (sum / 300) * 100

if percentage >= 40.0 and S1 >= 33.0 and S2 >= 33.0 and S3 >= 33.0:
    print("Congratulations! You have passed with: ",percentage)

else:
    print( "Sorry, you failed")