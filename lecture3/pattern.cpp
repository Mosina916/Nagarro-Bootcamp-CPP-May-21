#include<iostream>
#include<climits>
using namespace std;
int main(){
	int n;
	cin>>n;
	int rowno=1;
	//take case of all rows
	while(rowno<=n){

		//  i have done task of 1 row

		// for printing spaces
		int spaces=1;
		while(spaces<=n-rowno){
			cout<<'\t';
			spaces=spaces+1;

		}

		// nos in increasing order
		int inc=1;//the count of values it has to print
		int val=rowno;
		while(inc<=rowno){
			cout<<val<<'\t';
			val=val+1;
			inc=inc+1;

		}



		// nos in decreasing order
		int dec=1;
		int v=2*rowno-2;
		while(dec<=rowno-1){
			cout<<v<<'\t';
			v=v-1;


			dec=dec+1;

		}





		cout<<endl;
		rowno=rowno+1;


	}
	cout<<endl;

	

	return 0;
}