#include<iostream>
using namespace std;

int main(){
	// NESNWES\n
	int x=0;
	int y=0;
	// e x++;
	// w x--;
	// n y++;
	// s y--;

	char ch;
	ch=cin.get();
	while(ch!='\n'){
		if(ch=='E'){
			x++;

		}
		else if(ch=='W'){
			x--;
		}
		else if(ch=='N'){
			y++;
		}
		else{
			y--;
		}
		ch=cin.get();


	}

	// cout<<"value of x is "<<x<<endl; //1 //E
	// cout<<"value of y is "<<y<<endl; //0

	// for 1st quad check
	if(x>=0&&y>=0){
		// E --> x
		// for(int count=1;count<=x;count++){
		// 	cout<<'E';
		// }

		int count=1;
		while(count<=x){
				cout<<'E';
				count++;

		}

		// N -->y
		for(int count=1;count<=y;count++){
			cout<<'N';
		}

	}
	// for 2nd quad check
	else if(x<=0&&y>=0){
		// N y
			for(int count=1;count<=y;count++){
			cout<<'N';
		}


		// W x negative  -2
		for(int count=1;count<=abs(x);count++){
			cout<<'W';
		}


	}
	// for 3rd quad check
	else if(x<=0&&y<=0){

		// S y
		for(int count=1;count<=abs(y);count++){
			cout<<'S';
		}



		// W x
			for(int count=1;count<=abs(x);count++){
			cout<<'W';
		}


	}
	// for 4th quad check
	else{
		// E  x
		int count=1;
		while(count<=x){
				cout<<'E';
				count++;

		}




		// S y
		for(int count=1;count<=abs(y);count++){
			cout<<'S';
		}



	}
	cout<<endl;

	return 0;
}
