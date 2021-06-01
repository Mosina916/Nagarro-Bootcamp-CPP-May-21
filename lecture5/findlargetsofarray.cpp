#include<iostream>
#include<climits>
using namespace std;
int main(){
	// int arr[]={3,1,6,9,4,2,5,8,18};
	// int n=sizeof(arr)/sizeof(int); // 8
	// int largest=INT_MIN; //18
	// for(int i=0;i<=8;i++){
	// 	if(arr[i]>largest){
	// 		largest=arr[i];

	// 	}

	// }


	// in general


	int arr[100];
	int n;
	cin>>n; //10
	for(int i=0;i<n;i++){
		cin>>arr[i]; //

	}

	int largest=INT_MIN; //-2^31
	for(int i=0;i<n;i++){
		if(arr[i]>largest){
			largest=arr[i];

		}

	}

	cout<<"largest value is "<<largest<<endl;



	return 0;
}