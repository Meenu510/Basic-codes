#include<iostream>
#include <string>
#include<algorithm>
using namespace std;

int main(){
	string s1,s2;
	cout<<"Enter the string 1";
	cin>>s1;
	cout<<"Enter the string 2";
	cin>>s2;
	
	if (s1.length()!=s2.length()){
		cout << "The two strings are not anagrams of each other.";
		return false;
		
	}
	sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    if(s1==s2){
    	cout << "The two strings are anagrams of each other.";
		return true;
	}
	return 0;
}
