#include <iostream>
#include <string>
#define NIL -1



using namespace std;

class SUBSUM{
		int* arr;
		int arr_size, r,s;
		int** table;
		int* result1, *result2;
		/*void findall(int sum){
			int i, j;
			for(i=0;i<arr_size+1;i++)
				table[i]=new int[sum+1];
			for(i=0;i<arr_size+1;i++)
				table[i][0]=1;
			for(i=0;i<sum+1;i++)
				table[0][i]=0;
			table[0][0]=1;
			for(i=1;i<arr_size+1;i++)
				for(j=1;j<sum+1;j++){
					table[i][j]=table[i-1][j];
					int temp=j-arr[i-1];
					if(temp>=0)
						table[i][j]=(table[i][j]+table[i-1][temp])%1000000007;
					}
			for(i=0;i<arr_size+1;i++){
				for(j=0;j<sum+1;j++)
					cout<<table[i][j]<<" ";
				cout<<"\n";
				}
			return table[arr_size][sum]; 
			}*/
	
	void gointo(int row, int column, int* result, int level){
		if(row==0){
			return;}
		int temp=column-arr[row-1];
		if(temp==0)
			result[level]+=1;
		gointo(row-1, column, result, level);
		if(temp>0)
			gointo(row-1,temp, result, level+1);
		return;
		}
			
	public:
		SUBSUM(){
			cin>>arr_size;
			arr=new int[arr_size];
			cin>>r>>s;
			for(int i=0;i<arr_size;i++)
				cin>>arr[i];
			table=new int*[arr_size+1];
			}

		int val()
			{
				int sum1=(r+s)/2;
				int sum2=(r-s)/2;
				result1=new int[arr_size];
				result2=new int[arr_size];
				for(int i=0;i<arr_size;i++){
					result1[i]=0;
					result2[i]=0;
					}
				gointo(arr_size, sum1, result1, 1);
				gointo(arr_size, sum2, result2, 1);
				int temp=0;
				
				for(int i=0;i<arr_size;i++){
					cout<<result1[i]<<" "<<result2[i]<<"\n";
					temp+=result1[i]*result2[i];
					}
				return temp;
			}
	};


int main(){
	SUBSUM a=SUBSUM();
	cout<<a.val();
	return 0;
	}
	

			
