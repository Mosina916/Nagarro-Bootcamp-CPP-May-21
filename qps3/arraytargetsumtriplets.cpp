#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[1005];
	// taking array elements
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i]; //5 7 9 1 2 4 6 8 3
	}
	int target;
	cin>>target;


	sort(arr,arr+n);  //1 2 3 4 5 6 7 8 9

	for(int i=0;i<=n-3;i++){ //2 loops
		int l=i+1;
		int r=n-1;
		while(l<r){
			if(arr[i]+arr[l]+arr[r]>target){
				r--;
			}
			else if(arr[i]+arr[l]+arr[r]==target){
				cout<<arr[i]<<", "<<arr[l]<<" and "<<arr[r]<<endl;
				r--;
				l++;
			}
			else{
				l++;

			}

		}

	}
	cout<<endl;




	return 0;
}