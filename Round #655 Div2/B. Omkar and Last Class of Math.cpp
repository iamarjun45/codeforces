#include<bits/stdc++.h>
#define MOD 1000000007
#define int long long
using namespace std;
//#include <ext/pb_ds/assoc_container.hpp>
//using namespace __gnu_pbds;
//typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> ordered_set;

int n;
void solve(){
	//  Suppose, k|n. Then, m*k=n
	// Then (m-1)*k=n-k. Hence, if k|n, then k|n-k. Also, n-k>=k
	// hence, LCM(k,n-k)=n-k 
	// hence, if k|n, n/2 <= LCM(b,n-k) <= n
	// hence, we should try to maximize k, such that n-k is minimised
	cin>>n;
	int k=1;
	for(int i=2;i*i<=n;i++){
		if(n%i==0){
			int first=i;
			int second=n/i;
			k=max(k,max(first,second));	
		}
	}
	cout<<k<<" "<<n-k<<"\n";
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




