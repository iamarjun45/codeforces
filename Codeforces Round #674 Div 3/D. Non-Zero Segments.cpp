#include<bits/stdc++.h>
#define int long long
using namespace std;


int n;
unordered_map<int,int> findX;
int arr[200005];
void solve(){
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	 	cin>>arr[i];
	int ans=0;
	int total=0;
	for(int i=0;i<n;i++){
		total+=arr[i];
		if(total==0){
			findX.clear();
			total=arr[i];
			ans=ans+1;
		}else if(findX.count(total)>0){
			findX.clear();
			total=arr[i];
			ans=ans+1;
		}
		findX[total]=true;	
	}
	cout<<ans<<"\n";
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




