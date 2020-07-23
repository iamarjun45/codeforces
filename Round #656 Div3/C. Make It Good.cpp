#include<bits/stdc++.h>
#define MOD 1000000007
#define int long long
using namespace std;
//#include <ext/pb_ds/assoc_container.hpp>
//using namespace __gnu_pbds;
//typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> ordered_set;

int n;
vector<int> arr;
void solve(){
	cin>>n;
	arr=vector<int>(n);
	for(int i=0;i<n;i++) cin>>arr[i];
	bool isInc=true;
	int i=n-1;
	// If the series is non-decreasing from last to first, then we will always start from front
	while(i>0 && isInc){
		if(arr[i]>arr[i-1])
			isInc=false;
		i--;
	}
	if(!isInc){
		// If this series is non-decreasing from last to i+1, then it should be non-decreasing from 0 to i
		bool isDec=true;
		while(i>0 && isDec){
			if(arr[i]<arr[i-1])
				isDec=false;
			i--;
		}
		// If the condition breaks at any point, then the whole prefix is at fault
		if(!isDec){
			cout<<i+1<<"\n";
		}else{
			cout<<"0\n";
		}
	}else{
		cout<<"0\n";
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




