#include<iostream>
using namespace std;
// blueprint
class Pair{
public:
	int a,b;
	// constructor
	Pair(int x,int y){
		a=x;
		b=y;
		// this->a=a;
		// this->b=b;


	}
	// operator overloading
	bool operator <(Pair &Z){  //Pair Z=Y; Assignment
		if(a<Z.a&&b<Z.b){
			return true;

		}
		else{
			return false;
		}
		// x-->a y-->Z.a;
		// x-->b y-->Z.b;
	}
};

int main(){
	// int a=10; //datatype variable =10;
	Pair X(70,30); // x is object of type Pair
	Pair Y(40,50);


	// operator overloading
	if(X<Y){
			cout<<" X is less than Y"<<endl;

	}
	else{
		cout<<" X is greater than Y"<<endl;

	}

	// int a=10;
	// int b=30;
	// if(a<b){
	// 	cout<<" a is less than b"<<endl;
	// }
	// else{
	// 	cout<<" a is greater than b"<<endl;

	// }


	return 0;
}