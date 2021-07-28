#include<iostream>
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
	cin>>data; //8

	if(data==-1){
		return NULL;

	}
	else{
	node*root=new node(data);
	// lst
	root->left=buildtree();
	// rst
	root->right=buildtree();

	return root;

	}



}


void preorderprint(node*root){
	// base case
	if(root==NULL){
		return;
	}


	// recursive case

	cout<<root->data<<" ";
	preorderprint(root->left);
	preorderprint(root->right);


}


void inorderprint(node*root){
	// base case
	if(root==NULL){
		return;
	}


	// recursive case
	inorderprint(root->left); //lst
	cout<<root->data<<" "; //root
	
	inorderprint(root->right); //rst


}

void postorderprint(node*root){
	// base case
	if(root==NULL){
		return;
	}


	// recursive case
	postorderprint(root->left); //lst
	postorderprint(root->right); //rst 

	cout<<root->data<<" "; //root
	


}


int countnodes(node*root){

	// base case
	if(root==NULL){
		return 0;
	}


	// recursive case

	// int x=countnodes(root->left); // 5
	// int y=countnodes(root->right); //3


	// int tn=x+y+1;
	// return tn;


	return countnodes(root->left)+countnodes(root->right)+1;


}
int heightoftree(node*root){

	// base case
	if(root==NULL){
		return 0;
	}



	// recursive case

	int lsth=heightoftree(root->left); //3
	int rsth=heightoftree(root->right); //3
	return max(lsth,rsth)+1;

}

int sumofnodesoftree(node*root){


	// base case
	if(root==NULL){
		return 0;
	}


	// recursive case
	int lstsum=sumofnodesoftree(root->left);
	int rstsum=sumofnodesoftree(root->right);


	return lstsum+rstsum+root->data;



}

void mirroroftree(node*root){
	// base case
	if(root==NULL){
		return;
	}

	// recursive case
	swap(root->left,root->right);
	mirroroftree(root->left);
	mirroroftree(root->right);



}

int diameter(node*root){

	// base case
	if(root==NULL){
		return 0;
	}


	// recursive case

	// op1
	int op1=diameter(root->left);


	// op2
	int op2=diameter(root->right);


	// op3
	int op3=heightoftree(root->left)+heightoftree(root->right);

	return max(op1,max(op2,op3));
}



// i/p  8 3 1 -1 -1 6 4 -1 -1 7 -1 -1 10 -1 14 13 -1 -1 -1


int main(){

	node*root=buildtree();

	cout<<"preorderprint is : "<<endl;

	preorderprint(root);

	cout<<endl;


	cout<<"inorderprint is : "<<endl;

	inorderprint(root);
		cout<<endl;

	cout<<"postorderprint is : "<<endl;

	postorderprint(root);
		cout<<endl;


	cout<<"Total nodes present in tree are : "<<countnodes(root)<<endl;

	cout<<"height of tree is : "<<heightoftree(root)<<endl;

	cout<<"sum of nodes of tree is : "<<sumofnodesoftree(root)<<endl;

	// mirroroftree(root);
	// cout<<"preorderprint after mirroring is : "<<endl;

	// preorderprint(root);

	// cout<<endl;


		cout<<"Diameter of tree is : "<<diameter(root)<<endl;











	return 0;
}