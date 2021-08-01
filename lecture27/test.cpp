#include<iostream>
#include<queue>
using namespace std;
class node{
public:
	int data;
	node*left;
	node*right;
	// constructor
	node(int d){
		data=d;
		left=NULL;
		right=NULL;
	}
};
node* buildtree(){
	int data;
	cin>>data;
	if(data==-1){
		return NULL;
	}
	else{
		node*root=new node(data);
		root->left=buildtree(); //lst
		root->right=buildtree(); //rst
		return root;

	}
	
}

void preorder(node*root){
	// base case
	if(root==NULL){
		return;
	}

	// recursive case
	// root->data
	cout<<root->data<<",";

	// lst
	preorder(root->left);

	// rst
	preorder(root->right);

}
void inorder(node*root){
	// base case
	if(root==NULL){
		return;
	}

	// recursive case
	// lst
	inorder(root->left);
	// root->data
	cout<<root->data<<",";

	// rst
	inorder(root->right);

}
void postorder(node*root){
	// base case
	if(root==NULL){
		return;
	}

	// recursive case
	// lst
	postorder(root->left);
	// rst
	postorder(root->right);
	// root->data
	cout<<root->data<<" ";

	

}


int height(node*root){
	// base case
	if(root==NULL){
		return 0;
	}


    // recursive case
    int lh=height(root->left);
    int rh=height(root->right);
    return max(lh,rh)+1;
}





void printlevelwise(node*root){
	// queue
	queue<node*> q;
	q.push(root);
	q.push(NULL);
	while(!q.empty()){
		node*x=q.front();
		q.pop();
		// if x is NULL
		if(x==NULL){
			cout<<endl;
			if(!q.empty()){
				q.push(NULL);
			}

		}
		else{
			cout<<x->data<<" ";
			if(x->left!=NULL){
				q.push(x->left);
			}
			if(x->right!=NULL){
				q.push(x->right);
			}
		}


	}
}
node* insertinbst(node*root,int data){
	// base case
	if(root==NULL){
		root=new node(data);
		return root;

	}


	// recursive case
	if(data<=root->data){
		root->left=insertinbst(root->left,data);
	}
	else{
		root->right=insertinbst(root->right,data);
	}
	return root;
}


node* buildbst(){
	node*root=NULL;
	int data;
	cin>>data;
	while(data!=-1){
		root=insertinbst(root,data);
		cin>>data;

	}
	return root;


}

// search in bst
bool searchinbst(node*root,int key){

	// base case
	if(root==NULL){
		return false;
	}


	// recursive case
	if(key==root->data){
		return true;
	}
	else if(key<root->data){
		return searchinbst(root->left,key);
	}
	else{
		return searchinbst(root->right,key);
	}
}

void printrange(node*root,int k1,int k2){
	// base case
	if(root==NULL){
		return ;
	}


	// recursive case
	printrange(root->left,k1,k2);//lst
	if(root->data>=k1&&root->data<=k2){ //root
		cout<<root->data<<" ";
	}
	printrange(root->right,k1,k2); //rst
}
void printrangereverse(node*root,int k1,int k2){
	// base case
	if(root==NULL){
		return ;
	}


	// recursive case
	printrangereverse(root->right,k1,k2); //rst
	
	if(root->data>=k1&&root->data<=k2){ //root
		cout<<root->data<<" ";
	}
	printrangereverse(root->left,k1,k2);//lst
	
}


bool isbst(node*root,int min=INT_MIN,int max=INT_MAX){
	// base case
	if(root==NULL){//null tree is also a bst
		return true;
	}


	// recursive case
	if(root->data>=min&&root->data<=max&&isbst(root->left,min,root->data)&&isbst(root->right,root->data,max)){
		return true;
	}
	else{
		return false;
	}

}

class Pair{
public:
	int height;
	bool balance;
	// constructor
	Pair(){
		height=0;
		balance=true;
	}
};
Pair isbalanced(node*root){
	Pair p;
	// base case
	if(root==NULL){
		// p.height=0;
		// p.balance=true;
		return p;

	}



	 // recursive case
	Pair left=isbalanced(root->left);
	Pair right=isbalanced(root->right);
	p.height=max(left.height,right.height)+1;
	if(left.balance==true&&right.balance==true&&(abs(left.height-right.height)<=1)){
		p.balance=true;
	}
	else{
		p.balance=false;
	}
	return p;

}

node* buildbstfromarr(int *arr,int s,int e){
	// base case
	if(s>e){
		return NULL;
	}



	// recursive case
	int mid=(s+e)/2;
	node*root=new node(arr[mid]);
	root->left=buildbstfromarr(arr,s,mid-1);
	root->right=buildbstfromarr(arr,mid+1,e);
	return root;



}


//input-->8 3 1 -1 -1 6 4 -1 -1 7 -1 -1 10 -1 14 13 -1 -1 -1
int main(){
	int arr[]={1,2,3,4,8,9,10};
	int n=sizeof(arr)/sizeof(int);
	node*parent=buildbstfromarr(arr,0,n-1);



	// node* parent=buildbst();

	
	// // node*parent=buildtree();
	// // node*parent=buildtreelevelwise();
	// // cout<<"preorder : ";
	// // preorder(parent);
	// cout<<endl;
	// cout<<"inorder : ";
	// inorder(parent);
	// cout<<endl;
	// cout<<"postorder : ";
	// postorder(parent);
	// cout<<endl;

	printlevelwise(parent);
	// if(searchinbst(parent,13)){
	// 	cout<<"key is present"<<endl;
	// }
	// else{
	// 	cout<<"key is not present"<<endl;
	// }

	// // printrange(parent,7,13);
	// // cout<<endl;
	// // printrangereverse(parent,7,13);
	// if(isbst(parent)){
	// 	cout<<"it is a bst"<<endl;


	// }
	// else{
	// 	cout<<"it is not a bst"<<endl;


	// }

	// Pair x=isbalanced(parent);
	// if(x.balance){
	// 	cout<<"tree is balanced"<<endl;
	// }
	// else{
	// 	cout<<"tree is not balanced"<<endl;
	// }
	// cout<<"height of tree is "<<x.height<<endl;





	return 0;
}