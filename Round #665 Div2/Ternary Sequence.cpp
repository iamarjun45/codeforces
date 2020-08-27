#include<bits/stdc++.h>
#define MOD 1000000007
#define int long long
using namespace std;
//#include <ext/pb_ds/assoc_container.hpp>
//using namespace __gnu_pbds;
//typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> ordered_set;


void solve(){
	int x0,x1,x2,y0,y1,y2;
	cin>>x0>>x1>>x2;
	cin>>y0>>y1>>y2;
	int small=min(x2,y1);
	x2=x2-small;
	int ans=small*2;
	if(x2+x0>=y2)
		cout<<ans<<"\n";
	else{
		ans=ans-2*(y2-x2-x0);
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



 
