#include <iostream>
#define NIL -1
#define MAX 100

using namespace std;

class Fibonacci{
	private:
		int table[MAX];
	public:
		Fibonacci(){
			int i;
			for(i=0;i<MAX;i++)
				table[i]=NIL;
			}

		int fibon(int n){
			if (table[n]==NIL){
				if (n==0) table[n]=0;
				else if (n==1) table[n]=1;
				else{
					table[n]=fibon(n-1)+fibon(n-2);
					}
				}
			return table[n];
			}
	};
		
int main()
	{
		Fibonacci a=Fibonacci();
		cout<<a.fibon(9);
		return 0;
	}
