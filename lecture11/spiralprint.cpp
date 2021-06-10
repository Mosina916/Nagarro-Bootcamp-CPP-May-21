#include<iostream>
using namespace std;
void spiralprint(int mat[][100],int row,int col){
	int sr=0;
	int er=row-1;
	int sc=0;
	int ec=col-1;


	while(sc<=ec&&sr<=er){
		// pehle row ko print karna hai
	for(int i=sc;i<=ec;i++){
		cout<<mat[sr][i]<<" ";

	}
	sr++;

	// last col
	for(int j=sr;j<=er;j++){
		cout<<mat[j][ec]<<" ";

	}
	ec--;
	// last row


	if(sr<er){
			for(int i=ec;i>=sc;i--){
		cout<<mat[er][i]<<" ";
	}
	er--;

	}


	// ist row
	if(sc<ec){
		for(int j=er;j>=sr;j--){
		cout<<mat[j][sc]<<" ";

	}
	sc++;

	}
	






	}
	
}
int main(){
	
	int mat[100][100];

	int row,col;
	cin>>row>>col; //4 3

	// input from user
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cin>>mat[i][j];

		}

	}


	// printing of 2d array
	cout<<"matrix formed is "<<endl;
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cout<<mat[i][j]<<" ";
		}
		cout<<endl;

	}
	cout<<endl;


	spiralprint(mat,row,col);






	

	




	return 0;
}