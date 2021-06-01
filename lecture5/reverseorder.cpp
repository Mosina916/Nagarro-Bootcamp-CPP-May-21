#include<iostream>
using namespace std;
int main(){
	int arr[10];
	// user input for every bucket
	for(int i=0;i<=9;i++){
		cin>>arr[i];
	}


	// 2-->0 3-->1 5-->2 4-->3 7 6 1 8 9-->8 6-->9

	// reverse order

	for(int i=9;i>=0;i--){
		cout<<arr[i]<<" ";
	}
	cout<<endl;

	
	
	
	
	




	return 0;
}