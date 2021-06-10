#include<iostream>
using namespace std;
int main(){
	// syntax
	// datatype arrname[rows][cols]
	// initilize way 1
	// char arr[3][3]={
	// 	{'A','B','C'},
	// 	{'D','E','F'},
	// 	{'G','H','I'}
	// };
	// cout<<arr[0]<<endl; // ABCDEFGHI garbage till null
	// cout<<arr[1]<<endl; //DEFGHI garbage till null
	// cout<<arr[2]<<endl; //GHI garbage till null

	char arr[][4]={
		{'A','B','C','\0'},
		{'D','E','F','\0'},
		{'G','H','I','\0'}
	};


	cout<<"address of arr "<<arr<<endl; //address array

	cout<<arr[0]<<arr[1]<<arr[2]<<endl; // ABC //address ist row
	// cout<<arr[1]<<endl; //DEF
	// cout<<arr[2]<<endl; //GHI


	char arr1[][8]={
		"kartik",
		"coding",
		"hello",
		"blocks",
		"mike",
		"umbrell"
	};

	cout<<arr1[0]<<endl; 
	cout<<arr1[1]<<endl; 
	cout<<arr1[2]<<endl; 
	cout<<arr1[3]<<endl; 
	cout<<arr1[4]<<endl; 


	







	return 0;
}