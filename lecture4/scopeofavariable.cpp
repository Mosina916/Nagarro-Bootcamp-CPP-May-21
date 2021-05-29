#include<iostream>
using namespace std;
// global scope
int a=230;
// const int b=199;
// scope 3


int main(){

	int a=10;
	int b=70; //you can make varibles of same name in two different scopes 
	// scope

	::a=::a+10;

	// scope 1
	if(a>1){
		// int a=50;
		int b=30; //b=30
		cout<<"value of a is "<<::a<<endl; //1 10 230
		cout<<"value of b is "<<b<<endl; //2 30 30
	}
	// scope 2
	else{
		a++;
		cout<<"value of a is "<<a<<endl; //3  11
		
	}

		cout<<"value of a is "<<a<<endl; //4 10 230
		cout<<"value of b is "<<b<<endl; //70  70//5  garbage error 30 undefined

	




	return 0;
}
