#include<iostream>
#define MAX 100
#define NIL -1

using namespace std;

class Fibo{
	private:
		int table[MAX];
		int lastval;
	public:
		Fibo(){
			int i;	
			for(i=0;i<MAX;i++)
				table[i]=NIL;
			table[0]=0;
			table[1]=1;
			lastval=1;
			}
		int fibon(int n){
			if(n<lastval)
				return table[n];
			else{
				int j;
				for(j=lastval+1;j<=n;j++)
					table[j]=table[j-1]+table[j-2];
				lastval=n;
				return table[n];
				}
		}
	};

int main()
	{
		Fibo a=Fibo();
		cout<<a.fibon(5)<<"\n";
		cout<<a.fibon(45)<<"\n";
		cout<<a.fibon(46)<<"\n";
		cout<<a.fibon(47)<<"\n";
		return 0;
	}
			
