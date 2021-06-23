#include<iostream>
using namespace std; 
// recursion -->function calling itself
int factorial(int n){ //n-->4
	// base case //smallest case-->stopping condition
	if(n==0){
		return 1;
	}


	// recursive case // pure  assumption //store
	int chotafact=factorial(n-1); //i assigned this work to pesron B //3!=6



	// using above two steps to calculate the result
	int badaans=n*chotafact;  //4*6=24
	return badaans;


}

int factorial2(int n){ //n-->4
	// base case //smallest case-->stopping condition
	if(n==0){
		return 1;
	}


	// recursive case // pure  assumption
	return n*factorial2(n-1); //without storing


}
int main(){
	int n;
	cin>>n;
	cout<<"factorial of "<<n<<" is "<<factorial(n)<<endl; //4
	cout<<"factorial2 of "<<n<<" is "<<factorial2(n)<<endl; //4



	return 0;
}