#include<iostream>
using namespace std;
// blueprint //-->takes no space 
class car{
	int price;
public: //aap  variables ko class k bahar access kar sakte ho directly
	// char name[100];
	char *name;

	int modelno;
	int seats;
	static int co; //only gets initialized once
	const int tyres; //constant varible
	// int price;
	// default constructor -->helps in making of object
	//whenever object is formed constructor is called
	// car(){

	// }

	// agar mai constructor ko override karti hun tou overrise wala constructor 
	// kaam karta hai
	car():tyres(4){
		// tyres=4;


		cout<<"inside default constructor"<<endl;
		name=NULL;
		co++;

	}

	// parametrized constructor
	// initilization list
	car(char*n,int m,int seats,int p):tyres(4){
		name=new char[strlen(n)+1];
		strcpy(name,n);
		modelno=m;
		// this keyword shows jo object bann raha hai
		this->seats=seats;
		price=p;
		// tyres=4;
		co++;


	}
	// // permitrized constructor
	// car(char*n,int m,int s){
	// 	strcpy(name,n);
	// 	modelno=m;
	// 	seats=s;
	// 	price=2000;

	// }


	// copy cunstructor override

	car(car &x):tyres(4){//x=A
		cout<<"inside copy constructor"<<endl;
		name=new char[strlen(x.name)+1];
		strcpy(name,x.name);
		// name=x.name;
		price=x.price;
		seats=x.seats;
		modelno=x.modelno;
		// tyres=4;
		co++;


	}
	// copy assignment operator
 	//constant funtcion

	void print() const{
		cout<<name<<endl;
		cout<<price<<endl;
		cout<<seats<<endl;
		cout<<modelno<<endl;
	}

	void update(char *n){
		if(name!=NULL){
			delete[] name;
			name=NULL;

		}
		name=new char[strlen(n)+1];
		strcpy(name,n);

	}

	// agar mujhe private members ko access karna hota hai tou mai class 
	// k functions ki help se karti hun
	// getters and setter

	// setter
	void setprice(int p){
		if(p<200){
			price=500;
		}
		else{
			price=p;

		}

	}

	// getter
	int getprice() const{
		return price;
	}


	// operator overloading
	void operator=(car x){
		cout<<"inside copy assignment constructor"<<endl;
		name=new char[strlen(x.name)+1];
		strcpy(name,x.name);
		// name=x.name;
		price=x.price;
		seats=x.seats;
		modelno=x.modelno;


	}

	// dustructor // dustructor order opposite to constructor;

	~car(){
		cout<<"delete car "<<name<<endl;
		delete[] name;
		name=NULL;
		co--;// dustructor order opposite to constructor;

	}




};
int car::co=0; //static variables ko initilize 
int main(){
	// int a;
	car A; //user defined datatype; //A object formed of the type car
	//object form memory space use
	// A.name="BMW"; string ko char array mai nahi daal sakte
	// strcpy(A.name,"BMW"); //segmentation fault
	A.update("BMW"); 
	// A.price=500;
		A.setprice(200);
	A.seats=4;
	A.modelno=2020;

	// A.update("asdf");



	// cout<<A.name<<endl;
	// // cout<<A.price<<endl;
	// cout<<A.getprice()<<endl;
	// cout<<A.seats<<endl;
	// cout<<A.modelno<<endl;
	cout<<"data of a is "<<endl;
	A.print(); //a calls print function
	cout<<"a k tyres are"<<A.tyres<<endl;


	// car B

	car B; //user defined datatype; //A object formed of the type car
	// object form memory space use
	// A.name="BMW"; string ko char array mai nahi daal sakte
	// strcpy(B.name,"Audi");
	B.update("AUdi");
	// B.price=700;
	B.setprice(700);
	B.seats=7;
	B.modelno=2019;
	// B.print();


	// cout<<B.name<<endl;
	// cout<<B.price<<endl;
	// cout<<B.seats<<endl;
	// cout<<B.modelno<<endl;

	car C("duster",2017,8,1000);
	// C.print();
	// car D("qwerty",2000,5);


	// cout<<C.name<<endl;
	// cout<<C.price<<endl;
	// cout<<C.seats<<endl;
	// cout<<C.modelno<<endl;

	// cout<<D.name<<endl;
	// cout<<D.price<<endl;
	// cout<<D.seats<<endl;
	// cout<<D.modelno<<endl;

	cout<<"data of E is "<<endl;
	// car E=A;  //deatils of A copy in B // deafult constructor-->copy constructor
	car E(A);
	E.print();
	car F=A;

	E.name[0]='M';
	// cout<<"A data"<<endl;
	// A.print();
	// cout<<"E data"<<endl;
	// E.print();
	// cout<<"F data"<<endl;
	// F.print();
	// copy assignment operator
	// car G; //deafault constructor
	// G=A;
	// cout<<"G data"<<endl;
	// G.print();
	cout<<"Total cars"<<car::co<<endl;










	return 0;
}