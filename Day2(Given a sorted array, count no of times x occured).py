#Given a sorted array arr[] and a number x, write a function that counts the occurrences of x in arr[]
def count(a,n,x):                                      #function to count
    c=0;
    for i in range(n):
        if x==a[i]:
            c=c+1
    print(c)
    
arr=[]
n=int(input("Enter no. of value in array: "))
print('Enter the array(Preferably ascending order)')
for i in range(n):
    l=int(input())
    arr.append(l)
x=int(input("Enter the no. to find its occurance in the array: "))
count(arr,n,x)
