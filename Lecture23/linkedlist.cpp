#include<iostream>
using namespace std;
class node{
public:
	int data;
	node*next; //self refrential class
	// constructor
	node(int d){
		data=d;
		next=NULL;
	}

};
void insertatfront(node*&head,node*&tail,int data){

	// create a node dynamically
	node* n=new node(data);

	if(head==NULL){// abhi tak linked list bana hi nahi tha //pehla node create hoga

		head=tail=n;

	}
	else{
		n->next=head;
		head=n;
	}


}


void insertattail(node*&head,node*&tail,int data){
	node*n=new node(data);
	if(head==NULL){// abhi tak linked list bana hi nahi tha //pehla node create hoga

		head=tail=n;

	}
	else{
		tail->next=n;
		tail=n;
	}


}


int length(node*head){
	node*temp=head;
	int co=0;

	while(temp!=NULL){
			co++;
	temp=temp->next;

	}

	return co;
}

int lenrec(node*head){
	// base case
	// 
	if(head==NULL){
		return 0;

	}

	// recursive case
	return 1+lenrec(head->next);
}
void deleteatfront(node*&head,node*&tail){
	// case 1 ll is empty
	if(head==NULL){
		return;
	}
	// case 2 ll is having only one node
	else if(head->next==NULL){
		delete head;
		head=tail=NULL;
	}
	else{
		node*temp=head;
		head=head->next;
		delete temp;

	}

}


void deleteatend(node*&head,node*&tail){
	// case 1 ll is empty
	if(head==NULL){
		return;
	}
	// case 2 ll is having only one node
	else if(head->next==NULL){
		delete head;
		head=tail=NULL;
	}
	else{
		node*temp=head;


		while(temp->next!=tail){
			temp=temp->next;

		}
		delete tail;
		tail=temp;
		tail->next=NULL;
		
	}


}


// delete at any position -->hw

void insertatanypostion(node*&head,node*&tail,int data,int pos){
	if(pos==0){
		insertatfront(head,tail,data);
	}
	else if(pos>=length(head)){
		insertattail(head,tail,data);

	}
	else{
		node*temp=head;
		node*n=new node(data);
		for(int jumps=1;jumps<=pos-1;jumps++){
			temp=temp->next;

		}

		n->next=temp->next;
		temp->next=n;
	}


}
bool searchiter(node*head,int key){
	node*temp=head;
	while(temp!=NULL){
			if(temp->data==key){
		return true;
	}
	temp=temp->next;

	}
	return false;

}


bool searchrec(node*head,int key){
// base case
	if(head==NULL){
		return false;
	}




	// recursive case
	if(head->data==key){
		return true;
	}
	return searchrec(head->next,key);
}



// to find mid point


node* mid(node*head){
	// if the ll is empty
	if(head==NULL){
		return NULL;

	}

	node*slow=head;
	node*fast=head->next; //advantage



	while(fast!=NULL&&fast->next!=NULL){
		slow=slow->next;
		fast=fast->next->next;
		
	}
	return slow;
	
}


// reverse ll
void reversell(node*&head){
	// node*tail=head;
 	node*prev=NULL;
 	node*currentnode=head;
 	node*n;
 	while(currentnode!=NULL){
 	n=currentnode->next;
 	currentnode->next=prev;
 	prev=currentnode;
 	currentnode=n;

 	}
 	head=prev;

 
 }





void print(node*head){
	node*temp=head;


	while(temp!=NULL){
		cout<<temp->data<<" "; //20  10 90 80 30 NULL
		temp=temp->next;

	}
	cout<<"NULL "<<endl;
	


}
bool iscyclic(node*head){
	// step 1
	node*slow=head;
	node*fast=head;
	while(fast!=NULL&&fast->next!=NULL){ //isse bahar aayega if it is linear
		slow=slow->next;
		fast=fast->next->next;
		if(slow==fast){
			return true;
		}



	}
	return false;


}
void createcycle(node*head){
	node*temp=head;
	while(temp->next!=NULL){
			temp=temp->next;

	}
	temp->next=head->next->next;

}

void breakcycle(node*head){
	node*slow=head;
	node*fast=head;
	// node*prev;

	while(fast!=NULL&&fast->next!=NULL){ //isse bahar aayega if it is linear
		// prev=slow;
		slow=slow->next;
		fast=fast->next->next;

		if(slow==fast){
			break;
		}



	}
	node*prev=head;
	while(prev->next!=fast){
		prev=prev->next;
	}

	// 
	slow=head;
	while(slow!=fast){
		slow=slow->next;
		fast=fast->next;
		prev=prev->next;
	}
	prev->next=NULL;

}
int main(){
	// node n1(40); //n1 is object of type node
	// node n2(50);
	// n1.next=&n2;


	// // to print data of n1 and n2

	// cout<<n1.data<<" "<<n2.data<<endl; //to work with objects use . operator

	// // i want to print the data of both n1 and n2 using n1 object 
	// cout<<n1.data<<" "<<(*n1.next).data<<endl;


	node*head=NULL;
	node*tail=NULL;
	// insertatfront(head,tail,30);
	// insertatfront(head,tail,80);
	// insertatfront(head,tail,90);
	// insertatfront(head,tail,10);
	// insertatfront(head,tail,20);
	// print(head);

	insertattail(head,tail,60);
	insertattail(head,tail,30);
	insertattail(head,tail,80);
	insertattail(head,tail,90);
	// insertattail(head,tail,10);
	insertattail(head,tail,20); //60 30 80 90 10 20 NULL
	


	// insertatanypostion(head,tail,900,3);

	// insertatanypostion(head,tail,1000,0);


	 print(head);

	 // deleteatfront(head,tail);
	 // print(head);

	 // deleteatend(head,tail);
	 // print(head);

	 // cout<<lenrec(head)<<endl;

	 // if(searchiter(head,90)){
	 // 	cout<<"present"<<endl;
	 // }
	 // else{
	 // 	cout<<" Not present"<<endl;
	 // }
	 //  if(searchrec(head,0)){
	 // 	cout<<"present"<<endl;
	 // }
	 // else{
	 // 	cout<<" Not present"<<endl;
	 // }


	 node*m=mid(head);
	 cout<<"mid point is "<<m->data<<endl;

	 cout<<"reverse ll is "<<endl;
	 reversell(head);
	 print(head);
	 if(iscyclic(head)){
	 	cout<<"ll is cyclic"<<endl;
	 }
	 else{
	 	cout<<"ll is not cyclic"<<endl;
	 }
	 createcycle(head);
	  if(iscyclic(head)){
	 	cout<<"ll is cyclic"<<endl;
	 }
	 else{
	 	cout<<"ll is not cyclic"<<endl;
	 }


	 breakcycle(head);
	   if(iscyclic(head)){
	 	cout<<"ll is cyclic"<<endl;
	 }
	 else{
	 	cout<<"ll is not cyclic"<<endl;
	 }









	return 0;
}