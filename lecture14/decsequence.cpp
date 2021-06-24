#include<iostream>
using namespace std; 
// print sequence in dec order from n to 1

void decseq(int n){ //6 5 4 3 2 1 0
	// base case
	if(n==0){
		return; //terminate
	}




	// recursive case 
	cout<<n<<endl; // o/p: 6 5 4 3 2 1
	decseq(n-1); //5 4 3 2 1 0


}

// print sequence in inc order from 1 to n

void incseq(int n){ 
	// base case
	if(n==0){
		return; //terminate
	}
	//1 2 3 4 5  n==5




	// recursive case 
	incseq(n-1); //5 4 3 2 1
	cout<<n<<endl; // o/p:1 2 3 4 5 



}
int main(){
	int n; //6
	cin>>n;
	cout<<"decreasing seq"<<endl;
	decseq(n);
	cout<<"increasing seq"<<endl;
	incseq(n); 


	return 0;
}