#include<iostream>
using namespace std;

int main(){

	// int arr[5]={3,4,5,6,7};
	// int n=sizeof(arr)/sizeof(int);

	int arr[10];
	int n=5;
	for(int i=0;i<n;i++){
		cin>>*(arr+i); //*(arr+i); arr[0]=*arr
	}

	// cout<<"name of array arr "<<arr<<endl; //0x7ffee1b42900 prints address
	// // arr[i]==*(arr+i);
	// cout<<"name of array arr[0] "<<&arr[0]<<endl;


	// cout<<"value of arr[0]"<<arr[0]<<" or "<<*(arr+0)<<endl;

	// cout<<"value of arr[1]"<<arr[1]<<" or "<<*(arr+1)<<endl;
	// cout<<"value of arr[2]"<<arr[2]<<" or "<<*(arr+2)<<endl;
	// cout<<"value of arr[3]"<<arr[3]<<" or "<<*(arr+3)<<endl;
	// cout<<"value of arr[4]"<<arr[4]<<" or "<<*(arr+4)<<endl;


	for(int i=0;i<n;i++){
		 cout<<"value of arr[i]"<<arr[i]<<" or "<<*(arr+i)<<endl;

	}






	return 0;
}