#include<iostream>
#include<climits>
using namespace std;

int sumofarray(int arr[],int n){
	int sum=0;
	for(int i=0;i<=n-1;i++){
		sum=sum+arr[i]; //2

	}

	// cout<<"sum is "<<sum<<endl;
	return sum;


}



int main(){
	int arr[]={2,3,4,5,6,7,8,5};
	int n=sizeof(arr)/sizeof(int); //7
	// task --> add all the elements of array


	cout<<"sum is "<<sumofarray(arr,n)<<endl;

	




	





	return 0;
}