#include<iostream>
#include<climits>
using namespace std;
void fertocel(){
	int init=0;
	int final=300;
	int step=20;
	for(int f=0;f<=300;f=f+20){
		// int c=((5)*(f-32))/9;
		int c=(5.0/9)*(f-32);
		cout<<f<<"  "<<c<<endl;

	}

}

void fertocel2(){
	int init,step,final;
	cin>>init>>step>>final;
	for(int f=init;f<=final;f=f+step){
		// int c=((5)*(f-32))/9;
		int c=(5.0/9)*(f-32);
		cout<<f<<"  "<<c<<endl;

	}

}


void fertocel3(int init,int step,int final){
	// int init,step,final;
	// cin>>init>>step>>final;
	for(int f=init;f<=final;f=f+step){
		// int c=((5)*(f-32))/9;
		int c=(5.0/9)*(f-32);
		cout<<f<<"  "<<c<<endl;

	}

}
int main(){

	// fertocel();//calling

	// fertocel2();

		int init,step,final;
	cin>>init>>step>>final; //0 //30 //400

	fertocel3(init,step,final);


	

	// in genral



	// for(int f=init;f<=final;f=f+step){
	// 	// int c=((5)*(f-32))/9;
	// 	int c=(5.0/9)*(f-32);
	// 	cout<<f<<"  "<<c<<endl;

	// }


	// int f=init;//initilazation condition
	// while(f<=final){
	// 	int c=(5.0/9)*(f-32);
	// 	cout<<f<<"  "<<c<<endl;
	// 	f=f+step;

	// }

	// int f=init;
	// for(;f<=final;){
	// 	// int c=((5)*(f-32))/9;
	// 	int c=(5.0/9)*(f-32); //explicit type conversion
	// 	cout<<f<<"  "<<c<<endl;
	// 	f=f+step;



	// }






	return 0;
}