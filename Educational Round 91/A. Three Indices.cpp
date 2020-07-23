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
	cin>>n;
	arr=vector<int>(n);
	for(int i=0;i<n;i++) cin>>arr[i];
	// If the array is not sorted, we will surely find a solution
	for(int i=1;i<n-1;i++){
		if(arr[i-1]<arr[i] && arr[i]>arr[i+1]){
			cout<<"YES\n"<<i<<" "<<i+1<<" "<<i+2<<"\n";
			return;
		}
	}
	cout<<"NO\n";
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




