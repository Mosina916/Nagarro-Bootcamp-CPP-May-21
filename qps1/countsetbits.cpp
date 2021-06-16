#include<iostream>
using namespace std;
int main(){

	int t;
	cin>>t; //3
	for(int i=1;i<=t;i++){
		int n;
	int count=0;
	cin>>n; //5-->101  -->set bit -->1
	while(n!=0){
		if((n&1)==1){ //(n&1)-->gives last bit -->1 -->count increment by 1 last bit ignore ,0-->last bit ignore
			count ++;

		} 
		n=n>>1; //last bit ignore 



	}

	cout<<count<<endl;

	}
	



	return 0;
}