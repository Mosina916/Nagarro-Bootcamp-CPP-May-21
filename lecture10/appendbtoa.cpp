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
int main(){
	char a[100];
	char b[100];
	// cin>>a; //hello

	cin.getline(a,100);
	cin>>b;//world;
	cout<<"char arr a "<<a<<endl; //hello
	cout<<"char arr b "<<b<<endl; //world;
	int j=length(a); //5
	int i=0;

	// while(i<=length(b)){
	// 	a[j]=b[i];
	// 	j++;
	// 	i++;


	// }

	while(b[i]!='\0'){
			a[j]=b[i];
		j++;
		i++;

	}
	a[j]='\0';
	cout<<"char arr a "<<a<<endl; //helloworld
	cout<<"char arr b "<<b<<endl; //world;

	






	return 0;
}