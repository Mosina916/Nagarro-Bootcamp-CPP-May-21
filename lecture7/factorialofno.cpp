#include<iostream>
#include<climits>
using namespace std;

int fact(int n){ //decleration

	// definition
	int ans=1; //n==4
	for(int i=1;i<=n;i++){
		ans=ans*i; //24
	}

	// cout<<"factorial of "<<n<<" is "<<ans<<endl;
	return ans;

}

int ncr(int n,int r){
	int finalans=fact(n)/(fact(r)*fact(n-r));
	return finalans;

}

int main(){
	// int n;
	// cin>>n; //5

	// cout<<"factorial of "<<n<<" is "<<fact(n)<<endl;


	int n,r;
	cin>>n>>r; //n>=r; //n==5// r==2
	// formula ncr=fact(n)/(fact(r)*fact(n-r));

	// int ans=fact(n)/(fact(r)*fact(n-r));

	// ncr(n,r);

	

	cout<<"ncr is "<<ncr(n,r)<<endl;

	

	
	
	


	return 0;
}