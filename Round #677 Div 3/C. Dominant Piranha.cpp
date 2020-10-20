#include<bits/stdc++.h>
#define MOD 1000000007
#define int long long
using namespace std;
//#include <ext/pb_ds/assoc_container.hpp>
//using namespace __gnu_pbds;
//typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> ordered_set;
int n;
int arr[300005];
void solve(){
	cin>>n;
	bool okay=true;
	int ans=0;
	for(int i=0;i<n;i++) {
		cin>>arr[i];
		if(arr[i]>=arr[ans])
			ans=i;
		if(i>0 && arr[i]!=arr[i-1])
			okay=false;	
	}
	if(okay){
		cout<<"-1\n";
		return;
	}
	for(int i=0;i<n;i++){
		if(arr[ans]==arr[i]){
			bool okay1=false;
			bool okay=false;
			if(i>0 && arr[i-1]!=arr[ans])
				okay=true;
			if(i<n-1 && arr[i+1]!=arr[ans])
				okay1=true;
			if(okay1 || okay){
				cout<<(i+1)<<"\n";
				return;
			}
		}
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




