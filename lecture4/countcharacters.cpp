#include<iostream>
using namespace std;

int main(){
	int count=0;
	//helloworld$
	char ch;
	// cin>>ch;//h //cin -->property whitespaces '\t' '\n' ' ' ignore

	ch=cin.get(); //h //cin.get -->property whitespaces '\t' '\n' ' ' doesnot ignore
	//return charcter
	while(ch!='$'){
		count=count+1;// 5

	// cin>>ch;//' '
		ch=cin.get();


	}


	cout<<"count of charcters is "<<count<<endl;


	



	



	








	

	return 0;
}
