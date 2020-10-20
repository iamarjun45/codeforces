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
	map<int,vector<int>> m;
	int use;
	for(int i=0;i<n;i++){
		int input;
		cin>>input;
		use=input;
		m[input].push_back(i+1);
	}
	if(m.size()==1){
		cout<<"NO\n";
		return;
	}
	cout<<"YES\n";
	vector<int> small=m[use];
	int newuse;
	for(auto x:m){
		if(use==x.first)
			continue;
		newuse=x.first;
		for(auto y:x.second){
			cout<<small[0]<<" "<<y<<"\n";
		}
	}
	if(small.size()==1)
		return;
	int get=m[newuse][0];
	for(auto x:small){
		if(x==small[0])
			continue;
		cout<<x<<" "<<get<<"\n";
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




