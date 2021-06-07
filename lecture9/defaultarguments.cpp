#include<iostream>
using namespace std;

// int add(int a,int b){
// 	return a+b;

// }

// int add2(int a,int b,int c){
// 	return a+b+c;

// }

// int add3(int a,int b,int c,int d){
// 	return a+b+c+d;

// }


// default arguments
int addfinal(int a=0,int b=0,int c=0,int d=0,int e=0,int f=0,int g=0){
	return a+b+c+d+e; //a==9 b==404 c=12
}

int main(){
	int x=10;
	int y=60;
	// cout<<add(x,y)<<endl;


	// cout<<add2(2,3,4)<<endl;


	// cout<<add3(5,66,3,9)<<endl;


	cout<<addfinal()<<endl;
	cout<<addfinal(90,40)<<endl; //130

	cout<<addfinal(9,404,12)<<endl;

		cout<<addfinal(9,404,12,34)<<endl;

	


	return 0;
}