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

void reverse(char *arr){
	int i=0;
	int j=length(arr)-1;
	while(i<j){
		swap(arr[i],arr[j]);
		i++;
		j--;

	}

	
}

int main(){


	char arr[100];
	cin.getline(arr,100);// "hello" //olleh
	cout<<"before reverse "<<arr<<endl;
	reverse(arr);


	cout<<"After reverse "<<arr<<endl;




	return 0;
}