#include<iostream>
#include<climits>
using namespace std;

void updatearray(int z[],int n){ //array datatype name[] or datatype name[size]
	for(int i=0;i<=n-1;i++){
		z[i]=z[i]+2;
	}


}


int main(){
	int arr[]={2,3,4,5,6,7,8};
	int n=sizeof(arr)/sizeof(int); //7
	// task --> every element should get 2 added

	cout<<"before update array"<<endl;
	for(int i=0;i<=n-1;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;


	updatearray(arr,n);
	
	// arr-->{4,5,6,7,8,9,10};

	cout<<"After update array"<<endl;


	for(int i=0;i<=n-1;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;






	return 0;
}