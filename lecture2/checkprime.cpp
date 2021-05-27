#include<iostream>
#include<climits>
using namespace std;
int main(){
	int n;
	cin>>n;//7
	int i=2; //initilization
	while(i<=n-1){//condition check
		if(n%i==0){
			cout<<"not prime"<<endl;
			return 0;


	}	
		i=i+1;


	}
	cout<<"prime"<<endl;


	return 0;
}