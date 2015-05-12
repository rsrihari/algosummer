#include <iostream>

using namespace std;
	
class Stock{
	int n;
	int* arr;
	int** table;
	int maxval;
	void createtable(){
		int max=arr[n-1],min=arr[0];
		for(int i=0;i<n;i++){
			if (arr[i]<min)
				min=arr[i];
			table[i][0]=min;
			}
		for(int i=n-1;i>=0;i--){
			if (arr[i]>max)
				max=arr[i];
			table[i][1]=max;
			}
		maxval=0;
		for(int i=0;i<n;i++){
			int temp=table[i][1]-table[i][0];
			if(temp>maxval) maxval=temp;
			}
		}
	public:
		Stock(){
			cout<<"\nEnter number of stock days : ";
			cin>>n;
			table=new int*[n];
			for(int i=0;i<n;i++){
				table[i]=new int[2];
				}
			arr=new int[n];
			for(int i=0;i<n;i++)
				cin>>arr[i];
			createtable();
			}
		
		int getresult(){
			return maxval;
			}
			
	};

int main(){
		Stock A=Stock();
		cout<<A.getresult();
		return 0;
	}
			
