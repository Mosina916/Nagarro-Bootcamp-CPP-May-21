#include<iostream>
using namespace std; 
// recursion -->function calling itself
// way 1 -->by shrinking array from forward
int sumofarrayelements(int *a,int n){ //4 5 8 n=3
	// base case
	// if(n==1){
	// 	return a[0];
	// }
	if(n==0){
		return 0;
	}




	// recursive case

	return a[0]+sumofarrayelements(a+1,n-1);





}

// way 2 using iterator

int sumofarrayelementsusingiterator(int *a,int n,int i){ //4 5 8 n=3
	// base case
	if(i==n){
		return 0;
	}
	

	// recursive case

	return a[i]+sumofarrayelementsusingiterator(a,n,i+1);


}

// way 3 -->by shrinking array from backward
int sumofarrayelementsfrombackward(int *a,int n){ //4 5 8 n=3
	// base case
	// if(n==0){
	// 	return 0;
	// }
	if(n==1){
		return a[n-1];
	}





	// recursive case
	return sumofarrayelementsfrombackward(a,n-1)+a[n-1];





}






int main(){
	int a[]={3,2,1,4,5};
	int n=sizeof(a)/sizeof(int);
	int ans=sumofarrayelements(a,n);
	cout<<"Total sum is "<<ans<<endl;

	int ans2=sumofarrayelementsusingiterator(a,n,0);
	cout<<"Total sum is "<<ans2<<endl;

	int ans3=sumofarrayelementsfrombackward(a,n);
	cout<<"Total sum is "<<ans3<<endl;






	return 0;
}