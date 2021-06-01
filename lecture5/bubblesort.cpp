#include<iostream>
using namespace std;
int main(){
	// int arr[5]={5,4,3,2,1};


	int arr[10];
	int n;
	cin>>n;//5
	for(int i=0;i<n;i++){ //0 1 2 3 4
		cin>>arr[i];
	}


	cout<<"before sorting "<<endl;
	for(int i=0;i<n;i++){ //0 1 2 3 4
		cout<<arr[i]<<" ";
	}
	cout<<endl;



	// sorting algorithm-->bubble sort


	for(int i=0;i<=n-2;i++){
		for(int j=0; j<=n-2-i;j++){
			// if(arr[j](a)>arr[j+1](b)){
			if(arr[j]>arr[j+1]){
				// position change

				// 3rd varible temp use
				// int t=arr[j]; //a=4,b=5 int temp=4; a=b; b=temp;
				// arr[j]=arr[j+1];
				// arr[j+1]=t;

				// without using 3rd variable
				// arr[j]=arr[j]+arr[j+1];
				// arr[j+1]=arr[j]-arr[j+1];
				// arr[j]=arr[j]-arr[j+1];


				// swap inbuild
				// swap(arr[j],arr[j+1]);


				// one line swap
				arr[j+1]=(arr[j]+arr[j+1])-(arr[j]=arr[j+1]);

				



			}
		}

	}



	cout<<"After sorting "<<endl;
	for(int i=0;i<n;i++){ //0 1 2 3 4
		cout<<arr[i]<<" ";
	}
	cout<<endl;



	
	
	




	return 0;
}