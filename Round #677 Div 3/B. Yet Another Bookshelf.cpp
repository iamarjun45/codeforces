#include<bits/stdc++.h>
#define MOD 1000000007
#define int long long
using namespace std;
//#include <ext/pb_ds/assoc_container.hpp>
//using namespace __gnu_pbds;
//typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> ordered_set;

void solve(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	int l=0;
	while(l<n && arr[l]==0){
		l++;
	}
	int r=n-1;
	while(r>=0 && arr[r]==0){
		r--;
	}
	int count=0;
	for(int i=l;i<=r;i++){
		if(arr[i]==0)
			count++;
	}
	cout<<count<<"\n";
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




