#LOGIC
#Take input array from the user
#sort the array
#find the kth largest element

n=int(input("Enter no. of elements in the array: "))
arr=[]
print("Enter the array: ")                                 
for i in range(0,n):
    l=int(input())
    arr.append(l)

#sorting
for i in range(0,n):
    for j in range(i+1,n):
        temp=0
        if(arr[i]<arr[j]):
            temp=arr[i]
            arr[i]=arr[j]
            arr[j]=temp
print('sorted array: ',arr)

#kth element
k=int(input("Enter which largest number you want to find: "))
for i in range(0,n):
    if(k==i):
        print("The",k,"th largest element is:", arr[k-1])
