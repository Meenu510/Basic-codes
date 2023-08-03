#include <iostream>
using namespace std;

int main(){
	int n,x;
	cout<<"Enter the array size: ";
	cin>>n;
	int arr[n];
	cout<<"Enter the array: ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	cout<<"Enter the sum: ";
	cin>>x;
	
	for(int i=0;i<n;i++){
		int sum=arr[i];
		if(sum==x){
			cout<<arr[i];
		}
		else{
			for(int j=i+1;j<n;j++){
				sum+=arr[j];
				if(sum==x){
					cout<<"Subarray is: ";
					for(int k=i; k<=j; k++){
						cout<<arr[k]<<" ";
					}
					cout<<"\n";
					return 0;
				}
			}	
		}
	}
	cout<<"No subarray found\n";
	return 0;
}
