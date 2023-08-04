n=int(input("Enter the no. of elements in array"))
arr=[]
print("Enter the array")
for i in range(n):
    l=int(input())
    arr.append(l)
j=0
for i in range(n):
    if(arr[i]<0):
        if i!=j:
            temp=arr[i]
            arr[i]=arr[j]
            arr[j]=temp
        j+=1
arr

    
