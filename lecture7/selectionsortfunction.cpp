



#include<iostream>
using namespace std;
void selectionsort(int arr[],int n){


	for(int i=0;i<=n-2;i++){
		int min=i;
		for(int j=i+1;j<=n-1;j++){
			if(arr[min]>arr[j]){
				min=j;
				
			}
		}
		// int a=a+b; 
		// int b=a-b;
		// int a=a-b;

		// arr[i]=arr[i]+arr[min];
		// arr[min]=arr[i]-arr[min];
		// arr[i]=arr[i]-arr[min];


		
		swap(arr[i],arr[min]);



		// swap(arr[i]-->a,arr[min]-->b);
		
	}
}
int main(){
	// int arr[5]={5,4,3,2,1};


	int arr[10];
	int n;
	cin>>n;//5
	for(int i=0;i<n;i++){ 
		cin>>arr[i];
	}


	cout<<"before sorting "<<endl;
	for(int i=0;i<n;i++){ 
		cout<<arr[i]<<" ";
	}
	cout<<endl;



	// sorting algorithm-->selection sort
	selectionsort(arr,n);


	// for(int i=0;i<=n-2;i++){
	// 	int min=i;
	// 	for(int j=i+1;j<=n-1;j++){
	// 		if(arr[min]>arr[j]){
	// 			min=j;
				
	// 		}
	// 	}
	// 	// int a=a+b;
	// 	// int b=a-b;
	// 	// int a=a-b;

	


	// 	// swap(arr[i]-->a,arr[min]-->b);
		
	// }

	cout<<"After sorting "<<endl;
	for(int i=0;i<n;i++){ 
		cout<<arr[i]<<" ";
	}
	cout<<endl;



	
	
	




	return 0;
}