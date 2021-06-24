#include<iostream>
using namespace std; 
// power x^n x=2 ,n=3  ans=8
int powerxn(int x,int n){ //x=2 n=4
	// base case
	if(n==0){
		return 1;

	}
	// if(n==1){
	// 	return x;

	// }



	// recursive case
	int chotaans=powerxn(x,n-1);// x=2 n=3 -->8
	int badaans= x*chotaans;
	return badaans;

}


int main(){
	int x,n;
	cin>>x>>n;
	cout<<"power of "<<x<<" and "<<n<<" is "<<powerxn(x,n)<<endl;


	

	return 0;
}