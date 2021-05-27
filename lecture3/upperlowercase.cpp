#include<iostream>
#include<climits>
using namespace std;
int main(){
	char ch;
	cin>>ch;
	// if(ch>=97&&ch<=122){
	// 	cout<<"lower"<<endl;
	// }
	// else if(ch>=65&&ch<=90){
	// 	cout<<"upper"<<endl;

	// }
	// else{
	// 	cout<<"invalid input"<<endl;

	// }


	// 2nd way
	// if(ch>='a'&&ch<='z'){ //implicit type conversion
	// 	cout<<"lower"<<endl;
	// }
	// else if(ch>='A'&&ch<='Z'){ // ander hi ander khudse convert karega
	// 	cout<<"upper"<<endl;

	// }
	// else{
	// 	cout<<"invalid input"<<endl;

	// }


	// 3rd way --inbuild
	if(islower(ch)){
		cout<<"lower"<<endl;
	}
	else if(isupper(ch)){ // ander hi ander khudse convert karega
		cout<<"upper"<<endl;

	}
	else{
		cout<<"invalid input"<<endl;

	}




	


	return 0;
}