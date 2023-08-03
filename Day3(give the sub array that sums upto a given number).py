def findSubarray():
    n=int(input("Enter array size: "))
    arr=[]
    for i in range (n):
        l=int(input())
        arr.append(l)
    x=int(input("Enter sum: "))
    for i in range(0,n):
        sum=arr[i]
        if sum==x:
            arr[i]
        else:
            for j in range(i+1, n):
                sum+=arr[j]
                if sum==x:
                    print("The sub array is: ",arr[i:j+1])
                    return    
    print("No subarray found")
    
findSubarray()
