#include<bits/stdc++.h>
#define MOD 1000000007
#define int long long
using namespace std;
//#include <ext/pb_ds/assoc_container.hpp>
//using namespace __gnu_pbds;
//typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> ordered_set;

void solve(){
	vector<int> small;
	small.push_back(1);
	small.push_back(1);
	small.push_back(1);
	small.push_back(4);
	small.push_back(3);
	small.push_back(48);
	small.push_back(40);
	small.push_back(1440);
	small.push_back(1260);
	small.push_back(8960);
	small.push_back(72576);
	small.push_back(7257600);
	small.push_back(6652800);
	small.push_back(958003200);
	small.push_back(889574400);
	small.push_back(11623772160);
	small.push_back(163459296000);
	small.push_back(41845579776000);
	small.push_back(39520825344000);
	small.push_back(12804747411456000);
	small.push_back(12164510040883200);
	int n;
	cin>>n;
	cout<<small[n]<<"\n";
}
int32_t main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	int t=1;
	while(t--){
		solve();
	}
	return 0;
}




