#include<iostream>
#include <vector>
using namespace std;

class Queue{
	int *arr;
	int f;
	int e;
	int n;
	int cs;
public:
	// constructor
	Queue(int s=5){
		n=s;
		cs=0;
		f=0;
		arr=new int[s];
		e=n-1;

	}
	void push(int d){
		if(cs<n){
			e=(e+1)%n;
			arr[e]=d;
			cs++;
		}
		else{
			cout<<"queue is full"<<endl;
		}
	}
	void pop(){
		if(cs>0){
			f=(f+1)%n;
			cs--;
		}
		else{
			cout<<"queue is empty"<<endl;
		}

	}
	int front(){
		return arr[f];
	}
	bool empty(){
		return cs==0;
	}
	int size(){
		return cs;
	}

	
};



int main(){
	Queue q;
	q.push(1);
	q.push(4);
	q.push(6);
	q.push(7);
	q.push(9);
	q.pop();  
	q.pop(); 
	// cout<<q.front()<<endl;
	q.push(19);
	
	q.push(19);
		q.push(19);
			q.push(19);
	
	
	while(!q.empty()){
		cout<<q.front()<<endl;
		q.pop();
	}
	cout<<endl;
	
	return 0;

}