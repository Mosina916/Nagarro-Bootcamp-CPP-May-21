#include<iostream>
#include<vector>
#include<queue>
using namespace std;
#define Minheap priority_queue<int,vector<int>,greater<int> >
void printheap(Minheap h){
	while(!h.empty()){

	cout<<h.top()<<" ";
	h.pop();


	}
	cout<<endl;
}
int main(){
	// priority_queue<int> h; //max heap
	Minheap h; //min heap
	int k=3;
	int count=0;
	int n;
	while(1){
		cin>>n;
		if(n==-1){

			// print
			printheap(h);
		}
		else{
			// initially directly put the k elemnts without comparing
			if(count<k){
				h.push(n);
				count++;
			}
			else{
				if(h.top()<n){
					h.pop();
					h.push(n);
				}
			}

		}
	}
	return 0;





	return 0;
}