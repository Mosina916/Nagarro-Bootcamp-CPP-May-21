#include<iostream>
using namespace std;

void mergetwosortedarr(int *arr,int s,int e){
	int mid=(s+e)/2;
	int i=s; //sa1
	int j=mid+1; //sa2
	int temp[1000000];
	int k=s; //temp arr


	while(i<=mid&&j<=e){
		if(arr[i]<arr[j]){
		temp[k]=arr[i];
		k++;
		i++;

	}
	else{
		temp[k]=arr[j];
		k++;
		j++;
	}

	}
	// agar pehle part mai bachta

	while(i<=mid){
		temp[k]=arr[i];
		k++;
		i++;
	}
	// agar dusre part mai bachta
	while(j<=e){
		temp[k]=arr[j];
		k++;
		j++;
	}
	// copy the sorted array from temp to arr back
	for(int i=s;i<=e;i++){
		arr[i]=temp[i];

	}

	
}
void mergesort(int *arr,int s,int e){
	// base case
	if(s>=e){
		return;
	}

	// recursive case
	int mid=(s+e)/2;
	mergesort(arr,s,mid); //pehle part ka sorted dega //1 2 4
	mergesort(arr,mid+1,e); //dusre part ka sorted o/p dega // 3 5
	mergetwosortedarr(arr,s,e);
}
int main(){
	int n;
	cin>>n;
	int arr[1000000];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	mergesort(arr,0,n-1);
	for (int i = 0; i <n; ++i)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;


	return 0;
}