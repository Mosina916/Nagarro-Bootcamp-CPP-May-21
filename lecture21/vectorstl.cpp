#include<iostream>
#include<vector>
using namespace std;
bool mycompare(int a,int b){
	return a>b; //dec sort
}


int main(){
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(8);
	v.push_back(21);
	v.push_back(1);
	v.push_back(12);
	v.push_back(87);
	v.push_back(27);


	cout<<"size "<<v.size()<<endl;
	cout<<"capacity "<<v.capacity()<<endl;

	v.pop_back();
	cout<<"size "<<v.size()<<endl;
	cout<<"capacity "<<v.capacity()<<endl;
	cout<<" Before sorting "<<endl;
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
	// sort(v.begin(), v.end()); //increasing
	sort(v.begin(), v.end(),mycompare);
	cout<<" After sorting "<<endl;

	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;





	


	return 0;
}