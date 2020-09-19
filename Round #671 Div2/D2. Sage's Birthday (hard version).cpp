#include<bits/stdc++.h>
#define MOD 1000000007
#define ll long long
using namespace std;
void solve(){
	int n;cin>>n;
	int dp[n];
	for(int i=0;i<n;i++)
	cin>>dp[i];
	sort(dp,dp+n);
	int i=0,j=n/2,indx=0;
	int final[n];
	while(indx<n&&j<n){
		final[indx++]=dp[j++];
		if(indx<n)
		final[indx++]=dp[i++];
	}
	int sum=0;
	for(int i=1;i<=n-2;i++){
		if(final[i-1]>final[i]&&final[i]<final[i+1])
		sum++;
	}
	cout<<sum<<endl;
	for(int i=0;i<=n-1;i++)
	cout<<final[i]<<" ";
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","r",stdout);
	int t;
	t=1;
	while(t--){
		solve();
	}
}
