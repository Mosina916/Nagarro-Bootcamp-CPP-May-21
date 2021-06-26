#include<iostream>
using namespace std;
// string to int
int stringtoint(char*arr,int l){ // "2145"
	// base case 
	if(l==0){
		return 0;
	}


	// recursive case
	//arr[l-1]-->'5'
	int digit=arr[l-1]-'0';//53-48 -->5
	int chotaasn=stringtoint(arr,l-1); // //"214"-->214
	int badaans=chotaasn*10+digit;
	return badaans;

}


int main(){
	char arr[100];
	cin>>arr;// "2145" + "10"-->this is possible
	// cout<<arr+100<<endl;
		//"2145" + 10-->this is not possible
	int l=strlen(arr); //4
	int ans=stringtoint(arr,l); //2145+100
	cout<<ans<<endl;
	cout<<ans+100<<endl;






	return 0;
}