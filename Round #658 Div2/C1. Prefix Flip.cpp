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
	// We can skip the characters from the end which are equal in both strings
	for(int i=n-1;i>=0;i--){
		if(b[i]!=a[i]){
			// Now if the first character of a = the ith character of b,
			// Flip prefix of length 1
			// Then flip the prefix of length i+1 
			if(b[i]==a[0]){
				int j=0;
				int k=i;
				// Flipping and Reversing the string from 0 to i
				while(j<=k){
					char temp=a[k];
					a[k]=(a[j]=='1')?'0':'1';
					a[j]=(temp=='1')?'0':'1';
					j++;
					k--;
				}
				v.push_back(1);
				v.push_back(i+1);
			}
			// Now if the first character of a != the ith character of b,
			// Then only flip the prefix of length i+1 
			else{
				int j=0;
				int k=i;
				// Flipping and Reversing the string from 0 to i
				while(j<=k){
					char temp=a[k];
					a[k]=(a[j]=='1')?'0':'1';
					a[j]=(temp=='1')?'0':'1';
					j++;
					k--;
				}
				v.push_back(i+1);
			}
		}
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
 
 
 
 

