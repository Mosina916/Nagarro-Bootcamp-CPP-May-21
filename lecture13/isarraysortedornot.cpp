#include<iostream>
using namespace std; 
// recursion -->function calling itself
bool isarraysortedornot(int *a,int n){ //4 5 8 n=3
	// base case
	// if(n==1){
	// 	return true;
	// }
	if(n<=1){
		return true;
	}



	// recursive case
	bool chotepartkaans=isarraysortedornot(a+1,n-1);
	if(chotepartkaans==true&&a[0]<=a[1]){
		return true;

	}
	return false;




}

int main(){
	int a[]={1,4,5,8,7,9,10};
	int n=sizeof(a)/sizeof(int);
	bool ans=isarraysortedornot(a,n);
	if(ans==true){
		cout<<"Array is sorted"<<endl;
	}
	else{
		cout<<" Array is not sorted"<<endl;
	}



	return 0;
}