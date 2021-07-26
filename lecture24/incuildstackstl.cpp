#include<iostream>
#include <vector>
#include<stack>
using namespace std;

int main(){
	// 
	stack<int> s;
	s.push('a');
	s.push('b');
	s.push('c');
	s.push('d');
	s.push('e');
	// cout<<s.v[1]<<" "<<endl;
	//s-->1 4 6 7 9

	while(!s.empty()){
		cout<<s.top()<<endl;
		s.pop();
	}
	cout<<endl;
	return 0;




}