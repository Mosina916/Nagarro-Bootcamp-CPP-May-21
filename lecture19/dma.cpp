#include<iostream>
using namespace std;
int main(){
	// sma
	//int a;
	// a=50;
	// dma to variables 
	int *aptr=new int; //new -->return address
	*aptr=50;

	cout<<*aptr<<endl;
	// sma
	// float f;
	// f=14.97;

	// dma

	float *fptr=new float;
	*fptr=14.97;

	cout<<*fptr<<endl;

	delete aptr;//free memory
	aptr=NULL;

	delete fptr;
	fptr=NULL;


	// array

	// sma
	// int arr[100];//internal pointer cin>>arr[i]
	// dma
	int *arrptr=new int[100]; //arrptr-->pointing to 1st bucket of array

	//taking i/p
	for(int i=0;i<5;i++){
		// cin>>arrptr[i];
		cin>>*(arrptr+i);

	}
	// printing array

	for(int i=0;i<5;i++){
		// cout<<arrptr[i]<<" ";

		cout<<*(arrptr+i)<<endl;

	}
	cout<<endl;


	// array delete

	delete[] arrptr;
	arrptr=NULL;

	int n;
	cin>>n;
	// int arr[n];this is wrong

	// int *arrptr=new int[n];











	return 0;
}