#include <iostream>

using namespace std;

class Builder{
	int number;
	int** table;
	void createtable(){
		for(int i=1;i<number;i++){
			table[i][0]=table[i-1][0]+table[i-1][1];
			table[i][1]=table[i-1][0];
			}
		}
	public:
		Builder(){
			cout<<"\nEnter N :";
			cin>>number;
			table=new int*[number];
			for(int i=0;i<number; i++)
				table[i]=new int[2];
			table[0][0]=1;
			table[0][1]=1;
			createtable();
			}

		int getresult(){
				return (table[number-1][0]+table[number-1][1])*(table[number-1][0]+table[number-1][1]);
			}
	};

int main(){
		Builder A=Builder();
		cout<<A.getresult();	
		return 0;
		}
