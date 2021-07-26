#include<iostream>
#include <vector>
using namespace std;
template<typename T> //templates -->code generic 

class Stack{
	vector<T>v;
	// vector<char>v;

	
public:
	
	// 1 top
	T top(){
	// char top(){
		return v[v.size()-1];
	}
	// 2 push
	void push(T d){
	// void push(char d){
		v.push_back(d);
	}
	// 3 pop
	void pop(){
		v.pop_back();
	}
	// 4 size
	int size(){
		return v.size();
	}
	// 5 empty
	bool empty(){
		return v.size()==0; //-->true ,false
	}


};


int main(){
	// Stack<int> s;
	Stack<int> s;
	// s.push(1);
	// s.push(4);
	// s.push(6);
	// s.push(7);
	// s.push(9);
	s.push('a');
	s.push('b');
	s.push('c');
	s.push('d');
	s.push('e');
	

	while(!s.empty()){
		cout<<s.top()<<endl;
		s.pop();
	}
	cout<<endl;
	return 0;




}