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
	bool allOnes=true;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		if(arr[i]>1){
			allOnes=false;
		}
	}
	// If there are all ones, then there is no option. Everyone has to pick one.
	if(allOnes){
		if(n%2==0){
			cout<<"Second\n";
		}else{
			cout<<"First\n";
		}
		return;
	}
	// If there is a non-one value, then the player who has a turn wins the game.
	// He will choose exactly (k-1) stones or all k stones, which will cause the other to lose.
	int ones=0;
	for(int i=0;i<n;i++){
		if(arr[i]>1)
			break;
		ones++;
	}
	if(ones%2==0){
		cout<<"First\n";
	}else{
		cout<<"Second\n";
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




