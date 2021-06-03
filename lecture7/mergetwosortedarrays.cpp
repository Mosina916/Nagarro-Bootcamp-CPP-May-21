#include<iostream>
using namespace std;

int main(){
	int a1[8]={2,4,6};
	int a2[5]={0,1,3,5,7};
	int m=3;
	int n=5;

	int i=m-1;
	int j=n-1;
	int k=m+n-1;
	while(i>=0&&j>=0){
		if(a2[j]>a1[i]){
			a1[k]=a2[j];
			j--;
			k--;
		}
		else{
			a1[k]=a1[i];
			i--;
			k--;
		}
	}
	//i ki help se above loop terminate huva hai mtlb j wali array mai abhi b elements hai
	while(j>=0){
		a1[k]=a2[j];
		j--;
		k--;

	}
	//j ki help se above loop terminate huva hai mtlb i wali array mai abhi b elements hai

	while(i>=0){
		a1[k]=a1[i];
		i--;
		k--;


	}
	for(int i=0;i<=m+n-1;i++){
		cout<<a1[i]<<" ";
	}
	cout<<endl;
	




	return 0;
}