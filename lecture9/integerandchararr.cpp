#include<iostream>
using namespace std;

int main(){
	int a;
	char arr[100];
	cin>>a;
	cin.get();
	// cin.ignore();//ignores a char
	cin.getline(arr,100);


	cout<<a<<endl;
	cout<<arr<<endl;


	return 0;
}