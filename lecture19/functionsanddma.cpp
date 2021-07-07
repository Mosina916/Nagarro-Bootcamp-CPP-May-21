#include<iostream>
using namespace std;
int* fun(int n){
	// int arrptr[5];
	int *arrptr=new int[n]; //5
	// taking values
	for(int i=0;i<n;i++){
		// cin>>arrptr[i];
		cin>>*(arrptr+i);
	}
	// arrptr= 8 6 4 5 3
	return arrptr;
}


// int fun(int *arr,int n){
// 	for(int i=0;=....){
// 		arr[i]=arr[i]+1;
// 	}
// }

// int f(int n){
// 	int arr[200];
// 	for (int i = 0; i < n; ++i)
// 	{
		
// 	}
// }
int main(){

	// int arr[]={5,4,6,7,8};
	int n;
	cin>>n; //5
	int *xptr=fun(n);
	for(int i=0;i<n;i++){
		cout<<xptr[i]<<" ";
	}
	cout<<endl;

	delete[]xptr;
	xptr=NULL;

	delete[]arrptr;




	return 0;
}