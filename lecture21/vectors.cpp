#include<iostream>
using namespace std;

// templates
template<typename T> //program 
// blueprint
class Vector{
public:
	T *arr;
	int ms;
	int cs;
	// constructor
	Vector(int s=2){
		arr=new T[s];
		cs=0;
		ms=2;

	}
	// push
	void push_back(T data){ //13
		if(cs==ms){ //pura array fill ho chuka hai
			// double size of array
			T *oldarr=arr;
			int oldms=ms; //2
			arr=new T[2*ms];
			ms=2*ms; //4
			// to copy elements from old arr to new arr
			for(int i=0;i<oldms;i++){
				arr[i]=oldarr[i];
			}

			// delete old arr
			delete []oldarr;

		}

		arr[cs]=data;
		cs++;

	}

	// pop
	void pop_back(){
		if(cs>0){
			cs--;

		}
	}

	// size
	int size(){
		return cs;

	}


	// capacity
	int capacity(){
		return ms;
	}

	//

	T operator[](int i) {
		return arr[i];
	} 

};

int main(){
	Vector<int>v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(8);
	v.push_back(21);
	v.push_back(27);


	cout<<"size "<<v.size()<<endl;
	cout<<"capacity "<<v.capacity()<<endl;

	v.pop_back();
	cout<<"size "<<v.size()<<endl;
	cout<<"capacity "<<v.capacity()<<endl;

	Vector<char>v1;
	v1.push_back('A');
	v1.push_back('B');
	cout<<"size "<<v1.size()<<endl;
	cout<<"capacity "<<v1.capacity()<<endl;
	

	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" "; //operator overloading
	}
	cout<<endl;







	


	return 0;
}