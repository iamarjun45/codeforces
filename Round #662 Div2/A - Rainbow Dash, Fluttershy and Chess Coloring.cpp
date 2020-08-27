#include<bits/stdc++.h>
#define MOD 1000000007
#define int long long
using namespace std;
//#include <ext/pb_ds/assoc_container.hpp>
//using namespace __gnu_pbds;
//typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> ordered_set;
 
int n;
void solve(){
	cin>>n;
	if(n==1||n==2){
		cout<<n<<"\n";
	}else if(n==3||n==4){
		cout<<n-1<<"\n";
	}else{
		int ans=2+(n-2)/2;
		cout<<ans<<"\n";
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
