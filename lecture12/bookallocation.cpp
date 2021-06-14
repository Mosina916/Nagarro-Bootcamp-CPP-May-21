#include<iostream>
using namespace std;
#define ll long long int
bool kyamidkjitnicapacitydekarsaaribookskhatamhosaktihai(int *books,int n,int m,int capacity){
	int student=1;
	int current=0;
	for(int i=0;i<n;i++){
		if(current+books[i]>capacity){
			//naya student assign karna hai
			student++;
			current=books[i];
			if(student>m){
				return false;
			}

		}
		else{
			current=current+books[i];
		}

	}
	return true;
}
int bookallocation(int* books,int n,int m){
	ll totalpages=0;
	for (int i = 0; i < n; ++i)
	{
		totalpages=totalpages+books[i];
	}
	ll s,e;
	s=books[n-1];
	e=totalpages;
	int finalans=s;

	while(s<=e){
	int mid=(s+e)/2;
		if(kyamidkjitnicapacitydekarsaaribookskhatamhosaktihai(books,n,m,mid)){
			finalans=mid;
			e=mid-1;

		}
		else{
			s=mid+1;
		}

	}
	return finalans;



}
int main(){
	int t,n,m; //n -->no of books, m-->no of students
	cin>>t;
	while(t--){
		cin>>n>>m;
		int books[100005];
		for(int i=0;i<n;i++){
			cin>>books[i];
		}
	cout<<bookallocation(books,n,m)<<endl;



	}


	return 0;
}