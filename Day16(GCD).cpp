#include<iostream>
using namespace std;


int main(){
	int x,y,temp;
	cout<<"Enter x: ";
	cin>>x;
	cout<<"Enter y: ";
	cin>>y;
	while(y!=0){
		temp=x%y;
		x=y;
		y=temp;
	}
	cout<<"GCD of the above two numbers are: "<<x;
	return(0);
}
