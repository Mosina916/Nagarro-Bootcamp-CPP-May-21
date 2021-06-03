#include<iostream>
#include<climits>
using namespace std;


void isprime(){
	int n;
	cin>>n;//7
	int i=2; //initilization
	while(i<=n-1){//condition check
		if(n%i==0){
			cout<<"not prime"<<endl;
			// return 0;
			break;


	}	
		i=i+1;


	}
	if(i==n){
		cout<<"prime"<<endl;

	}
	

}

void isprime2(int no){
	
	int i=2; //initilization
	while(i<=no-1){//condition check
		if(no%i==0){
			cout<<"not prime"<<endl;
			// return 0;
			break;


	}	
		i=i+1;


	}
	if(i==no){
		cout<<"prime"<<endl;

	}
	

}




int main(){
	int n;


	for(int i=1;i<=5;i++){
		
		cin>>n;
		isprime2(n);

	}

	
	// isprime();
	


	return 0;
}