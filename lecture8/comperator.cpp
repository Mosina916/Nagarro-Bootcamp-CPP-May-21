#include<iostream>
#include<algorithm>
using namespace std;

bool alpha(int a,int b){

	cout<<"value of a is "<<a<<" and value of b is "<<b<<endl;
	return a<b; //increasing order
	// return a>b; //decreasing order
}
int main(){
	int arr[20]={5,6,2,1,9,0,3,7};
	int s=sizeof(arr)/sizeof(int); //8
	cout<<"Before sorting"<<endl;
	for (int i = 0; i < s; ++i)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;


	// sort(start,end); //inbuild function 
	// sort(arr,arr+s);//increasing order
	sort(arr,arr+s,alpha); //comperator

	cout<<"After sorting"<<endl;
	for (int i = 0; i < s; ++i)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;



	return 0;
}