#include<iostream>
using namespace std;
int main(){
	string s;
	cin>>s; //"9545" // count no of digits--> 4
	int i=0;
	if(s[i]=='9'){
		i++;

	}
	while(s[i]!='\0'){
		int digit=s[i]-'0'; //'9'-'0' -->9

		if(digit>=5){
			digit=9-digit; //9-9-->0 -->int

		}
		s[i]=digit+'0'; //0+'0' -->'0'
		i++;


	}
	cout<<s<<endl;


	return 0;
}