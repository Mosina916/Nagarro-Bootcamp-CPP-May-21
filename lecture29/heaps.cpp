#include<iostream>
#include<vector>
using namespace std;
class Minheap{
private:
		void heapify(int i){
		int min_index=i;
		int left=2*i;
		int right=2*i+1;
		if(left<v.size()&&v[min_index]>v[left]){
			min_index=left;
		}
		if(right<v.size()&&v[min_index]>v[right]){
			min_index=right;
		}

		if(min_index!=i){
			swap(v[min_index],v[i]);
			heapify(min_index);

		}
		

	}
public:
	vector<int> v;
	// constructor
	Minheap(){
		v.push_back(-1);

	}
	void push(int data){
		v.push_back(data);
		int c=v.size()-1;
		int p=c/2;
		while(c>1&&v[p]>v[c]){
			swap(v[p],v[c]);
			c=p;
			p=p/2;
		}

	}

	void pop(){
		swap(v[1],v[v.size()-1]);
		v.pop_back();
		heapify(1);


	}
	int top(){
		return v[1];

	}
	bool empty(){
		return v.size()==1;

	}
};
int main(){
	Minheap h;
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