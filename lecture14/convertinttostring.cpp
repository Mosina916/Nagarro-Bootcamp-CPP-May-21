#include<iostream>
#include<cstring>
using namespace std; 
// convert no. into string form
// map every index ko uske words form k saath

//s[0]-->zero s[1]-->one
string s[]={"zero","one","two","three","Four","five","Six","Seven","Eight","Nine"};

void inttostringformdec(int n){ //2048  204 20 2 0
	// base case
	if(n==0){
		// cout<<"zero"<<endl;
		return;

	}



	// recursive case
	int digit=n%10; //8  4 0 2
	cout<<s[digit]<<" "; //Eight Four Zero two
	inttostringformdec(n/10); //2048/10-->204/10-->20/10-->2/10-->0



}

void inttostringforminc(int n){ //2048  204 20 2 0
	// base case
	if(n==0){


		return;

	}
	// 2048-->two zero four eight


	// recursive case
	int digit=n%10;  //8
	inttostringforminc(n/10); 
	cout<<s[digit]<<" ";


}



int main(){
	int n; 
	cin>>n; //2048

	// if(n==0){
	// 	cout<<"zero"<<endl;
	// }
	// else{
		inttostringformdec(n);
		cout<<endl;

	// }
	

	inttostringforminc(n);
		cout<<endl;
	

	return 0;
}