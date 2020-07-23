#include<bits/stdc++.h>
#define MOD 1000000007
#define int long long
using namespace std;
//#include <ext/pb_ds/assoc_container.hpp>
//using namespace __gnu_pbds;
//typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> ordered_set;

int input[3];
void solve(){
	cin>>input[0]>>input[1]>>input[2];
	sort(input,input+3);
	// If all of them are equal
	if(input[0]==input[1] && input[1]==input[2]){
		cout<<"YES\n";
		cout<<input[0]<<" "<<input[1]<<" "<<input[2]<<"\n";
	}
	// If the two larger elements are equal
	else if(input[1]==input[2]){
		cout<<"YES\n";
		cout<<input[0]<<" "<<input[0]<<" "<<input[2]<<"\n";
	}else{
		// If the two smallest elements are equal, then it is not possible
		// If all the elements are different, then it is not possible
		cout<<"NO\n";
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




