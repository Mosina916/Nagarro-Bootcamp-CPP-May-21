#include<iostream>
#include<cstring>
using namespace std;
string moveallxatend(string s){
	// base case
	if(s.length()==0){
		string p="";
		return p;
	}

	// recursive case //s-->x
	string st=s.substr(0,1);// st-->"x"
	string chotistring=moveallxatend(s.substr(1)); //bxcx-->bcxx pure assumption

	// check if st is char or x
	if(st=="x"){
		string badistring=chotistring+st; //bcxxx
		return badistring;

	}
	else{
		string badistring=st+chotistring;
		return badistring;
	}

}


int main(){
	string s;
	cin>>s;
	string x=moveallxatend(s);
	cout<<"o/p string is "<<x<<endl;


	return 0;
}