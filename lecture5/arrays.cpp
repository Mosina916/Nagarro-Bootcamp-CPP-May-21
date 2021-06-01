#include<iostream>
using namespace std;
int main(){
	// declare arrays
	// int arr[10];
	// arr[0]=2;
	// arr[1]=3;
	// arr[2]=5;
	// arr[3]=21;
	// arr[4]=32;
	// arr[5]=55;
	// arr[6]=27;
	// arr[7]=34;
	// arr[8]=57;
	// arr[9]=24;

	 // input manually 
	// int arr[10]={2,3,5,21,32,55,27,34,57,24};

	// input manually ignore size
	int arr[]={2,3,5,21,32,55,27,34,57,24,5,4,3,2,6,54}; //6*4=24 bytes /4=6 buckets
	// sizeof(int); //4 bytes

	int totalbuckets=sizeof(arr)/sizeof(int);


	cout<<"totalbuckets "<<totalbuckets<<endl;


	// you have to find size of this array



	// int a[20]={5}; //if you initilize some buckets of the array 
	// then rest of the buckets get initilized with 0

	// int a[20];

	// for(int i=0;i<=19;i++){
	// 	cout<<a[i]<<" ";
	// }


	// int b[10]={2,3,5,21,32,55,27,34,57,24};
	// for(int i=0;i<=19;i++){ //index out of bound
	// 	cout<<b[i]<<" ";
	// }



	cout<<endl;







	// user input
	// for(int i=0;i<=9;i++){
	// 	cin>>arr[i];
	// }


	// cout<<"value of arr[0] "<<arr[0]<<endl;
	// cout<<"value of arr[1] "<<arr[1]<<endl;
	// cout<<"value of arr[2] "<<arr[2]<<endl;
	// cout<<"value of arr[3] "<<arr[3]<<endl;

	// cout<<"value of arr[4] "<<arr[4]<<endl;
	// cout<<"value of arr[5] "<<arr[5]<<endl;
	// cout<<"value of arr[6] "<<arr[6]<<endl;
	// cout<<"value of arr[7] "<<arr[7]<<endl;
	// cout<<"value of arr[8] "<<arr[8]<<endl;
	// cout<<"value of arr[9] "<<arr[9]<<endl;

	// for(int i=0;i<=9;i++){
	// 	cout<<"value of arr[index] "<<arr[i]<<endl;
	// }
	



	
	
	




	return 0;
}