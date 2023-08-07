#include<iostream>
using namespace std;

void Rotate(int arr[], int d, int n)
{
    int p = 1;
    while (p <= d) {
        int last = arr[0];
        for (int i = 0; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        arr[n - 1] = last;
        p++;
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
}
int main(){
	int d;
	cout<<"Enter the no. of elements in the array";
	cin>>d;
	int arr[d];
	cout<<"Enter the array";
	for(int i=0; i<d;i++){
		cin>>arr[i];
	}
	int n;
	cout<<"Enter the no. of times to left rotate the array";
	cin>>n;
	
	Rotate(arr,n,d);
	printArray(arr,d);
	
	return 0;
}
