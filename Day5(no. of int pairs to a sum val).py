n=int(input("Enter the no. of elements in the array"))
arr=[]
print("Enter the array")
for i in range(n):
    l=int(input())
    arr.append(l)
count=0
x=int(input("Enter the sum val: "))

for i in range(n):
    for j in range(i+1,n):
        if(arr[i]+arr[j]==x):
            count=count+1
print("The no. of val to make the sum is:",count)
