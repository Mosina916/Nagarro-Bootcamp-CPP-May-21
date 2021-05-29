#include<iostream>
using namespace std;

int main(){
	int digcount=0;
	int alpcount=0;
	int whicount=0;
	int otherscount=0;
	//twer734&% @	dhf
	char ch;
	ch=cin.get(); //t
	while(ch!='$'){
		if(ch>='0'&&ch<='9'){
			digcount++; //3
		}
		else if(ch>='A'&&ch<='Z' or ch>='a'&&ch<='z'){
			alpcount++; //7


		}
		else if(ch==' '|| ch=='\n'||ch=='\t'){
			whicount++; //2

		}
		else{
			otherscount++; //3
		}
		ch=cin.get(); //e
	}


	cout<<"count of digits is "<<digcount<<endl;
	cout<<"count of alphabets is "<<alpcount<<endl;
	cout<<"count of whitespaces is "<<whicount<<endl;
	cout<<"count of special characters is "<<otherscount<<endl;


	

	return 0;
}
