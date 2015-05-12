#include<iostream>
#include<string>

using namespace std;

int main(){
	string phone;
	cin>>phone;
	cout<<phone.substr(2,1)<<"\n";
	cout<<phone.substr(3,4)<<"\n";
	cout<<phone.substr(2,2)<<"\n";
	return 0;
	}
