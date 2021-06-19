#include<iostream>
using namespace std;
int main(){
	int t; //2
	cin>>t;
	string s1,s2,rs="";  //rs null string
	while(t--){
		cin>>s1>>s2; //10111 10000 -->xor(same no-->0, different no-->1)  0111 1000 
		for(int i=0;i<s1.length();i++){ //i--5
			if(s1[i]==s2[i]){
				rs.append("0"); 

			}
			else{
				rs.append("1"); //001111 

			}
		}



		cout<<rs<<endl; //00111
		rs.clear(); //""
		// rs="";




	}

	return 0;
}