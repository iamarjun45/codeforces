#include<bits/stdc++.h>
#define MOD 1000000007
#define int long long
using namespace std;
//#include <ext/pb_ds/assoc_container.hpp>
//using namespace __gnu_pbds;
//typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> ordered_set;

string s;
void solve(){
	cin>>s;
	map<char,int> m;
	for(auto x:s){
		m[x]++;
	}
	// While calculating win(1)+win(2)+---+win(n),
	// We will compare c1 with s[1], s[2], s[3],----, s[n]
	// The character with the maximum frequency can produce the maximum average
	// Same implies for every choice.
	if(m['R']>=m['S'] && m['R']>=m['P']){
		for(int i=0;i<s.length();i++)
			cout<<'P';
		cout<<"\n";
	}else if(m['P']>=m['S'] && m['P']>=m['R']){
		for(int i=0;i<s.length();i++)
			cout<<'S';
		cout<<"\n";
	}else{
		for(int i=0;i<s.length();i++)
			cout<<'R';
		cout<<"\n";
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




