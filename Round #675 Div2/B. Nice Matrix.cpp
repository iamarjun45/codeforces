#include<bits/stdc++.h>
#define MOD 1000000007
#define int long long
using namespace std;
//#include <ext/pb_ds/assoc_container.hpp>
//using namespace __gnu_pbds;
//typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> ordered_set;
 
int n,m;
int arr[101][101];
void solve(){
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>arr[i][j];
		}
	}
	int row1=0,row2=n-1;
	int ans=0;
	while(row1<=row2){
		int i=0,j=m-1;
		while(i<=j){
			vector<int> v;
			v.push_back(arr[row1][i]);
			v.push_back(arr[row2][i]);
			v.push_back(arr[row1][j]);
			v.push_back(arr[row2][j]);
			sort(v.begin(),v.end());
			int sum=min(v[1],v[2]);
			if(row1==row2)
				if(i==j)
					ans+=abs(arr[row1][i]-sum);
				else
					ans+=abs(arr[row1][i]-sum)+abs(arr[row1][j]-sum);
			else
				if(i==j)
					ans+=abs(arr[row1][i]-sum)+abs(arr[row2][i]-sum);
				else
					ans+=abs(arr[row1][i]-sum)+abs(arr[row1][j]-sum)+abs(arr[row2][i]-sum)+abs(arr[row2][j]-sum);
			i++;
			j--;	
		}
		row1++;
		row2--;
	}
	cout<<ans<<"\n";
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
