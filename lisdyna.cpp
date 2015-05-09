#include <iostream>
#define MAX 100

using namespace std;


class LIS{
	int arr[MAX];
	int* maxend;
	int n;
	public:
		LIS(){
			populate();
			maxending();
			}
		void populate(){
			int i;
			cout<<"\nEnter number of elements : ";
			cin>>n;	
			maxend=new int[n];
			cout<<"\n Enter "<<n<<" elements\n";		
			for(i=0;i<n;i++){
				cin>>arr[i];
				}
			}
		void maxending(){
			int i,j;
			for(i=0;i<n;i++)
				maxend[i]=1;
			for(i=0;i<n;i++){
				for(j=0;j<i;j++){
					if(maxend[j]+1>maxend[i] && arr[j]<arr[i]){
						maxend[i]=maxend[j]+1;
						}
					}
				}
			}
		int lis(){
			int max=maxend[n-1], i;
			for(i=0;i<n-1;i++)
				if(maxend[i]>max)
					max=maxend[i];
			return max;				
			}
	};

int main()
	{
		LIS a=LIS();
		cout<<a.lis();
		return 0;
	}

			
	

				
	
