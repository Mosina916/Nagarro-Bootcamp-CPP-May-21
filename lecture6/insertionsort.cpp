#include<iostream>
using namespace std;
int main(){
	// int arr[5]={5,4,3,2,1};


	int arr[10];
	int n;
	cin>>n;//5
	for(int i=0;i<n;i++){ 
		cin>>arr[i];
	}


	cout<<"before sorting "<<endl;
	for(int i=0;i<n;i++){ 
		cout<<arr[i]<<" ";
	}
	cout<<endl;



	// sorting algorithm-->insertion sort
	int j;
	int current;


	for(int i=1;i<=n-1;i++){ // 5-->0 4-->1 1-->2 3-->3 2-->4
		current=arr[i];

		for(j=i-1;j>=0&&arr[j]>current;j--){
			// IF()
			arr[j+1]=arr[j];
			// ELSE{
			// 	BREAK;
			// }


		}
		arr[j+1]=current;
	}

	// int A=a;
	// int B=b;
	// A=A^B;  a^b;
	// B=B^A; b^(a^b)=a;
	// A=A^B; (a^b)^a






	cout<<"After sorting "<<endl;
	for(int i=0;i<n;i++){ 
		cout<<arr[i]<<" ";
	}
	cout<<endl;



	
	
	




	return 0;
}