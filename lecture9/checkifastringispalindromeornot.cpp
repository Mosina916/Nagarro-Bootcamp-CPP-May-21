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

bool ispalindrome(char *arr){
	int i=0;
	int j=length(arr)-1;

	while(i<j){
		if(arr[i]!=arr[j]){
		return false;
	}
	i++;
	j--;


	}
	return true;
	
}

int main(){


	char arr[100];
	cin.getline(arr,100);// "coding blocks";

	 //cout<<"length of arr "<<length(arr)<<endl;


	// ispalindrome //true-->1
	if(ispalindrome(arr)){
		cout<<"arr is palindrome"<<endl;
	}
	else{
		cout<<"arr is not palindrome"<<endl;
	}



	return 0;
}