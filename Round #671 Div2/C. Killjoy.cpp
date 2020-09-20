#include<bits/stdc++.h>
#define int long long
using namespace std;

int n,k;
void solve(){
	cin>>n>>k;
	int l=0;
	int r=0;
	int input;
	bool okay=true;
	bool okay1=false;
	for(int i=0;i<n;i++){
		cin>>input;
		if(input!=k)
			okay=false;
		else
			okay1=true;
		if(input>k)
			r+=input-k;
		else
			l+=k-input;
	}
	if(okay)
		cout<<0<<"\n";
	else if(okay1 || l==r)
		cout<<1<<"\n";
	else
		cout<<2<<"\n";
}
int32_t main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}




