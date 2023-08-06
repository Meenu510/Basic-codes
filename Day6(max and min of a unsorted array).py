n=int(input("Enter the no. of elements in the array"))
arr=[]
print("Enter the array")
for i in range(n):
    l=int(input())
    arr.append(l)
max=arr[0]
min=arr[0]
for i in range(n):
    if max<arr[i]:
        max=arr[i]
    elif min>arr[i]:
        min=arr[i]
print("The max value in the array is: ",max)
print("The min value in the array is: ",min)
