#include<bits/stdc++.h>
#define MOD 1000000007
#define int long long
using namespace std;
//#include <ext/pb_ds/assoc_container.hpp>
//using namespace __gnu_pbds;
//typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> ordered_set;

int n;
unordered_map<int,bool> m;
bool isPrime(int y){
	if(y==1)
		return true;
	if(m.count(y)>0)
		return m[y];
	for(int i=2;i*i<=y;i++){
		if(y%i==0){
			m[y]=false;
			return false;
		}
	}
	m[y]=true;
	return true;
}
void solve(){
	cin>>n;
	int x=n-1;
	for(int y=1;;y++){
		if(isPrime(y))
			continue;
		if(isPrime(x+y)){
			for(int i=0;i<n;i++){
				for(int j=0;j<n;j++){
					if(i==j){
						cout<<y<<" ";
					}else{
						cout<<1<<" ";
					}
				}
				cout<<"\n";
			}
			return;
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




