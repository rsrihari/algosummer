#include<iostream>

using namespace std;


	int min(int a, int b, int c){
		return a<b?a<c?a:c:b<c?b:c;
		}

int main()
	{
		cout<<min(25,5,23);
		cout<<min(235,34,43);
		return 0;
	}
