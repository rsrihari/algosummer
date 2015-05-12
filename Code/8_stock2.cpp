#include <iostream>

using namespace std;
	
class Stock{
	int n;
	int* arr;
	int* profit;
	int minval,maxval;
	int result;
	int max(int a, int b){
		return a>b?a:b;
		}
	void createtable(){
		maxval=arr[n-1];
		for(int i=n-2;i>=0;i--){
			if(arr[i]>maxval) maxval=arr[i];
			profit[i]=max(maxval-arr[i], profit[i+1]);
			}
		minval=arr[0];
		for(int i=1;i<n;i++){
			if(arr[i]<minval) minval=arr[i];
			profit[i]=max(profit[i-1],profit[i]+arr[i]-minval);
			}
		result=profit[n-1];
		}
	public:
		Stock(){
			cout<<"\nEnter number of stock days : ";
			cin>>n;
			profit=new int[n];
			for(int i=0;i<n;i++){
				profit[i]=0;
				}
			arr=new int[n];
			for(int i=0;i<n;i++)
				cin>>arr[i];
			createtable();
			}
		
		int getresult(){
			return result;
			}
			
	};

int main(){
		Stock A=Stock();
		cout<<A.getresult();
		return 0;
	}
			
