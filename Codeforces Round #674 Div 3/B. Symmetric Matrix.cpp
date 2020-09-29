
#include<bits/stdc++.h>
#define int long long
using namespace std;
 
void solve(){
	int n,m;
	cin>>n>>m;
	bool ans=false;
	for(int i=0;i<n;i++){
		int _,a,b;
		cin>>_>>a>>b>>_;
		if(a==b)
			ans=true;
	}
	if(m%2!=0){
		cout<<"NO\n";
	}
	else if(ans){
		cout<<"YES\n";
	}else{
		cout<<"NO\n";
	}
}
int32_t main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
