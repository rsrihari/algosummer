#include <iostream>
#include <string>
#define NIL -1
#define R 1
#define D 1
#define I 1


using namespace std;

class EditDist{
	string str1;
	string str2;
	int m, n;
	int** table;
	int min(int a, int b, int c){
		return a<b?a<c?a:c:b<c?b:c;
		}
	
	public:
		EditDist(){
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
			int del, ins, rep;
			for(i=0;i<m+1;i++)
				table[i][0]=i;
			for(i=0;i<n+1;i++)
				table[0][i]=i;
			for(i=1;i<m+1;i++)
				for(j=1;j<n+1;j++){
					rep=table[i-1][j-1]+R*(int(str1[i-1]!=str2[j-1]));
					ins=table[i-1][j]+I;
					del=table[i][j-1]+D;
					table[i][j]=min(rep, ins, del);
				}
			cout<<"\nTable\n";
			for(i=0;i<m+1;i++){
				for(j=0;j<n+1;j++){
					cout<<table[i][j]<<" ";
					}
				cout<<"\n";
				}				
			}
		int getcost(){
			return table[m][n];
			}
	};


int main(){
	EditDist a=EditDist();
	cout<<a.getcost();
	return 0;
	}
	

			
