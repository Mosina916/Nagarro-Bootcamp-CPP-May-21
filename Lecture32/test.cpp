#include<iostream>
using namespace std;
// recursive sol
int fibo(int n){
	if(n==0||n==1){
		return n;

	}
	return fibo(n-1)+fibo(n-2);

}
// top down
int fibo2(int n,int *dp){
	// return karne se pehle store
	if(n==0||n==1){
		return dp[n]=n;

	}
	// calculate karne se pehle check already calculated tou nahi hai
	if(dp[n]!=-1){
		return dp[n];
	}
	return dp[n]=fibo2(n-1,dp)+fibo2(n-2,dp);

}
// bottom up sol
int bottomupfibo(int n){
	int *dp=new int[n+1];
	// top down base case -->initilization

	dp[0]=0;
	dp[1]=1;


	for(int i=2;i<=n;i++){
		dp[i]=dp[i-1]+dp[i-2];
	}


	// print 


	for(int i=0;i<=n;i++){
		cout<<dp[i]<<" ";
	}
	cout<<endl;

	int ans=dp[n]; //5
	delete[] dp;

	// return arr[n];

	return ans;

}


int main(){
	int n;
	cin>>n;

	// int arr[n+1];

	int *arr=new int[n+1];

	for (int i = 0; i <=n; ++i)
	{
		arr[i]=-1;
	}


	cout<<"Top up solution "<<fibo2(n,arr)<<endl; //dp


	for(int i=0;i<=n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;


	cout<<"Bottom up solution "<<bottomupfibo(n)<<endl;





	cout<<"Simple recursion "<<fibo(n)<<endl; //recursive sol





	return 0;
}