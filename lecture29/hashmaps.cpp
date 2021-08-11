#include<iostream>
using namespace std;
class node{
public:
	int val;
	string key;
	node*next;
	// constructor
	node(string k,int v){
		val=v;
		key=k;
		next=NULL;

	}
};

class hashmap{
	node**arr;
	int ts;
	int cs;
		void rehashing(){
		node** oldarr=arr;
		int oldts=ts;
		arr=new node*[2*ts];
		ts=2*ts;
		cs=0;
		for(int i=0;i<ts;i++){
			arr[i]=NULL;
		}
		// to copy the elemnts from old arr to new arr
		for(int i=0;i<oldts;i++){
			node*head=oldarr[i];
			while(head!=NULL){
				insert(head->key,head->val);
				head=head->next;

			}

		}
		delete []oldarr;



	}
	int hashfunction(string key){
		int mul=1;
		int ans=0;
		for(int i=0;i<key.length();i++){
			ans+=((key[i]%ts)*(mul%ts))%ts;
			mul=mul*29;
			mul%=ts;
		}
		ans%=ts;
		return ans;
	}

public:
	// constructor
	hashmap(int size=7){
		// int*aptr=new int[];
		// int *arrptr=new int[5];

		arr=new node*[size];
		cs=0;
		ts=size;
		for(int i=0;i<ts;i++){
			arr[i]=NULL;
		}
	}




	void insert(string key,int val){
		int indx=hashfunction(key);
		node*n=new node(key,val);
		cs++;
		n->next=arr[indx];
		arr[indx]=n;
		if((cs/(ts*1.0)>=0.6)){
			rehashing();
		}

	}
	void print(){
		for(int i=0;i<ts;i++){
			cout<<i<<"--> ";
			node*head=arr[i];
			while(head!=NULL){
				cout<<head->key<<" ";
				head=head->next;
			}
			cout<<endl;
		}


	}
	node* search(string key){
		int indx=hashfunction(key);
		node*head=arr[indx];
		while(head!=NULL){
			if(head->key==key){
				return head;
			}
			head=head->next;
		}
		return NULL;

	}



};
int main(){
	hashmap h;
	h.insert("mango",100);
	h.insert("abc",200);
	h.insert("kiwi",50);
	h.insert("banana",80);
	h.insert("pineapple",70);

	h.print();

	return 0;



}