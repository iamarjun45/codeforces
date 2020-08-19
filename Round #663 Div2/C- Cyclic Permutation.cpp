#include<bits/stdc++.h>
#define MOD 1000000007
#define int long long
using namespace std;
 
int n;
int abcd[1000005];
int dp[1000005];
int32_t main(){
	int n;
	cin>>n;
	abcd[0]=1;
	for(int i=1;i<=n;i++)
		abcd[i]=(abcd[i-1]*i)%MOD;
	dp[2]=0;
	for(int i=3;i<=n;i++){
		dp[i]=(((abcd[i]-((2*abcd[i-1])%MOD)+MOD)%MOD)+dp[i-1]+dp[i-1])%MOD;
	}
	cout<<dp[n]<<"\n";
	return 0;
}
