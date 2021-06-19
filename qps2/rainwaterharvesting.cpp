#include<iostream>
using namespace std;
int height[10000000],lef[1000000],righ[1000000]; //globally declare
int main(){
	
	int n;
	cin>>n;
	 // input 
	for (int i = 0; i < n; ++i)
	{
		cin>>height[i];
	}
	int i=0;
	// left -->contain max height of every building till that index from left
	lef[i]=height[i];
	for(i=1;i<=n-1;i++){
		lef[i]=max(height[i],lef[i-1]);
	}

	// right -->contain max height of every building till that index from  right
	righ[n-1]=height[n-1];
	for(i=n-2;i>=0;i--){
		righ[i]=max(height[i],righ[i+1]);

	}
	//total amount of water
	int water=0;
	for(int i=0;i<n;i++){
		water=water+min(lef[i],righ[i])-height[i];
	}
	cout<<water<<endl;




	return 0;
}