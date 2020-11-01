#include<bits/stdc++.h>
#define MOD 1000000007
#define int long long
using namespace std;
//#include <ext/pb_ds/assoc_container.hpp>
//using namespace __gnu_pbds;
//typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> ordered_set;

int n,x;
void solve(){
	cin>>n>>x;
	int ar1[n];
	int ar2[n];
	for(int i=0;i<n;i++){
		cin>>ar1[i];
	}
	for(int i=0;i<n;i++){
		cin>>ar2[i];
	}
	sort(ar1,ar1+n);
	sort(ar2,ar2+n);
	for(int i=0;i<n;i++){
		if(ar1[i]+ar2[n-i-1]>x){
			cout<<"No\n";
			return;
		}
	}
	cout<<"Yes\n";
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




