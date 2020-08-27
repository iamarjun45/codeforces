#include<bits/stdc++.h>
#define MOD 1000000007
#define int long long
using namespace std;
//#include <ext/pb_ds/assoc_container.hpp>
//using namespace __gnu_pbds;
//typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> ordered_set;

int n,k;
void solve(){
	cin>>n>>k;
	if(k-n==0){
		cout<<"0\n";
		return;
	}
	if(k-n>0){
		cout<<k-n<<"\n";
	}else{
		if(k%2!=0 && n%2==0){
			cout<<"1\n";
		}else if(k%2==0 && n%2!=0){
			cout<<"1\n";
		}else{
			cout<<"0\n";
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



 
