#include<iostream>
using namespace std;
class node{
public:
	string key;
	int val;
	node*next;
	// constructor
	node(string k,int v){
		key=k;
		val=v;
		next=NULL;
	}
};
class hashmap{
	int ts; //10
	int cs; 
	// int*arr=new int[size] 
	//node**arr=new node*[size] 
	node**arr;
	int hashfunction(string key){
		int ans=0;
		int mul=1;
		for(int i=0;i<key.length();i++){
			ans=ans+(key[i]%ts*mul%ts)%ts;
			mul=(mul*29)%ts;
		}
		ans=ans%ts;
		return ans;
	}


	void rehashing(){
		node**oldarr=arr;
		int oldts=ts; //7
		// double size of its previous table
		arr=new node*[2*ts];
		ts=2*ts;
		cs=0;
		for(int i=0;i<ts;i++){
			arr[i]=NULL;
		}

		// copy key value pairs from old arr to new arr
		for(int i=0;i<oldts;i++){
			node*head=oldarr[i]; //1500
			while(head!=NULL){
				insert(head->key,head->val);
				head=head->next;
			}

		}
		delete[]oldarr;


	}


public:
	hashmap(int size=7){
		ts=size;
		cs=0;
		arr=new node*[ts];
		for(int i=0;i<ts;i++){
			arr[i]=NULL;
		}

	}

	
	void insert(string key,int  val){
		int index=hashfunction(key);
		node* n= new node(key,val);
		n->next=arr[index];
		arr[index]=n;
		cs++;
		if((cs/(ts*1.0))>0.6){
			rehashing();
		}

	}

	

	void print(){
		for(int i=0;i<ts;i++){
			cout<<i<<"--> ";
			node*head=arr[i];
			while(head){
				cout<<head->key<<" ";
				head=head->next;

			}
			cout<<endl;

		}
	}



};
int main()
{

	hashmap h;

	h.insert("Ap",120);
	h.insert("kiw",200);
	h.insert("mang",100);
	h.insert("ab",70);
	h.insert("mango",70);
	h.insert("ma",700);

	h.insert("mangfgo",760);
	h.insert("masfdgs",73400);
	h.insert("mawehrngo",7340);
	h.insert("werma",70240);
	h.insert("weretmango",70);
	h.insert("wetwetma",700);
	
	
	




	h.print();
	cout<<endl;
	
	return 0;
}