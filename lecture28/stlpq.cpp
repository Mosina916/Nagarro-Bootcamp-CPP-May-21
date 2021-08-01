#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int main(){
	// priority_queue<int> h; //max heap
	priority_queue<int,vector<int>,greater<int> >h; //min heap

	h.push(10);
	h.push(10);
	h.push(12);
	h.push(5);
	h.push(6);
	h.push(-10);
	h.push(23);
	h.push(283);
	h.push(-80);
	h.push(56);
	h.push(1);

	while(!h.empty()){

	cout<<h.top()<<" ";
	h.pop();


	}
	cout<<endl;








	return 0;
}