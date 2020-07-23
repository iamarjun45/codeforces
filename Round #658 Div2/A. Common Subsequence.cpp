#include<bits/stdc++.h>
#define MOD 1000000007
#define int long long
using namespace std;
//#include <ext/pb_ds/assoc_container.hpp>
//using namespace __gnu_pbds;
//typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> ordered_set;

int n,m;
map<int,bool> s;
void solve(){
	s.clear();
	cin>>n>>m;
	for(int i=0;i<n;i++){
		int input;
		cin>>input;
		s[input]=true;
	}
	int ans=0;
	// If any element matches, we have got our answer
	for(int i=0;i<m;i++){
		int input;
		cin>>input;
		if(ans==0 && s[input])
			ans=input;
	}
	if(ans){
		cout<<"YES\n1 "<<ans<<"\n";
	}else{
		cout<<"NO\n";
	}
		
}
int32_t main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}




