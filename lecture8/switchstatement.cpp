#include<iostream>
#include<algorithm>
using namespace std;


int main(){
	// switch -->alternative if elseif else
	char ch;
	cin>>ch;
	// if(ch=='a'){
	// 	cout<<"character is "<<ch<<endl;

	// }
	// else if(ch=='b'){
	// 	cout<<"character is "<<ch<<endl;

	// }
	// else if(ch=='c'){
	// 	cout<<"character is "<<ch<<endl;

	// }
	// else if(ch=='d'){
	// 	cout<<"character is "<<ch<<endl;

	// }

	// else if(ch=='e'){
	// 	cout<<"character is "<<ch<<endl;

	// }
	// else if(ch=='f'){
	// 	cout<<"character is "<<ch<<endl;

	// }
	// else{
	// 	cout<<"character is invalid "<<endl;

	// }

	switch(ch){
		case 'a':cout<<"character is "<<ch<<endl;
				break;
		case 'b':cout<<"character is "<<ch<<endl;
				break;
		case 'c':cout<<"character is "<<ch<<endl;
				break;
		case 'd':cout<<"character is "<<ch<<endl;
				break;
		case 'e':cout<<"character is "<<ch<<endl;
				break;
		case 'f':cout<<"character is "<<ch<<endl;
				break;
		default:cout<<"character is invalid "<<endl;

	}




	

	return 0;
}