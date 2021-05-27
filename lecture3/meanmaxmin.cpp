#include<iostream>
#include<climits>
using namespace std;
int main(){
	int n;
	cin>>n; //4 -->9 6 7 3
	int co=1; //init
	int sum=0;//initial sum is zero
	int min=INT_MAX; //6
	int max=INT_MIN;//9
	while(co<=n){
		// task-->take no
		int no; 
		cin>>no;//9 6
		if(no>max){
			max=no;


		}
		if(no<min){
			min=no;
		}
		sum=sum+no; //15

		// updation
		co=co+1; //2

	}
	cout<<"mean of n numbers is "<<(sum/n)<<endl;
	cout<<"maximum no is "<<max<<endl;
	cout<<"minimum no is  "<<min<<endl;






	return 0;
}