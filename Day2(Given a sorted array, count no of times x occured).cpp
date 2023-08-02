//Given a sorted array arr[] and a number x, write a function that counts the occurrences of x in arr[]
#include<iostream>
using namespace std;

class Count{
	public:
		int a[];
	void count(int a[],int n, int x){                    //a=>array  ||  n=>size of array   ||     x=>element whose frequency is to be found
		int k=0;
		for(int i=0;i<=n;i++){
			if(x==a[i]){
				k++;
			}	
		}
		cout<<k;
	}
};

int main(){
	int x;
	int arr[10];
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<"Enter the array(sorted)";
	for(int i=0;i<=n;i++){
		cin>>arr[i];
	}
	cout<<"Enter the value that you find the frequency of";
	cin>>x;
	Count c;
	c.count(arr,n,x);
	return 0;
}
