#include<iostream>
#include<climits>
using namespace std;
int main(){
	int tr;
	cin>>tr; //5
	int rowno=1;

	// 1
	// 2 3
	//3// 4 5 6
	// 7 8 9 10
	int val=1;
	while(rowno<=tr){//will keep track of rows

		// task //to print nos in increasing order

		int count=1;
		while(count<=rowno){
			// print
			cout<<val<<" ";
			count=count+1;
			val=val+1;		

		}
		
		cout<<endl;
		rowno=rowno+1;


	}


	return 0;
}