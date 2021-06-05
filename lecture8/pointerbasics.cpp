#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int a=10; //a 4 bytes
	float f=10.14; //f 4
	double d=38.24536; //d 8

	// cout<<"value of a is "<<a<<endl; //10
	// cout<<"value of f is "<<f<<endl; //10.14
	// cout<<"value of d is "<<d<<endl; //38.24536

	// //SIZE
	// cout<<"size of a is "<<sizeof(a)<<endl; // 4
	// cout<<"size of f is "<<sizeof(f)<<endl;// 4
	// cout<<"size of d is "<<sizeof(d)<<endl;// 4


	// // address
	// cout<<"address of a is "<<&a<<endl; //0x7ffeefb76928 //address are hexadecimal values
	// cout<<"address of f is "<<&f<<endl; //0x7ffeefb76924
	// cout<<"address of d is "<<&d<<endl; //0x7ffeefb76918

	// //sizeof address-->sabka same

	// cout<<"sizeof address of a is "<<sizeof(&a)<<endl; //8
	// cout<<"sizeof address of f is "<<sizeof(&f)<<endl;  //8
	// cout<<"sizeof address of d is "<<sizeof(&d)<<endl;  //8

	// int* aptr=&a; //initilization //aptr-->0x7ffeefb76928
	// float* fptr=&f; //fptr-->0x7ffeefb76924
	// double *dptr=&d;//dptr-->0x7ffeefb76918

	// cout<<"address of a is "<<aptr<<endl; //0x7ffeefb76928 //address are hexadecimal values
	// cout<<"address of f is "<<fptr<<endl; //0x7ffeefb76924
	// cout<<"address of d is "<<dptr<<endl; //0x7ffeefb76918


	// assignment
	int *aptr; //define ap;
	aptr=&a;//assignment;

	float* fptr;
	fptr=&f;

	double *dptr;
	dptr=&d;
	cout<<"address of a is "<<aptr<<endl; //0x7ffeefb76928 //address are hexadecimal values
	cout<<"address of f is "<<fptr<<endl; //0x7ffeefb76924
	cout<<"address of d is "<<dptr<<endl; //0x7ffeefb76918


	cout<<"address of a+1 is "<<aptr+1<<endl; //0x7ffeeae3492c
	cout<<"address of f+1 is "<<fptr+1<<endl; //0x7ffeeae34928 
	cout<<"address of d+1 is "<<dptr+1<<endl; //0x7ffeeae34920



	cout<<"address of a+2 is "<<aptr+2<<endl; //0x7ffeeae34930
	cout<<"address of f+2 is "<<fptr+2<<endl; //0x7ffeeae3492c
	cout<<"address of d+2 is "<<dptr+2<<endl; //0x7ffeeae34928






	// char ch='b';
	// cout<<"value of a is "<<ch<<endl; //a
	// cout<<"size of a is "<<sizeof(ch)<<endl; // 1
	// cout<<"address of a is "<<&ch<<endl; //hexadecimal address //they  give us the value of bucket till it get the null
	// // fooling of compiler
	// cout<<"address of a is "<<(void*)&ch<<endl;
	// cout<<"address of a is "<<(int*)&ch<<endl;
	// cout<<"address of a is "<<(float*)&ch<<endl;
	// cout<<"address of a is "<<(double*)&ch<<endl;













































	

	return 0;
}