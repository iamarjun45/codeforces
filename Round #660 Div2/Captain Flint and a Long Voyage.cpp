#include<bits/stdc++.h>
using namespace std;
 
int n;
void solve(){
	cin>>n;
	int small=ceil(1.0*n/4);
	vector<int> ans;
	for(int i=0;i<n-small;i++)
		ans.push_back(9);
	for(int i=0;i<small;i++)
		ans.push_back(8);
	for(auto x:ans)
		cout<<x;
	cout<<"\n";
}
int32_t main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
