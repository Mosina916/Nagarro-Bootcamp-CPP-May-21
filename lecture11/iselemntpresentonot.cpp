#include<iostream>
using namespace std;
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




	int target;
	cin>>target; //2


	// // printing of 2d array
	// cout<<"matrix formed is "<<endl;
	// for(int i=0;i<row;i++){
	// 	for(int j=0;j<col;j++){
	// 		cout<<mat[i][j]<<" ";
	// 	}
	// 	cout<<endl;

	// }


	// search target if it is present in mat or not
	int i,j;
	bool ans=false;

	for(i=0;i<row;i++){
		for(j=0;j<col;j++){ //natural way j==col col 3
			if(mat[i][j]==target){ //4

				cout<<"target is present at index "<<i<<" , "<<j<<endl; // i==0 j==2
				// ans=true;

				break; //current loop hum bahar aajate hai 
			}
		}



		// naturally j==col
		// bahar break j value <col
		if(j!=col){ //break statement se bahar aaya hai -->outer loop ko b break karna hai

			break;


		}
		// if(ans==true){
		// 	break;
		// }


	}
	if(i==row){
		cout<<"target is not present"<<endl;
	}

	// if(ans==false){
	// 	cout<<"target is not present"<<endl;

	// }







	// printing of 2d array
	cout<<"matrix formed is "<<endl;
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cout<<mat[i][j]<<" ";
		}
		cout<<endl;

	}
	cout<<endl;

	




	return 0;
}