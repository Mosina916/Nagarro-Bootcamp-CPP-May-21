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


	// printing of 2d array
	cout<<"matrix formed is "<<endl;
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cout<<mat[i][j]<<" ";
		}
		cout<<endl;

	}
	cout<<endl;


	cout<<" result of wave print is "<<endl<<endl;

	//wave print
	// iterate over col
	for(int j=0;j<col ;j++){
		// check if col no is even or odd
		if(j%2==0){ 
			//agar j even hai
			for(int i=0;i<row;i++){
				// top se bottom print karna hai
				cout<<mat[i][j]<<" ";
			}

		}
		else{
			// agar j odd hai
			for(int i=row-1;i>=0;i--){
				// bottom se top print hoga
					cout<<mat[i][j]<<" ";
			}

		}


	}

	cout<<endl;







	

	




	return 0;
}