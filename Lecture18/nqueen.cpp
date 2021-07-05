#include<iostream>
using namespace std;
int co=0;

bool kyamaiqueenrakhsaktihun(int board[50][50],int i,int j,int n){
	// vertically check and horizental check
 
	// rowwise check karna zaruri nahi hai
	for(int k=0;k<n;k++){
		if(board[i][k]==1||board[k][j]==1){
			return false;

		}
	}


	// col
	// for(int k=0;k<n;k++){
	// 	if(board[k][j]==1){
	// 		return false;

	// 	}
	// }

	int r=i,c=j;


	// diagonally check-->right

	while(i>=0&&j<n){
		if(board[i][j]==1){
		return false;
	}
	i--;
	j++;

	}

	// diagonally check -->left
	while(r>=0&&c>=0){
		if(board[r][c]==1){
			return false;
		}



		r--;
		c--;
	}


	return true;

}
bool nqueen(int board[50][50],int i,int n){
	// base case //stopping condition
	if(i==n){
		for(int k=0;k<n;k++){
			for (int l = 0; l <n; l++)
			{
				if(board[k][l]==1){
					cout<<"Q ";
				}
				else{
					cout<<"- ";
				}

			}
			cout<<endl;
		}
		cout<<endl;
		co++;
		// return true;
		return false;
	}



	// recursive case
	for(int j=0;j<n;j++){
		if(kyamaiqueenrakhsaktihun(board,i,j,n)){
			board[i][j]=1;
			bool kyabakiboardseansmila=nqueen(board,i+1,n);
			if(kyabakiboardseansmila==true){
				return true;
			}
			board[i][j]=0; //backtracking




		}
	}
	return false;


}
int main(){
	int board[50][50]={0};
	int n;
	cin>>n;
	nqueen(board,0,n);

	cout<<endl;

	cout<<"Total patterns "<<co<<endl;
	if(co>0){

	}
	else{
		
	}



	return 0;
}