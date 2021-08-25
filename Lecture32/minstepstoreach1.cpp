#include<iostream>
using namespace std;
// recursive sol
int minstepstoreach1(int n){
	// base case
	if(n==1){
		return 0;
	}


	// recursive case
	int op1,op2,op3;
	op1=op2=op3=INT_MAX;

	op1=minstepstoreach1(n-1); //2

	if(n%2==0){
		op2=minstepstoreach1(n/2); //4

	}
	if(n%3==0){
		op3=minstepstoreach1(n/3);
	}


	return min(op1,min(op2,op3))+1;

}




// topdown sol


int topdownminstepstoreach1(int n,int *dp){

	// return karne se pehle store

	// base case
	if(n==1){
		return dp[n]=0;
	}



	// calculate karne se pehle check
	if(dp[n]!=-1){
		return dp[n];
	}


	// recursive case
	int op1,op2,op3;
	op1=op2=op3=INT_MAX;

	op1=topdownminstepstoreach1(n-1,dp); //2

	if(n%2==0){
		op2=topdownminstepstoreach1(n/2,dp); //4

	}
	if(n%3==0){
		op3=topdownminstepstoreach1(n/3,dp);
	}


	return dp[n]=min(op1,min(op2,op3))+1;

}

// bottom sol
int bottomupminstepstoreach1(int n){
	int *arr=new int[n+1];


	// base case-->initilization condition

	arr[1]=0;
	int op1,op2,op3;

	for(int i=2;i<=n;i++){
		
		op2=op1=op3=INT_MAX;
		op1=arr[i-1];
		if(i%2==0){
			op2=arr[i/2];
		}
		if(i%3==0){
			op3=arr[i/3];
		}
		arr[i]=min(op1,min(op2,op3))+1;
	}


	for(int i=1;i<=n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;

	int ans=arr[n];
	delete[] arr;
	return ans;




}

int main(){
	int n;
	cin>>n;

	int *arr=new int[n+1];

	for (int i = 1; i <=n; ++i)
	{
		arr[i]=-1;
	}

	cout<<"Top down "<<topdownminstepstoreach1(n,arr)<<endl;


	for(int i=1;i<=n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;


	cout<<"bottomupminstepstoreach1 "<<bottomupminstepstoreach1(n)<<endl;


	cout<<"minstepstoreach1 "<<minstepstoreach1(n)<<endl; //recursive sol



	return 0;
}