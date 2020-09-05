#include<bits/stdc++.h>
using namespace std;

int a1,a2,t;
void solve(){
		cin>>a1;
		cin>>a2;
		int s=abs(a1-a2);
		int an=s/10;
		if(s%10!=0){
			an+=1;
		}
		cout<<an<<endl;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>t;
	while(t--){
		solve();
	}
}
