#include<bits/stdc++.h>
#define MOD 1000000007
#define int long long
using namespace std;
//#include <ext/pb_ds/assoc_container.hpp>
//using namespace __gnu_pbds;
//typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> ordered_set;

int n;
void solve(){
	cin>>n;
	int total=2*n;
	char followThis[total];
	int thisMuch[total];
	for(int i=0;i<total;i++){
		char ch;
		cin>>ch;
		if(ch=='+'){
			followThis[total-i-1]=ch;
			thisMuch[total-i-1]=0;
		}else{
			followThis[total-i-1]=ch;
			int input;
			cin>>input;
			thisMuch[total-i-1]=input;
		}
	}
	int small[total];
	int count=0;
	priority_queue<int,vector<int>,greater<int>> pq;
	int ans[n];
	int count2=0;
	for(int i=0;i<total;i++){
		if(count==0){
			if(followThis[i]=='+'){
				cout<<"NO"<<endl;
				return;
			}
		}
		if(followThis[i]=='+'){
			if(small[count-1]==pq.top()){
				ans[count2++]=pq.top();
				pq.pop();
				count--;
			}else{
				cout<<"NO"<<endl;
				return;
			}
		}
		if(followThis[i]=='-'){
			pq.push(thisMuch[i]);
			small[count++]=thisMuch[i];
		}
	}
	cout<<"YES"<<endl;
	for(int i=0;i<n;i++){
		cout<<ans[n-i-1]<<" ";
	}
	cout<<endl;
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




