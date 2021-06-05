#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int radius=10;
	// int *rptr=&radius;//initilization

	// int *rptr;

	int *rptr=NULL; //we say pointers they should always get initilized with NULL
	// int *rptr=0;
	cout<<"circumfrence of circle is "<<2*3.14*radius<<endl; //direct variable
	cout<<"circumfrence of circle is "<<2*3.14*(*rptr)<<endl;//derefrence operator



	return 0;
}