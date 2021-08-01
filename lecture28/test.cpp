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
class Linkedlist{
public:
	node*head;
	node*tail;
	// constructor
	Linkedlist(){
		head=tail=NULL;
	}
};
Linkedlist Bsttoll(node*root){
	Linkedlist l; //l is obejct of type linkedlist
	// base case
	if(root==NULL){
		return l;

	}

	// recursive case
	// case 1 if both lst and rst are null
	if(root->left==NULL&&root->right==NULL){
		l.head=root;
		l.tail=root;
		// return l;
	}
	//  case 2 
	// lst exist and rst doesnot exist 
	else if(root->left!=NULL&&root->right==NULL){
		Linkedlist left= Bsttoll(root->left);
		left.tail->right=root;
		l.head=left.head;
		l.tail=root;
		// return l;
	}
	//case 3
	// lst does exist and rst  exist 
	else if(root->left==NULL&&root->right!=NULL){
		Linkedlist right= Bsttoll(root->right);
		root->right=right.head;
		l.head=root;
		l.tail=right.tail;
		// return l;
	}
	// case 4 both lst and rst exist
	else{
		Linkedlist left=Bsttoll(root->left);//1 3 4 6 7
		Linkedlist right=Bsttoll(root->right);//10 13 14
		left.tail->right=root;
		root->right=right.head;
		l.head=left.head;

		l.tail=right.tail;
		// return l;
	}
	return l;



}
void printll(node*head){
	while(head!=NULL){
		cout<<head->data<<"->";
		head=head->right;

	}
	cout<<"NULL ";

}
node* Deleteinbst(node*root,int key){
	// base case
	if(root==NULL){
		return NULL;
	}

	// recursive case
	// case 1 key lst
	if(root->data>key){
		root->left=Deleteinbst(root->left,key);
		return root;
	}
	// case 2 key rst
	else if(root->data<key){
		root->right=Deleteinbst(root->right,key);
		return root;

	}
	// case 3 agar wo root khud key hogi
	else{
		// case 1 no child
		if(root->left==NULL&&root->right==NULL){
			delete root;
			return NULL;
		}

		// case 2 1 child
		//rc
		else if(root->left==NULL&&root->right!=NULL){
			node*temp=root->right;
			delete root;
			return temp;

		}


		// lc
		else if(root->left!=NULL&&root->right==NULL){
			node*temp=root->left;
			delete root;
			return temp;

		}


		//case 3 both child exist
		// agar min se replace karna hai tou ye
		else{
			node*replace=root->right;
			while(replace->left!=NULL){
				replace=replace->left;
			}
			swap(replace->data,root->data);
			root->right=Deleteinbst(root->right,key);
			return root;

		}

		// agar max se replace karna hai 
		// else{
		// 	node*replace=root->left;
		// 	while(replace->right!=NULL){
		// 		replace=replace->right;
		// 	}
		// 	swap(replace->data,root->data);
		// 	root->left=Deleteinbst(root->left,key);
		// 	return root;

		// }
	}


}
void rightview(node*root,int level,int &maxlevel){
	// base case
	if(root==NULL){
		return;
	}



	// recursive case
	if(level>maxlevel){
		cout<<root->data<<" ";
		maxlevel=level;

	}
	rightview(root->right,level+1,maxlevel);
	rightview(root->left,level+1,maxlevel);

}

void leftview(node*root,int level,int &maxlevel){
	// base case
	if(root==NULL){
		return;
	}



	// recursive case
	if(level>maxlevel){
		cout<<root->data<<" ";
		maxlevel=level;

	}
	
	leftview(root->left,level+1,maxlevel);
	leftview(root->right,level+1,maxlevel);

}




//input-->8 3 1 -1 -1 6 4 -1 -1 7 -1 -1 10 -1 14 13 -1 -1 -1
int main(){



	node* parent=buildbst();
	printlevelwise(parent);
	int maxlevel=0;
	rightview(parent,1,maxlevel);
	int ml=0;
	cout<<endl;
	leftview(parent,1,ml);
	cout<<endl;
	// Linkedlist f=Bsttoll(parent);

	// printll(f.head);
	// inorder(parent);
	// cout<<endl;


	// parent=Deleteinbst(parent,3);
	// printlevelwise(parent);
	// inorder(parent);

	// // Linkedlist q=Bsttoll(parent);

	// // printll(q.head);
	// cout<<endl;



	// cout<<"preorder : ";
	// preorder(parent);
	// cout<<endl;
	// cout<<"inorder : ";
	// inorder(parent);
	// cout<<endl;
	// cout<<"postorder : ";
	// postorder(parent);
	// cout<<endl;

	





	return 0;
}