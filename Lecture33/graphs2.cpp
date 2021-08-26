#include<iostream>
#include<list>
// #include<unordered_map>
#include <map>
#include<cstring>
using namespace std;


template<typename T>


class Graph{

	// unordered_map<T,list<T> > h;
		map<T,list<T> > h;


public:


	void addEdge(T u,T v,bool birdir=true){
		h[u].push_back(v);
		if(birdir){
			h[v].push_back(u);

		}

	}


	void print(){
		for(auto node:h){
			cout<<node.first<<"  : ";

			for(auto neigh:node.second){
				cout<<neigh<<" ";

			}
			cout<<endl;


		}
	}


};
int main(){

	int non,noe,u,v; //5 7
	cin>>non>>noe;
	Graph<int> g;
	for (int i = 0; i <noe; ++i)
	{
		cin>>u>>v;
		g.addEdge(u,v);

		
	}
	g.print();

	cout<<endl;



	// Graph<string> g;
	// g.addEdge("Putin", "Trump");
	// g.addEdge("Putin", "Modi");
	// g.addEdge("Putin", "Pope");
	// g.addEdge("Modi", "Trump", true);
	// g.addEdge("Modi", "Yogi", true);
	// g.addEdge("Yogi", "Prabhu");
	// g.addEdge("Prabhu", "Modi");



	g.print();

	cout<<endl;








	return 0;






}