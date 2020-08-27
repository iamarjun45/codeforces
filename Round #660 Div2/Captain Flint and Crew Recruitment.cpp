#include<bits/stdc++.h>
using namespace std;

int n;
void solve(){
	cin>>n;
	if(n<=30){
		cout<<"NO\n";
		return;
	}
	int a=6,b=10,c=14,d=15;
	if(n%2!=0 || (n-30!=a && n-30!=b && n-30!=c))
		cout<<"YES\n6 10 14 "<<n-30<<"\n";
	else{
		cout<<"YES\n6 10 15 "<<n-31<<"\n";
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



 
