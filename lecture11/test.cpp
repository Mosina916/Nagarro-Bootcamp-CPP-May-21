#include<iostream>
using namespace std;
int main(){
	// syntax
	// datatype arrname[rows][cols]
	// initilize way 1
	// int mat[3][3]={
	// 	{1,2,3},
	// 	{4,5,6},
	// 	{7,8,9}
	// };



	// row 1
	// cout<<mat[0][0]<<" "; i=0 j=0
	// cout<<mat[0][1]<<" "; i=0 j=1
	// cout<<mat[0][2]<<" "; i=0 j=2
	// // row 2
	// cout<<mat[1][0]<<" "; i=1 j=0
	// cout<<mat[1][1]<<" "; i=1 j=1
	// cout<<mat[1][2]<<" "; i=1 j=2
	// // row 3
	// cout<<mat[2][0]<<" "; i=2 j=0
	// cout<<mat[2][1]<<" "; i=2 j=1
	// cout<<mat[2][2]<<" "; i=2 j=2

	


	// 2nd way //NO OF ROWS CAN BE IGNORED
	// int mat[][3]={
	// 	{1,2,3},
	// 	{4,5,6},
	// 	{7,8,9}
	// };


	// 3RD way 
	// int mat[][3]={
	// 	{1,2,3},
	// 	{4,5},
	// 	{7,8}
	// };

	// 4th way 
	// take input from user


	int mat[100][100];

	int row,col;
	cin>>row>>col;

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

	// for(int i=0;i<3;i++){
	// 	for(int j=0;j<3;j++){
	// 		cout<<mat[i][j]<<" ";
	// 	}
	// 	cout<<endl;

	// }
	// cout<<endl;







	return 0;
}