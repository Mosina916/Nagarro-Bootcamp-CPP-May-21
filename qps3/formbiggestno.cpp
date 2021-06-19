#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int countdigits(int no){
	int c=0;
	while(no>0){
		no=no/10;
		c++;

	}
	return c;
}
int main(){
	int t,n;
	int arr[105];
	cin>>t;

	while(t--){
		cin>>n;
	
		for (int i = 0; i < n; ++i)
		{
			cin>>arr[i];
		}

		//2 4 6 7 8

		for(int i=0;i<=n-2;i++){ //n==4 i-->0 1 2
			for(int j=0;j<=n-2-i;j++){
				int fn=arr[j];
				int sn=arr[j+1];
				int fd=countdigits(fn);
				int sd=countdigits(sn);

				long long int no1=fn*pow(10,sd)+sn;
				long long int no2=sn*pow(10,fd)+fn;
				if(no1>no2){
					int temp=arr[j];
					arr[j]=arr[j+1];
					arr[j+1]=temp;
				}

			}
		}
		for (int i = n-1; i>=0; i--)
		{
			cout<<arr[i];
		}
		cout<<endl;

	}

	


	return 0;
}