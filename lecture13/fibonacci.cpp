#include<iostream>
using namespace std; 
// recursion -->function calling itself
int fibo(int n){ //4

	// base case
	if(n==0||n==1){
		return n;
	}


	// recursive case //pure assumption
	int ans1=fibo(n-1);  //2
	int ans2=fibo(n-2); //1

	int fans=ans1+ans2; //store karke ans calculate kar rahi hun

	return fans;


}

int fibo2(int n){ //4

	// base case
	if(n==0||n==1){

		return n;
	}


	// recursive case //pure assumption
	

	return fibo2(n-1)+fibo2(n-2); //2+1


}

int main(){
	int n;
	cin>>n;

	for(int i=0;i<=n;i++){
		cout<<i<<"th fibonacci number is "<<fibo(i)<<endl; //4

	}


	// cout<<n<<"th fibonacci number is "<<fibo2(n)<<endl; //4



	return 0;
}