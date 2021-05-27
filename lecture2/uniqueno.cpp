#include<iostream>
#include<climits>
using namespace std;
int main(){
	int n;
	cin>>n; //5
	// int i=1;
	int xo=0;
	// while(i<=n){
	// 	// task
	// 	int no; //3 1
	// 	cin>>no;
	// 	xo=(xo^no);//2

	// 	i=i+1; //3
	// }
	


	for(int i=1;i<=n;i=i+1){
		int no; //3 1
		cin>>no;
		xo=(xo^no);//2


	}
	cout<<"xor of n numbers is  "<<xo<<endl;



	return 0;
}