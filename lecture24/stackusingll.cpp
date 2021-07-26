#include<iostream>
#include <vector>
using namespace std;
class node{
public:
	int data;
	node*next;
	// constructor
	node(int d){
		data=d;
		next=NULL;
	}
};
class Stack{
	node*head;
	int len;
public:
	// constructor
	Stack(){
		head=NULL;
		len=0;
	}
	
	// 1 top
	int top(){
		return head->data;
		
	}
	// 2 push
	void push(int d){
		// insert at front
		node*n=new node(d);
		n->next=head;
		head=n;
		len++;
		
	}
	// 3 pop
	void pop(){
		// ll is empty
		if(head==NULL){
			return;
		}
		// single node in ll
		else if(head->next==NULL){
			delete head;
			head=NULL;
			len--;

		}
		// multiple nodes
		else{
			node*temp=head;
			head=head->next;
			delete temp;
			temp=NULL;
			len--;
		}
		
	}
	// 4 size
	int size(){
		return len;
		
	}
	// 5 empty
	bool empty(){
		return head==NULL;
		// return len==0;
		
	}


};


int main(){
	Stack s;
	s.push(1);
	s.push(4);
	s.push(6);
	s.push(7);
	s.push(9);
	// cout<<s.v[1]<<" "<<endl;
	//s-->1 4 6 7 9

	while(!s.empty()){
		cout<<s.top()<<endl;
		s.pop();
	}
	cout<<endl;
	return 0;




}