#include<iostream>
using namespace std;
int main(){
	int arr[]={3,1,6,9,4,2,5};
	int key=10;
	int i;
	for(i=0;i<=6;i++){ //i=7
		if(arr[i]==key){
			cout<<"key present at index "<<i<<endl;
			break;
		}
	}
	if(i==7){
		cout<<"key is not present"<<endl;
	}
	


	return 0;
}