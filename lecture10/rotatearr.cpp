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

	
	int n;
	cin>>n;
	char arr[100];
	cin.ignore();

	cin>>arr; //hello
	int lenarr=length(arr); //5

	// shifting every element by n times

	int i=length(arr)-1;
	while(i>=0){
		arr[i+n]=arr[i];

		i--;
	}

	// n charcters ko aage shift karna hai
	int s=0; 
	int j=lenarr;//5
	for(int i=1;i<=n;i++){
		arr[s]=arr[j];
		j++;
		s++;


	}
	arr[lenarr]='\0';
	cout<<"final string is "<<arr<<endl;


	return 0;
}