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
class Queue{
	node*head;
	node*tail;
	int len;
	// constructor

public:

	Queue(){
		head=NULL;
		tail=NULL;
		len=0;
	}

	// push
	void push(int data){
	// pehle node banega jisko point n karega

	node*n=new node(data);
	// 1. ll is empty
	if(head==NULL){
		head=tail=n; //pehla node create hoga ll ka
		// len++;


	}
	// 2. ll is not empty
	else{
		tail->next=n;
		tail=n;
		// len++

	}
	len++;


}


	// pop
	void pop(){
	// 1 ll is empty
	if(head==NULL){
		return;

	}
	// 2 ll contains only one node
	else if(head->next==NULL){
		delete head;
		head=tail=NULL; //ll empty ho jayega 
		len--;

	}
	// 3 multiple nodes hai ll mai
	else{
		node*n=head;
		head=head->next;
		delete n;
		len--;

	}

}


	// front
	int front(){
		return head->data;
	}

	// empty
	bool empty(){
		return head==NULL;
	}

	// size
	int size(){
		return len;
	}
};



int main(){
	Queue q;
	q.push(1);
	q.push(4);
	q.push(6);
	q.push(7);
	q.push(9); 
	q.push(1);
	q.push(4);
	q.push(6);
	q.push(7);
	q.push(9);//tc-->1 4 6 7 9 1 4 6 7 9
	
	while(!q.empty()){
		cout<<q.front()<<endl;
		q.pop();
	}
	cout<<endl;
	
	return 0;

}