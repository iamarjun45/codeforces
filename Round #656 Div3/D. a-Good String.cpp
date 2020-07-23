#include<bits/stdc++.h>
#define MOD 1000000007
#define int long long
using namespace std;
//#include <ext/pb_ds/assoc_container.hpp>
//using namespace __gnu_pbds;
//typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> ordered_set;

int n;
string s;
int gogo(int si,int ei,int c){
	// Base Case: Length=0
	if(si>ei)
		return 0;
	char ch='a'+c;
	// Base Case: Length=1
	if(si==ei){
		if(s[si]==ch)
			return 0;
		return 1;
	}
	int firstHalf=0;
	int secondHalf=0;
	int mid=(si+ei)/2;
	// Considering first half
	for(int i=si;i<=mid;i++){
		if(s[i]!=ch)
			firstHalf++;
	}
	// Considering second half
	for(int i=mid+1;i<=ei;i++){
		if(s[i]!=ch)
			secondHalf++;
	}
	// Answer will be minimum of consideration of first half and second half respectively as c-good string
	return min(firstHalf+gogo(mid+1,ei,c+1),secondHalf+gogo(si,mid,c+1));
}
void solve(){
	cin>>n>>s;
	cout<<gogo(0,n-1,0)<<"\n";
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




