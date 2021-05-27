#include<iostream>
using namespace std;
int main(){ //start point 
	// take the input
	// declare the buckets
	int p,r,t; //contraint is p r t int
	cin>>p>>r>>t; //10 1 1
	// si=p*r*t/100 //10/100;0.1
	float si;
	si=p*r*t/100.0; //in assignment operator rhs is calculated and put in lhs
	// si=(1.0*p*r*t)/100;

	cout<<"simple intrest is "<<si<<endl;
	
	



	return 0; //succesufully executed
}