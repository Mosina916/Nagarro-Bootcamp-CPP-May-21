#include<iostream>
using namespace std;
// call by refrence using pointers
void update(int*z){ //z is a pointer of x
	*z=*z+20; //*z-->bucket

}
int main(){

	int x=10;
	int *y=&x;
	cout<<"value of x is "<<x<<endl;
	update(y); //passing pointer of x
	cout<<"value of x is "<<x<<endl;




	return 0;
}