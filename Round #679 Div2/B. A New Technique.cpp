#include<bits/stdc++.h>
#define MOD 1000000007
#define int long long
using namespace std;
//#include <ext/pb_ds/assoc_container.hpp>
//using namespace __gnu_pbds;
//typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> ordered_set;

int n,m;
void solve(){
	cin>>n>>m;
	int arr[n][m];
	unordered_map<int,int> small;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>arr[i][j];
			small[arr[i][j]]=j;
		}
	}
	int arr2[m][n];
	int order[m];
	int visited[m];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>arr2[i][j];
		}
		order[i]=small[arr2[i][0]];
	}
	int ans[n][m];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			ans[j][order[i]]=arr2[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<ans[i][j]<<" ";
		}
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




