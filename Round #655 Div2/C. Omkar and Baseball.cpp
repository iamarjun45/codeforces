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
	arr=vector<int>(n+1);
	for(int i=1;i<=n;i++)
		cin>>arr[i];
	// CASE 0 - Already Sorted
	bool okay=true;
	int i=1;
	while(i<=n && okay){
		if(arr[i]!=i)
			okay=false;
		i++;
	}
	if(okay){
		cout<<"0\n";
		return;
	}
	// CASE 1 - The subarray of wrongly placed array is one and continous
	int first=INT_MAX, last=INT_MIN, count=0;
	i=1;
	while(i<=n){
		if(arr[i]!=i){
			first=min(first,i);
			last=max(last,i);
			count++;
		}
		i++;
	}
	// If all the occurences between last and first are corrupted.
	if(count == last-first+1){
		cout<<"1\n";
		return;
	}
	// CASE 2 - This means I will move the correct ones out of their place in 1st step. 
	//          Now, no one is in its correct place. 
	//          Now, I will bring them in their right place in the 2nd step.
	cout<<"2\n";
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




