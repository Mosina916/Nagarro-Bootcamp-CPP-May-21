#include<iostream>
#include <vector>
#include<stack>
using namespace std;
bool isbalanced(char*a){
	stack<char>s;
	for(int i=0;a[i]!='\0';i++){ //[{(a+b)+c*(d+e)}]
		char ch=a[i]; //ch-->[
		switch(ch){
			case '[':
			case '{':
			case '(': s.push(ch);
					  break;
			case ']':
					 if(!s.empty()&&s.top()=='['){
					 	s.pop();
					 }
					 else{
					 	return false;
					 }
					 break;

			case '}':
					if(!s.empty()&&s.top()=='{'){
					 	s.pop();
					 }
					 else{
					 	return false;
					 }
					 break;
			case ')':
					if(!s.empty()&&s.top()=='('){
					 	s.pop();
					 }
					 else{
					 	return false;
					 }


		}
	}
	// if(s.empty()){
	// 	return true;
	// }
	// return false;
	return s.empty();
}


int main(){
	// char a[]="([{(a+b)+c*(d+e)}])";
	char a[]="((())";
	if(isbalanced(a)){
		cout<<"it is balanced"<<endl;

	}
	else{
		cout<<"it is not balanced"<<endl;
	}


	




}