#include <iostream>
using namespace std;

int main(){
	int n,x;
	int count=0;
	cout<<"Enter the array size: ";
	cin>>n;
	int arr[n];
	cout<<"Enter the array: ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	cout<<"Enter the sum: ";
	cin>>x;
	
	cout<<"The sum is: ";
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]+arr[j]==x){
				count++;
			}
		}
	}
	cout<<count;

	return 0;
}
