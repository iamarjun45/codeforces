#include<bits/stdc++.h>
#define MOD 1000000007
#define int long long
using namespace std;
//#include <ext/pb_ds/assoc_container.hpp>
//using namespace __gnu_pbds;
//typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> ordered_set;

void solve(){
	int a,b,x,y,n;
	int zero=0;
	cin>>a>>b>>x>>y>>n;
	int left=max(zero,n-a+x);
	int right=max(zero,left-b+y);
	int option1=(a-n+left)*(b-left+right);
	left=max(zero,n-b+y);
	right=max(zero,left-a+x);
	option1=min(option1,((b-n+left)*(a-left+right)));
	cout<<option1<<"\n";
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



 
