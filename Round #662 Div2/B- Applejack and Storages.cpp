#include<bits/stdc++.h>
using namespace std;
//#include <ext/pb_ds/assoc_container.hpp>
//using namespace __gnu_pbds;
//typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> ordered_set;


void solve(){
	int n,q;
	unordered_map<int,int> m;
	cin>>n;
	while(n--){
		int val;
		cin>>val;
		m[val]++;
	}
	int a=0,b=0;
	for(auto x:m){
		a+=x.second/4;
		b+=(x.second%4)/2;
	}
	cin>>q;
	for(int i=0;i<q;i++){
		char ch;
		int input;
		cin>>ch>>input;
		if(ch=='+'){
			m[input]++;
			int small=m[input];
			if(small%4==0){
				b--;
				a++;
			}else if(small%2==0){
				b++;
			}
		}else if(ch=='-'){
			int small=m[input];
			if(small%4==0){
				b++;
				a--;
			}else if(small%2==0){
				b--;
			}
			m[input]--;
		}
		if(a>=2 || (a==1 && b>=2)){
			cout<<"YES\n";
		}else{
			cout<<"NO\n";
		}
	}
}
int main(){
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





