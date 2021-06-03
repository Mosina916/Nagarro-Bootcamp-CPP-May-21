#include<iostream>
using namespace std;

void updatea(int z){
	//you can create variables of same name in two different scopes
	z=z+1; //this a is diffrent than the a present in main
	cout<<"value of a inside update function is "<<a<<endl; //11
	


}
int main(){
	int a=10;
	cout<<"value of a inside main is "<<a<<endl; //10

	updatea(a);

	cout<<"value of a inside main after update is "<<a<<endl; //10
	

	return 0; //main return compiler //program terminate
}
