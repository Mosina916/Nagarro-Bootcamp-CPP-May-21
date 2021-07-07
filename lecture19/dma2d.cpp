#include<iostream>
using namespace std;

int main(){

	int rows,cols; //5 4
	cin>>rows>>cols;
	// sma
	// int arr[5][4];


	// dma
	int **arr=NULL;
	arr=new int*[rows];


	for(int i=0;i<rows;i++){
		arr[i]=new int[cols];

	}
	//taking i/p

	for(int i=0;i<rows;i++){
		for (int j = 0; j < cols; j++)
		{
			cin>>arr[i][j];
		}
	}

	// printing
	for(int i=0;i<rows;i++){
		for (int j = 0; j < cols; j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;


	// delete
	for(int i=0;i<rows;i++){
		delete [] arr[i];
	}

	delete[] arr;
	arr=NULL;







	return 0;
}