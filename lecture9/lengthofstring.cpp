#include<iostream>
using namespace std;

// length(char arr[])

int length(char *arr){
	int co=0;
	int i=0;


	while(arr[i]!='\0'){
		co++;
		i++;


	}

	return co;
	
}

int main(){


	char arr[100];
	cin.getline(arr,100);// "coding blocks";

	cout<<"length of arr "<<length(arr)<<endl;



	return 0;
}