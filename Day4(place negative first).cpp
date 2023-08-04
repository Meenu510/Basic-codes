#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter the no. of terms for the array";
	cin>>n;
	int arr[n];
	cout<<"Enter the array";
	for (int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	int j=0;
	for(int i=0;i<n;i++){
		int temp;
		if(arr[i]<0){
			if(i!=j){
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
			j++;
		}		
	}
	cout<<"Enter the array";
	for (int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	
	return 0;
}
