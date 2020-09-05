#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n,x,y;
	cin>>n>>x>>y;
	bool okay=true;
	if(n==2){
		cout<<x<<" "<<y<<" ";
		okay=false;
	}
	n=n-2;
	int totals=n+1;
	int minDiff=y-x;
	for(int i=1;okay && i<=minDiff;i++){
		int pairs=minDiff/i;
		if(minDiff%i==0 && pairs<=totals){
			for(int j=1;j<pairs;j++){
				cout<<(x+i*j)<<" ";
			}
			int j=x-i;
			while(pairs<totals && j>0){
				cout<<j<<" ";
				j=j-i;
				pairs++;
			}
			j=y+i;
			while(pairs<totals){
				cout<<j<<" ";
				j=j+i;
				pairs++;
			}
			cout<<x<<" "<<y<<" ";
			okay=false;
		}
	}
	cout<<endl;
}
int32_t main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}



 
