#include<iostream>
using namespace std;
int main(){
	// char a[100]="1234...@3674.?74&764..$573...435...&&?7234....";

	char a[100]="123yt4...@3dfg#d674.?74&7abf64..$573dfgd...43etr5..djfgh.&&?72tyu34....";
	char *ptr=strtok(a,".@?#$&1234567890");
	// cout<<ptr<<endl;

	// ptr=strtok(a,".@?$&");
	// ptr=strtok(NULL,".@?$&"); //NULL -->yaad rakhta hai previous address jahan tak tum aaye ho
	// cout<<ptr<<endl;
	// ptr=strtok(NULL,".@?$&"); //NULL -->yaad rakhta hai previous address jahan tak tum aaye ho
	// cout<<ptr<<endl;

	// ptr=strtok(NULL,".@?$&"); //NULL -->yaad rakhta hai previous address jahan tak tum aaye ho
	// cout<<ptr<<endl;


	for(;ptr!=NULL;){
		cout<<ptr<<" ";
		ptr=strtok(NULL,".@?$&#1234567890");


	}

	// while(ptr!=NULL){
	// 	cout<<ptr<<" ";
	// 	ptr=strtok(NULL,".@?$&1234567890");


	// }
	cout<<endl;




	return 0;
}