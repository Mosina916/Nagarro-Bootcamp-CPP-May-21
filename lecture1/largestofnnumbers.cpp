#include<iostream>
#include<climits>
using namespace std;
int main(){
	int n;
	cin>>n; //4
	int largest=INT_MIN;//-2^31 //6
	int i=1; //initilization//i will keep the track how many numbers i have taken till now
	while(i<=n){ //condition check
		int no; 
		cin>>no;//5 4 6 2
		if(no>largest){
			largest=no;

		}
		i=i+1; //updation //increment by 1

	}
	cout<<"largest of n nos is "<<largest<<endl;


	return 0;
}