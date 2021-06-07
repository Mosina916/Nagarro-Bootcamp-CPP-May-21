#include<iostream>
using namespace std;

int main(){
	int a=236172;
	cout<<"value of a is "<<a<<endl;

	char ch='d';
	cout<<"value of ch is "<<ch<<endl;

	// char u='Qw';  //char bucket contains single value 
	// cout<<"value of ch is "<<u<<endl;

	// char array

	// declare way 1

	// char charr[]={'q','w','e','r','y'};
	// cout<<"name of charr "<<charr<<endl; //prints the bucket value till it gets null


	char charr1[]={'q','w','e','r','y','\0'};
	cout<<"name of charr1 "<<charr1<<endl;


	char charr2[]="codingblocks"; //strings have '\0' at the end by default 
	cout<<"name of charr2 "<<charr2<<endl;


	// size consider
	char charr3[6]="codin"; //null takes 1 space but it is not counted in my length
	cout<<"name of charr3 "<<charr3<<endl;


	// char charr4[100];
	// cin>>charr4; //cin terminates once it get space ' ','\t','\n'
	// cout<<"name of charr4 "<<charr4<<endl;


	// cin.get()//takes single char -->return it

	char charr5[400];

	// char ch1;
	// ch1=cin.get();//'\n'
	// int j=0;
	// while(ch1!='\n'){
	// 	charr5[j]=ch1;
	// 	j++; //3
	// 	ch1=cin.get();//r

	// }
	// charr5[j]='\0';


	// cout<<charr5<<endl;


	// takes string
// 	by default '\n'
	cin.getline(charr5,400,'$'); //directly paragraph //3rd argument-->delimiter--stop kahan hona hai


	cout<<charr5<<endl;

















	
	




	return 0;
}