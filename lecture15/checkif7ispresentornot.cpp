#include<iostream>
using namespace std;
bool is7presentornot(int *arr,int n){
	// base case
	if(n==0){
		return false;
	}

	// recursive case
	if(arr[0]==7){
		return true;
	}
	return is7presentornot(arr+1,n-1);
}
int firstindexof7(int *arr,int n,int i){ //i==0
	// base case
	if(i==n){
		return -1;
	}



	// recursive case
	if(arr[i]==7){
		return i;
	}
	return firstindexof7(arr,n,i+1);


}


void printallindices(int* arr,int n,int i){ //1 7 2 3 7  n=5,i=5
	// base case
	if(i==n){
		return;
	}


	// recursive case
	if(arr[i]==7){
		cout<<i<<" "; //1 4
	}
	printallindices(arr,n,i+1);
}



int main(){
	int n;
	cin>>n;
	int arr[100];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	if(is7presentornot(arr,n)){
		cout<<"7 is present in arr "<<endl;
	}
	else{
		cout<<"7 is not present in arr "<<endl;

	}

	cout<<"First index of 7 is "<<firstindexof7(arr,n,0)<<endl;

	printallindices(arr,n,0);
	cout<<endl;



	return 0;
}