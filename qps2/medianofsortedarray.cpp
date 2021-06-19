#include<iostream>
using namespace std;
void multiply(int *arr,int &digittoiterate,int no){
	int carry=0;
	for(int i=0;i<digittoiterate;i++){ //digittoiterate-->1
		int product=arr[i]*no+carry; //24
		arr[i]=product%10; //4
		carry=product/10; //24/10


	}

	while(carry!=0){
	arr[digittoiterate]=carry%10; 

	carry=carry/10; 


	digittoiterate++;

	}
	

}


void factorial(int num){
	int arr[1000];
	arr[0]=1;
	int digittoiterate=1;
	for(int i=2;i<=num;i++){
		multiply(arr,digittoiterate,i);


	}


	for(int i=digittoiterate-1;i>=0;i--){
		cout<<arr[i];
	}
	cout<<endl;

	cout<<"total digits "<<digittoiterate<<endl;

}


int main(){
	int n;
	cin>>n; //5
	factorial(n);


	return 0;
}