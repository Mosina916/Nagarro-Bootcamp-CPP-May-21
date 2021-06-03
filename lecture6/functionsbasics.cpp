#include<iostream>
using namespace std;

// e1
// void -->nothing to return
void print(){
	cout<<"hello world"<<endl;
	cout<<"hello hii world"<<endl;
	cout<<"hello world hii "<<endl;
	cout<<"hi world"<<endl;
	cout<<"h world"<<endl;
	cout<<"world"<<endl;


}
void sum(){ //no return no argument
	int sum=9+10;
	cout<<"sum is "<<sum<<endl;

}
int multiply(){ //with return no arguments
 	int m=8*3;
 	return m;

 }
// float multiply(){
//  	float m=8*3.51;
//  	return m;

//  }
bool israining(){
  	// return true;
  	return false;
  }


int sumthree(int a,int b,int c){ //with return with arguments
 	return a+b+c; //consider integer a b c
 }


void multiplythree(int x,float b,int c,char ch); //forward decleration


// call by value


int main(){

	// task 1
	// cout<<"hello world"<<endl;
	// cout<<"hello hii world"<<endl;
	// cout<<"hello world hii "<<endl;
	// cout<<"hi world"<<endl;
	// cout<<"h world"<<endl;
	// cout<<"world"<<endl;

	// function calling /function invoking
	// functionname();

	// print(); // function calling /function invoking
	// sum();
	// print();
	// sum();
	// sum();


	// multiply(); //return result //24


	// // direct print
	// cout<<"multiply of 8*3 is "<<multiply()<<endl; 


	// // store and then print

	// int x=multiply();
	// cout<<"multiply of 8*3 is "<<x<<endl; 


	// int mul=8*9;




	// task 2
	cout<<"sum of three numbers is "<<sumthree(7,4,8)<<endl;


	multiplythree(7,4.4,3,'A');



	
	

	return 0; //main return compiler //program terminate
}

void multiplythree(int x,float b,int c,char ch){ //no return with arguments
 	// return a+b+c; //consider integer a b c

 	cout<<"value is "<<x*b*c<<endl;
 	cout<<"value of ch is "<<ch<<endl;
 }