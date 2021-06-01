#include<iostream>
using namespace std;
int main(){
	// int arr[10]={1,2,3,4,5,6,7,8,9,10};
	// for(int i=0;i<=10;i++){
	// 	cout<<arr[i]<<" ";
	// }


	// int n;
	// cin>>n;
	// int arr[n]; //don't do this

	int arr[10];
	for(int i=0;i<=9;i++){
		cin>>arr[i];
	}
	for(int j=9;j>=0;j--){
		cout<<arr[j]<<" ";
	}


	
	
	
	




	return 0;
}