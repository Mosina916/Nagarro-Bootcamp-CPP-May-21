#include<iostream>
#include<cstring>
using namespace std;

int binarysearchrecursion(int *arr,int key,int s,int e){
	// base case
	if(s>e){
		return -1;
	}

	// recursive case
	int mid=(s+e)/2; //mid s and e -->indexes represent
	// mid pe key mil gayi
	if(arr[mid]==key){
		return mid;
	}
	else if(arr[mid]<key){
		return binarysearchrecursion(arr,key,mid+1,e);

	}
	else{
		return binarysearchrecursion(arr,key,s,mid-1);
	}


}

int main(){
	int arr[]={1,3,4,5,6,7,9};
	int n=sizeof(arr)/sizeof(int);

	int key=9;
	// cin>>key;
	int ans=binarysearchrecursion(arr,key,0,n-1);
	cout<<"key is present at index "<<ans<<endl;



	return 0;
}