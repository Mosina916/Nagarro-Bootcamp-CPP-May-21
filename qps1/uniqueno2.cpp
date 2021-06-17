#include<iostream>
using namespace std;

int main(){
	int n;
	int ans=0;
	int x;
	cin>>n;
	int arr[1000000];
	for (int i = 0; i < n; ++i)
	{
		cin>>x; //2
		ans=ans^x; //3^2



		arr[i]=x;
	}
	// cout<<ans<<endl; //2

	int temp=ans; //2;
	int location=0;
	int m;

	while(temp>0){
		if((temp&1)==1){
		m=location;
		break;//ki mujhe pehla set bit mil gaya m pe 


	}
	else{
		location++;
		temp=temp>>1;

	}

	}

	int mask=(1<<m);
	int res=0;

	for(int i=0;i<n;i++){
		if((arr[i]&mask)>0){
			res=res^arr[i];

			// cat 1
		}
	
	}


	// cout<<res<<endl; //6
	int res2=res^ans;
	// cout<<res2<<endl; //4

	cout<<min(res,res2)<<" "<<max(res,res2)<<endl;

	




	



	



	return 0;
}