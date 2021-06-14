#include<iostream>
#include<cstring>
using namespace std;
int main(){
	// datatype name; int ,char ,bool ,float ,double-->primitive datatypes

	// string s; //string -->class s-->uss class ka object
	// cin>>s; //cin ignore whitespace
	getline(cin,s); //i can take whole string
	// cout<<s<<endl;

	// // initilize strings
	// // way 1


	// string s1="coding blocks"; //initilization
	// cout<<s1<<endl;

	// // way 2

	// string s2("hello world");
	// cout<<s2<<endl;

	// // way 3

	// char arr[100]="qwerty asdfgh";
	// string s3(arr);
	// cout<<s3<<endl;
	// //way 4

	// string s4; //declare
	// s4="lotus ahgdf"; //assignment
	// cout<<s4<<endl;

	// concatenation //s5 concatenate s6  s5-->moonEarth  +

	// string s5,s6;
	// s5="moon";
	// s6="Earth";
	// cout<<"s5 --> "<<s5<<endl;
	// cout<<"s6 --> "<<s6<<endl;

	// s5=s5+s6; //conacatenation
	// cout<<"s5 --> "<<s5<<endl;
	// cout<<"s6 --> "<<s6<<endl;



	// // length //inbuild length();

	// cout<<"length of s5--> "<<s5.length()<<endl;

	// cout<<"length of s6--> "<<s6.length()<<endl;

	// compare strings

	// string s7,s8;
	// s7="abc";
	// s8="ab";
	// if(s7>=s8){
	// 	cout<<"s7 is greater than s8"<<endl;
	// }
	// else{
	// 	cout<<"s8 is greater than s7"<<endl;

	// }


	// substring of string -->part of string -->single char can be called as substring
	// string s9="hello world this is coding blocks";
	// cout<<s9.substr(2)<<endl; //s9.substr(2)-->index jahan se print karana hai

	// cout<<s9.substr(2,10)<<endl; 


	// push -back

	string s10="hell";
	cout<<s10<<endl;
	s10.push_back('o');
	s10.push_back('w');

	cout<<s10<<endl;

	// pop_back

	s10.pop_back(); //last ka character nikalta hai

	cout<<s10<<endl;












	// s5="moonEarth";
	// s6="Earth";










	



	return 0;
}