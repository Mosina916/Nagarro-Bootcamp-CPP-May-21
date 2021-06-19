#include<iostream>
#include<algorithm>
using namespace std;

void searchinmatrix(int arr[][1000],int rows,int cols,int target){
	int j=0; //j-->denotes row
	int i=cols-1;


	while(j<=rows-1&&i>=0){
		if(arr[j][i]<target){
		j++;
	}
	else if(arr[j][i]==target){
		cout<<target<<" is present at index "<<j<<" "<<i<<endl;
		return; //exit

	}
	else{
		i--;
	}

	}

	cout<<target<<" is not present in matrix"<<endl;

	
}
int main(){
	int rows,cols;
	cin>>rows>>cols;
	int arr[1000][1000];
	// 2d input


	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			cin>>arr[i][j];
		}
		/* code */
	}


	int target;
	cin>>target;
	searchinmatrix(arr,rows,cols,target);


	return 0;
}