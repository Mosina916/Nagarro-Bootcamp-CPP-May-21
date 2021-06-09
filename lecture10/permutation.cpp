#include<iostream>
using namespace std;
int length(char *arr){
	int co=0;
	int i=0;


	while(arr[i]!='\0'){
		co++;
		i++;


	}

	return co;
	
}

void copy(char *a,char *b){ //b mai copy karna hai a ko
	int i=0;
	int j=0;
	while(i<=length(a)){

		b[j]=a[i];
		i++;
		j++;

	}

}
int main(){

	
	char arr1[100];//aabbcxd 
	char arr2[100];
	cin>>arr1>>arr2;

	int freq[26]={0}; //initilize whole freq array with 0

	int larr1=length(arr1); //7

	//iterating on arr1 and incrementing the count
	for(int i=0;i<=larr1-1;i++){
		int index=arr1[i]-'a';
		freq[index]++;
	}
		//iterating on arr2 and decrementing the count
	int larr2=length(arr2);
	for(int i=0;i<=larr2-1;i++){
		int index=arr2[i]-'a';
		freq[index]--;
	}

	int i;
	for(i=0;i<=25;i++){
		if(freq[i]!=0){
			cout<<"not permutation"<<endl;
			break;
		}
	}
	if(i==26){
		cout<<"permutation"<<endl;


	}






	return 0;
}