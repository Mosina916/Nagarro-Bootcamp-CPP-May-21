#include<iostream>
using namespace std;

void subsequences(char*in,int i,char*ou,int j){

	// Base case
	if(in[i]=='\0'){
		ou[j]='\0';
		cout<<ou<<" ";
		return;
	}

	// recursive case

	// exclude karo
	subsequences(in,i+1,ou,j);

	// include karo
	ou[j]=in[i];
	subsequences(in,i+1,ou,j+1);


}

int main(){
	char in[100],ou[100];
	cin>>in;
	subsequences(in,0,ou,0);


	return 0;
}