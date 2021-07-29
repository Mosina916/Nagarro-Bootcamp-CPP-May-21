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


class Pair{
public:
	int height;
	int diameter;
};

Pair fastdiameter(node*root){
	Pair p;
	// base case
	if(root==NULL){
		p.height=p.diameter=0;
		return p;


	}

	// recursive case

	Pair left=fastdiameter(root->left);
	Pair right=fastdiameter(root->right);
	p.height=max(left.height,right.height)+1;

	int op1=left.height+right.height;
	int op2=left.diameter;
	int op3=right.diameter;
	p.diameter=max(op1,max(op2,op3));


	return p;



}


void levelwiseprint(node*root){
	queue<node*> q;
	q.push(root);
	q.push(NULL);


	while(!q.empty()){

		node*x=q.front(); //8
	q.pop();
	if(x==NULL){
		cout<<endl;
		if(!q.empty()){
			q.push(NULL);
		}
	}
	else{
		cout<<x->data<<" ";
	// agar mera left bucket exist karta hai
	if(x->left!=NULL){
		q.push(x->left);

	}
	// agar mera right bucket exist karta hai
	if(x->right!=NULL){
		q.push(x->right);

	}

	}


	}
	


}


node* buildtreelevelwise(){
	node*root=NULL;
	int data;
	cin>>data;//

	root=new node(data);

	queue<node*>q;
	q.push(root);

	while(!q.empty()){
	node*x=q.front(); //13
	q.pop();

	cout<<"Enter left and right child of "<<x->data<<endl;
	int lc,rc;
	cin>>lc>>rc; //-1 -1
	if(lc!=-1){
		x->left=new node(lc);
		q.push(x->left);


	}
	if(rc!=-1){
		x->right=new node(rc);
		q.push(x->right);

	}

	}
	return root;



}
int pre[]={8,3,1,6,4,7,10,14,13};
int ino[]={1,3,4,6,7,8,10,13,14};
int i=0;
node* createtreeusingprein(int s,int e){


	// base case
	if(s>e){
		return NULL;

	}





	// recursive case

	int d=pre[i]; //8
	i++;

	node*root=new node(d);
	int k=-1;

	for(int j=s;j<=e;j++){
		if(ino[j]==d){
			k=j; //5
			break;


		}
	}
	root->left=createtreeusingprein(s,k-1); //lst
	root->right=createtreeusingprein(k+1,e);//rst


	return root;





}






// i/p  8 3 1 -1 -1 6 4 -1 -1 7 -1 -1 10 -1 14 13 -1 -1 -1


int main(){

	// node*root=buildtree();

	int n=sizeof(pre)/sizeof(int); //9


	node*root=createtreeusingprein(0,n-1);

	// node*root=buildtreelevelwise();

	// cout<<"preorderprint is : "<<endl;

	// preorderprint(root);

	// cout<<endl;


	// cout<<"inorderprint is : "<<endl;

	// inorderprint(root);
	// 	cout<<endl;

	// cout<<"postorderprint is : "<<endl;

	// postorderprint(root);
	// 	cout<<endl;


	// cout<<"Total nodes present in tree are : "<<countnodes(root)<<endl;

	// cout<<"height of tree is : "<<heightoftree(root)<<endl;

	// cout<<"sum of nodes of tree is : "<<sumofnodesoftree(root)<<endl;

	// // mirroroftree(root);
	// // cout<<"preorderprint after mirroring is : "<<endl;

	// // preorderprint(root);

	// // cout<<endl;


	// 	cout<<"Diameter of tree is : "<<diameter(root)<<endl;


	// Pair x=fastdiameter(root);
	// cout<<"height of tree is "<<x.height<<endl; //4
	// cout<<"Diameter of tree is "<<x.diameter<<endl; //6


	cout<<"preorderprint is : "<<endl;

	preorderprint(root);

	cout<<endl;


	cout<<"inorderprint is : "<<endl;

	inorderprint(root);
		cout<<endl;




	cout<<"levelwise print is : "<<endl;
	levelwiseprint(root);















	return 0;
}