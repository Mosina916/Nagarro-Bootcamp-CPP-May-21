#include<iostream>
using namespace std;
int uniqueno3(int *arr,int n){
	int freq[64]={0};
	// count bits on every position
	for(int j=0;j<n;j++){
		int i=0;
		int no=arr[j]; // no-->5-->101
		while(no>0){
			freq[i]=freq[i]+(no&1);  
			i++; 
			no=no>>1; 


		}


		
		





	}

	// for (int i = 0; i < 64; ++i)
	// 	{
	// 		cout<<freq[i]<<" ";
	// 	}
	// 	cout<<endl;

		int mul=1;
		int ans=0;

	for (int i = 0; i < 64; ++i)
		{
			freq[i]=freq[i]%3; //0
			ans=ans+freq[i]*mul; //2

			mul=mul*2; //8




		}
		// cout<<endl;


		

		// for (int i = 0; i < 64; ++i)
		// {
		// 	cout<<freq[i]<<" ";

		// }
		// cout<<endl;

		return ans;


}
int main(){
	int n;
	cin>>n;
	int arr[1000000];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}

	cout<<uniqueno3(arr,n)<<endl;



	



	return 0;
}