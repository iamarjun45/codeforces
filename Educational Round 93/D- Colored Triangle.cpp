#include<bits/stdc++.h>
#define MOD 1000000007
#define int long long
using namespace std;
//#include <ext/pb_ds/assoc_container.hpp>
//using namespace __gnu_pbds;
//typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> ordered_set;

int r,g,b;
int red[205];
int blue[205];
int green[205];
int dp[205][205][205];
int gogo(int i,int j,int k){
	int count1=(i==r);
	int count2=(j==g);
	int count3=(k==b);
	if(count1+count2+count3>=2)
		return 0;
	if(dp[i][j][k]!=-1)
		return dp[i][j][k];
	int ans=0;
	if(i<r && j<g)
		ans=max(ans,red[i]*green[j]+gogo(i+1,j+1,k));
	if(i<r && k<b)
		ans=max(ans,red[i]*blue[k]+gogo(i+1,j,k+1));
	if(j<g && k<b)
		ans=max(ans,blue[k]*green[j]+gogo(i,j+1,k+1));
	dp[i][j][k]=ans;
	return ans;
}
void solve(){
	int ans=0;
	cin>>r>>g>>b;
	for(int i=0;i<r;i++) cin>>red[i];
	for(int i=0;i<g;i++) cin>>green[i];
	for(int i=0;i<b;i++) cin>>blue[i];
	sort(red,red+r,greater<int>());
	sort(blue,blue+b,greater<int>());
	sort(green,green+g,greater<int>());
	memset(dp,-1,sizeof(dp));
	cout<<gogo(0,0,0)<<"\n";
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





