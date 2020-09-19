#include<bits/stdc++.h>
#define MOD 1000000007
#define int long long
using namespace std;
//#include <ext/pb_ds/assoc_container.hpp>
//using namespace __gnu_pbds;
//typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> ordered_set;
 
int gogo(int n){
	return (n*(n+1))/2;
}
int n;
int ans;
int sum;
void solve(){
	cin>>n;
	ans=0;
	sum=0;
	int i=1;
	while(1){
		int a1=1;
		int stair=(a1<<i)-1;
		int square=gogo(stair);
		sum=sum+square;
		if(sum>n)
			break;
		i++;
		ans++;
	}
	cout<<ans<<"\n";
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
