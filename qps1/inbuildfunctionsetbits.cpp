#include<iostream>
using namespace std;
int main(){

	int t;
	cin>>t; //3
	for(int i=1;i<=t;i++){
		int n;
	int count=0;
	cin>>n; //5-->101  -->set bit -->1

	// __builtin_popcount(n) -->to find no of set bits

	cout<<__builtin_popcount(n)<<endl;

	}
	



	return 0;
}