#include <iostream>

using namespace std;

class Coin{
	int n,m;
	int* coin;
	long int **table;
	void rendertable(){
		for(int i=1;i<n+1;i++){
			for(int j=1;j<m+1;j++){
				if(i-coin[j-1]>=0){
					table[i][j]=table[i-coin[j-1]][j]+table[i][j-1];
					}
				else
					table[i][j]=table[i][j-1];
				}
			}
		}
	
	public:
		Coin(){
			cin>>n>>m;
			coin=new int[m];
			for(int i=0;i<m;i++)
				cin>>coin[i];
			table=new long int*[n+1];
			for(int i=0;i<n+1;i++)
				table[i]=new long int[m+1];
			for(int i=0;i<n+1;i++)
				table[i][0]=0;
			for(int i=0;i<m+1;i++)
				table[0][i]=1;
			}
		long int getresult(){
			rendertable();
			return table[n][m];
			}
		};
	int main(){
		Coin A=Coin();
		cout<<A.getresult();
		return 0;
		}
