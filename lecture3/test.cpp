#include<iostream>
#include<climits>
using namespace std;
int main(){
	int no;
	cin>>no;//7
	int n=2;

	while(n<=no){
		//to check one number if it is prime or not //l9 l25
	bool isprime=true;
	int i=2; //initilization
	while(i<=n-1){//condition check
		if(n%i==0){
			isprime=false;
			break; //break the current loop
			// return 0;

	}	
		i=i+1;


	}

	if(isprime==true){
		cout<<n<<" ";

	}
	n=n+1;

	}
	cout<<endl;




	




	
	


	return 0;
}