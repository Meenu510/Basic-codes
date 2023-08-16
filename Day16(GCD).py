x=int(input("Enter x: "))
y=int(input("Enter y: "))
while(y!=0):
    temp=x%y
    x=y
    y=temp
    
print("The GCD of the value is: ",x)
