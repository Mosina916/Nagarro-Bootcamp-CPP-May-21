#include <iostream>
using namespace std;

void display(int a[][10], int r, int c);


int main() {
	int r,c;
	int a[10][10];
	
	cin >> r >> c;
	// int a[r][c]; int n; cin>>n ;int arr[n];
	
	for(int i=0; i<=r-1; i++) {
		for(int j=0; j<=c-1; j++) {
			cin >> a[i][j];
		}
	}
	display(a, r, c);
	return 0;
}

void display(int a[][10], int r, int c) {
	for(int i=0; i<=r-1; i++) {
		for(int j=0; j<=c-1; j++) {
			cout << a[i][j] << " ";
		}
		cout << "\n";
	}
	return;
}
