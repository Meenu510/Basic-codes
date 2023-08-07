def rotate(arr,d,n):
    p=1
    while(p <= d):
        last=arr[0]
        for i in range(n-1):
            arr[i]=arr[i+1]
        arr[n-1]=last
        p=p+1
        
def print_array(arr,n):
    for i in range(n):
        print(arr[i],end=" ")


n=int(input("Enter the no. of elements in the array"))
arr=[]
print("Enter the array")
for i in range(n):
    l=int(input())
    arr.append(l)
d=int(input("Enter how many times to rotate the array"))

rotate(arr,d,n)
print_array(arr,n)
