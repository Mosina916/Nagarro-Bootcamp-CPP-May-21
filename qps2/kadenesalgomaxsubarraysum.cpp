#include<iostream>
using namespace std;
#define ll long long int
int main(){
	int t,n;
	ll a[1000000];
	cin>>t;//2
	for (int i = 1; i <=t; ++i)
	{
		cin>>n;
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
		}
		// int cs=0;
		// int ms=0;
		ll cs=0,ms=0;

		for(int i=0;i<n;i++){
			cs=cs+a[i];
			if(cs<0){
				cs=0;
			}
			ms=max(ms,cs);

		}
		cout<<ms<<endl;


		


	}

	return 0;
}