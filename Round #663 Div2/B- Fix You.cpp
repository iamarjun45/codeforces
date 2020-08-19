#include<bits/stdc++.h>
using namespace std;
 
int n,m;
void solve(){
	cin>>n>>m;
	vector<string> arr(n);
	int count=0;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int j=0;j<m-1;j++){
		if(arr[n-1][j]=='D')
			count++;
	}
	for(int i=0;i<n-1;i++){
		if(arr[i][m-1]=='R')
			count++;
	}
	cout<<count<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
