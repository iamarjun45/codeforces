#include<bits/stdc++.h>
#define MOD 1000000007
#define int long long
using namespace std;
//#include <ext/pb_ds/assoc_container.hpp>
//using namespace __gnu_pbds;
//typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> ordered_set;

int n;
vector<int> arr;
void solve(){
	// [x1 x2 x3 x4 x5]
	// [x1+x3 x4 x5] or [x1 x2+x4 x5] or [x1 x2 x3+x5] or [x2+x5 x3 x4]
	// [x1+x3+x4] or [x1+x3+x5]
	// We conclude, that for n elements, output would be (n+1)/2 elements
	// Out of (n+1)/2 elements, we see alternating elements + 1 adjacent element
	cin>>n;
	arr=vector<int>(n);
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int total=(n+1)/2;
	int currAns=0;
	for(int i=0;i<total;i++){
		currAns=currAns+arr[2*i];
	}
	// consider the array as
	// x1 x3 x5 x2 x4 x1
	// applying sliding window protocol
	int ans=currAns;
	for(int i=0;i<=n-2;i++){
		currAns-=arr[(2*i)%n];
		currAns+=arr[(2*(i+total))%n];
		ans=max(ans,currAns);
	}
	cout<<ans<<"\n";
}
int32_t main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	int t;
	t=1;
	while(t--){
		solve();
	}
	return 0;
}




