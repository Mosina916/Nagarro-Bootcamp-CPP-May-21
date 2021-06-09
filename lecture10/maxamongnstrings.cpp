#include<iostream>
using namespace std;
int length(char *arr){
	int co=0;
	int i=0;


	while(arr[i]!='\0'){
		co++;
		i++;


	}

	return co;
	
}

void copy(char *a,char *b){ //b mai copy karna hai a ko
	int i=0;
	int j=0;
	while(i<=length(a)){

		b[j]=a[i];
		i++;
		j++;

	}

}
int main(){

	int n; //total number of strings
	cin>>n; //2
	int maxlen=0;
	char maxstring[100];
	char arr[100];
	cin.ignore();
	for(int i=1;i<=n;i++){// i=4
		// take a string

		// what kite
		cin>>arr;//hello coding elephant jug
		//4 4
		int l=length(arr); //5 6 8 3
		// length 
		if(l>maxlen){  //4>0
			maxlen=l; //4
			copy(arr,maxstring); //what
		}
	}

	cout<<"max length string is "<<maxstring<<endl;
	cout<<"max length of string is "<<maxlen<<endl;


	


	return 0;
}