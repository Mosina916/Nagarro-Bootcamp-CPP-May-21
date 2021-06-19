#include<iostream>
using namespace std;
void formmatrix(char mat[][100],int row,int col){
	int sr=0;
	int er=row-1;
	int sc=0;
	int ec=col-1;
	char ch='O';


	while(sc<=ec&&sr<=er){
		// pehle row ko print karna hai
	for(int i=sc;i<=ec;i++){
		mat[sr][i]=ch;

	}
	sr++;

	// last col
	for(int j=sr;j<=er;j++){
		mat[j][ec]=ch;

	}
	ec--;
	// last row


	
	for(int i=ec;i>=sc;i--){
		mat[er][i]=ch;
	}
	er--;

	


	// ist row

		for(int j=er;j>=sr;j--){
		mat[j][sc]=ch;

	}
	sc++;

	if(ch=='O'){
		ch='X';
	}
	else{
		ch='O';

	}


	






	}
	
}
int main(){
	
	char mat[100][100];

	int row,col;
	cin>>row>>col; //4 3

	formmatrix(mat,row,col);

	


	// printing of 2d array
	cout<<"matrix formed is "<<endl;
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cout<<mat[i][j]<<" ";
		}
		cout<<endl;

	}
	cout<<endl;


	// spiralprint(mat,row,col);






	

	




	return 0;
}