#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter the no. of elements in the array";
	cin>>n;
	int arr[n];
	cout<<"Enter the array";
	for(int i=0; i<n;i++){
		cin>>arr[i];
	}
	int max=arr[0];
	int min=arr[0];
	for(int i=0;i<n;i++){
		if(max<arr[i]){
			max=arr[i];
		}
		else if(min>arr[i]){
			min=arr[i];
		}
	}
	cout<<"The max val in the given array is: "<<max<<"\n";
	cout<<"The min val in the given array is: "<<min;
	
	
	return 0;
}
