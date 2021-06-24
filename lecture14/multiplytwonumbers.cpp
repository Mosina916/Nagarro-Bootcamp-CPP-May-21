#include<iostream>
#include<cstring>
using namespace std; 
// multiply a and b
int multiply(int a,int b){ //a=3  b=4
	// base case
	if(b==0){
		return 0;
	}




	// recursive case
	int chotaans=multiply(a,b-1); //a=3  b=3-->9
	int badaans=a+chotaans;//3+9
	return badaans;
}



int main(){
	int a,b; 
	cin>>a>>b;
	cout<<"multiply of two numbers is "<<multiply(a,b)<<endl;



	return 0;
}