#include<iostream>
#include<list>
using namespace std;


class Graph{

public:
	list<int>* l;
	int n;
	// construtor


	Graph(int N){
		l=new list<int>[N];
		n=N;

	}
	void addedge(int u,int v,bool birdir=true){
		l[u].push_back(v);
		if(birdir){
			l[v].push_back(u);
		}
	}


	void print(){
		for(int i=0;i<n;i++){ //0 : 1-->4
			cout<<i<<"   : ";  // 0    :
			for(auto neigh:l[i]){
				cout<<neigh<<" ";
			}
			cout<<endl;


		}
	}




};
int main(){

	int non,noe,u,v; //5 7
	cin>>non>>noe;
	Graph g(non);
	for (int i = 0; i <noe; ++i)
	{
		cin>>u>>v;
		g.addedge(u,v);

		
	}
	g.print();

	cout<<endl;



	return 0;






}