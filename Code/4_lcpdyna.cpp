#include <iostream>
#include <string>
#define NIL -1

using namespace std;

class LCP{
	string str1;
	string str2;
	int m, n;
	int** table;
	int max(int a, int b){
		return a>b?a:b;
		}
	
	public:
		LCP(){
			cout<<"\nEnter str1 : ";
			cin>>str1;
			m=str1.length();
			cout<<"\nEnter str2 : ";
			cin>>str2;
			n=str2.length();
			table=new int*[m+1];
			for(int i=0;i<m+1;i++)
				table[i]=new int[n+1];
			puttab();
			}

		void puttab(){
			int i, j;
			for(i=0;i<m+1;i++)
				table[i][0]=0;
			for(i=0;i<n+1;i++)
				table[0][i]=0;
			for(i=1;i<m+1;i++)
				for(j=1;j<n+1;j++){
					if(str1[i-1]==str2[j-1])
						table[i][j]=table[i-1][j-1]+1;
					else		
						table[i][j]=max(table[i][j-1],table[i-1][j]);
				}
			}
		int getlcp(){
			return table[m][n];
			}
	};


int main(){
	LCP a=LCP();
	cout<<a.getlcp();
	return 0;
	}
	

			
