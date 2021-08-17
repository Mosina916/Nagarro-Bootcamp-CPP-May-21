#include <iostream>
#include<unordered_map>

#include<map>
using namespace std;
int main(){
	unordered_map<string,int> h;
	// map<string,int> h;
	// 1st way to insert in hashmap
	h["mango"]=300;
	h["kiwi"]=200;
	h["banana"]=500;


	// 2nd way to insert in hashmap

	// h.insert({"papaya",160});

	//  3rd way to insert in hashmap
	pair<string,int>p("watermelon",80);
	h.insert(p);


	//  4th way to insert in hashmap

	h.insert(make_pair("grapes",340));


	// print 
	for(auto fruit:h){
		cout<<fruit.first<<" "<<fruit.second<<endl;

	}


	cout<<endl;

	h.erase("grapes");

		for(auto fruit:h){
		cout<<fruit.first<<" "<<fruit.second<<endl;

	}






	return 0;
}
