#include<bits/stdc++.h>
#define MOD 1000000007
#define int long long
using namespace std;
//#include <ext/pb_ds/assoc_container.hpp>
//using namespace __gnu_pbds;
//typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> ordered_set;
 
int n;
string a;
string b;
vector<int> v;
void solve(){
	// Taking input
	cin>>n>>a>>b;
	v.clear();
	// Since there are total of 2*n operations, 
	// In the first operation, I can flip the first character if its not equal to ith character
	// In the next operation, I will flip the string from 0 to i-1
	int idx=0;
	bool flip=false;
	for(int i=n-1;i>=0;i--){
		// If flip is true and a[idx]!=b[i], it means we need to apply one extra operation.
		// If flip is false and a[idx]==b[i], it means we need to apply one extra operation.
		if(flip ^ (a[idx]==b[i])){
			v.push_back(1);
		}
		// It is a mandatory operation
		v.push_back(i+1);
		// When currently it was flipped, it was containing (i+1)th position
		// Now I need to go backwards
		if(flip)
			idx-=i;
		else
			idx+=i;
		flip=!flip;
	}
	cout<<v.size()<<" ";
	for(auto x:v){
		cout<<x<<" ";
	}
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
 
 
 
 

