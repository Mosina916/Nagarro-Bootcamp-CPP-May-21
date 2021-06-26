#include<iostream>
using namespace std;


void bubblesortrecursion(int *arr,int n,int i){
	// base case
	if(i<=n-2){
		return;
	}

	// recursive case //5 4 3 2 1
		for(int j=0; j<=n-2-i;j++){
			// if(arr[j](a)>arr[j+1](b)){
			if(arr[j]>arr[j+1]){
				// position change
				// swap inbuild
				swap(arr[j],arr[j+1]);
			}
		}

		// 4 3 2 1 5

		bubblesortrecursion(arr,n,i+1);

}


// i=0,j=0,arr={5,4,3,2,1};,n=5
void bubblesortpurerecursion(int *arr,int n,int i,int j){ 
	// base case
	if(i==n-1){
		return;
	}
	if(j==n-1-i){
		bubblesortpurerecursion(arr,n,i+1,0);

	}
	else{
		if(arr[j]>arr[j+1]){
				// position change
				// swap inbuild
				swap(arr[j],arr[j+1]);
			}
			bubblesortpurerecursion(arr,n,i,j+1);

	}
}
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


	// bubblesortrecursion(arr,n,0);
	bubblesortpurerecursion(arr,n,0,0);


	cout<<"After sorting "<<endl;
	for(int i=0;i<n;i++){ //0 1 2 3 4
		cout<<arr[i]<<" ";
	}
	cout<<endl;



	
	
	




	return 0;
}