#include<iostream>
using namespace std;
int co=0;
int sol[100][100]={0};
bool ratinamaze(char maze[][10],int i,int j,int m,int n){
	// base case
	if(i==n-1&&j==m-1){
		sol[i][j]=1;
		for(int k=0;k<n;k++){
			for(int l=0;l<m;l++){
				cout<<sol[k][l]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
		co++;
		// return true;
		sol[i][j]=0; //bracktracking
		return false;
	}




	// recursive case
	//jis cell pe khadi hun wahan 1 kardo
	sol[i][j]=1; //2 3
	// rightwards move
	if(j+1<m&&maze[i][j+1]!='X'){
		// mai aage bud sakti hun
		bool kyaaageseansmila=ratinamaze(maze,i,j+1,m,n); 
		if(kyaaageseansmila==true){
			return true;
		}
	}

	// for downwards
	if(i+1<n&&maze[i+1][j]!='X'){
		// mai neeche jaa sakti hun
		bool kyamujheneecheseansmila=ratinamaze(maze,i+1,j,m,n); //call i=3 j=3
		if(kyamujheneecheseansmila==true){
			return true;

		}

	}
	// wo ab path ka part nahi hoga
	sol[i][j]=0; //backtracking

	return false;



}


int main(){
	
	char maze[][10]={
		"0000",
		"00XX",
		"0000",
		"XX00"
	};
	int m=4; //m-->col
	int n=4; //n-->rows
	ratinamaze(maze,0,0,m,n);
	if(co!=0){

		cout<<"solution exist"<<endl;
	}
	
	else{
		cout<<"solution don't exist"<<endl;
	}


	
	return 0;
}