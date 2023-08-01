/*LOGIC:
1. input array
2. sort array
3. find largest element*/
#include<iostream>
using namespace std;
int main(){
	int arr[10];
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<"Enter the size of the array: ";
	cin>>n;
	cout<<"Enter the array: ";
	for(int i=0;i<n;i++){
		cin>>arr[i];                                         	//input
	}
	
	for(int i=0; i<n;i++){
		for(int j=i+1; j<n;j++){
			int temp=0;
			if(arr[i]<arr[j]){                                 //sort in descending order
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";                                      //print 
	}
	
	int k=0;
	cout<<"\nEnter the value for k: ";
	cin>>k;
	for(int i=0;i<n;i++){
		if(k==i){
			cout<<k<<"th largest element is: "<<arr[k-1];       //kth largest element
		}
	}
	return 0;
}
