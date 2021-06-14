#include<iostream>
#include<cstring>
using namespace std;
int binarysearch(int *arr,int n,int key){
	int s=0;
	int e=n-1;
	//jab s bhi e k baravar hai mai tab b kaam kar rahi hun
	while(s<=e){
	int mid=(s+e)/2; //mid s and e -->indexes represent
	// mid pe key mil gayi
	if(arr[mid]==key){
		return mid;
	}
	else if(arr[mid]<key){
		s=mid+1;

	}
	else{
		e=mid-1;
	}

	}

	
	return -1;
	


}
int main(){
	int arr[]={1,3,4,5,6,7,9};
	int n=sizeof(arr)/sizeof(int);

	int key=9;
	// cin>>key;
	int ans=binarysearch(arr,n,key);
	cout<<"key is present at index "<<ans<<endl;



	return 0;
}