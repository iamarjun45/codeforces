#include<bits/stdc++.h>
#define MOD 1000000007
#define int long long
using namespace std;
//#include <ext/pb_ds/assoc_container.hpp>
//using namespace __gnu_pbds;
//typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> ordered_set;

int n;
map<int,bool> m;
void solve(){
	m.clear();
	// We just want the array by removing all the duplicates
	// We will keep the first occurence of each element and delete the rest.
	vector<int> ans;
	cin>>n;
	int total=2*n;
	for(int i=0;i<total;i++){
		int input;
		cin>>input;
		if(!m[input])
			ans.push_back(input);
		m[input]=true;
	}
	for(auto x:ans)
		cout<<x<<" ";
	cout<<"\n";
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




