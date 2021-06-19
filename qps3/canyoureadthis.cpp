#include<iostream>
using namespace std;
int main(){
	char s[10000];
	cin.getline(s,10000);
	int i=0;
	while(s[i]!='\0'){ //IAmACompetativeProgrammer
		if(s[i]>='A'&&s[i]<='Z'){
			cout<<s[i];
			i++;
		}
		while(s[i]>='a'&&s[i]<='z'){
			cout<<s[i];
			i++;
		}
		cout<<endl;
	}
	// cout<<endl;


	return 0;
}