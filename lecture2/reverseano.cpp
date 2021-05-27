#include<iostream>
#include<climits>
using namespace std;
int main(){
	int n;
	cin>>n;//5432
	// while(n){ //non zero value true 0 false
	// 	cout<<n%10;
	// 	n=n/10;
	// }
	// cout<<endl;


	int rev=0;


	// while(n>0){ //non zero value true 0 false
	// 	int rem=n%10;
	// 	n=n/10; //updation
	// 	rev=rev*10+rem;
	// }
	// cout<<"Reverse of a no is "<<rev<<endl;
	// cout<<"Reverse of a no +100 is "<<rev+100<<endl;
	

	cout<<endl;


	// for syntax


	// for(initilization;condition check;updation){

	// }


	for(;n>0;n=n/10){
		int rem=n%10;
		rev=rev*10+rem;

	}
	cout<<"Reverse of a no is "<<rev<<endl;
	cout<<"Reverse of a no +100 is "<<rev+100<<endl;
	

	cout<<endl;


	return 0;
}