#include<iostream>
using namespace std;
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


	for(int i=0;i<=n-2;i++){
		int min=i;
		for(int j=i+1;j<=n-1;j++){
			if(arr[min]>arr[j]){
				min=j;
				
			}
		}
		swap(arr[i],arr[min]);
		
	}

	cout<<"After sorting "<<endl;
	for(int i=0;i<n;i++){ 
		cout<<arr[i]<<" ";
	}
	cout<<endl;



	
	
	




	return 0;
}