#include<bits/stdc++.h>
using namespace std;

int n;
vector<int> small;
vector<int> small2;
bool isSorted(){
	for(int i=0;i<n;i++){
		if(small[i]!=small2[i])
			return false;
	}
	return true;
}
void solve(){
	cin>>n;
	small=vector<int>(n);
	small2=vector<int>(n);
	int minimum=INT_MAX;
	for(int i=0;i<n;i++){
		cin>>small[i];
		small2[i]=small[i];
		minimum=min(minimum,small[i]);
	}
	sort(small2.begin(),small2.end());
	if(n==1 ||  isSorted()){
		cout<<"YES\n";
		return;
	}
	int gcd=0;
	for(int i=0;i<n;i++){
		if(small[i]!=small2[i]){
			if(__gcd(small[i],small2[0])!=small2[0]){
				cout<<"NO\n";
				return;
			}
		}
	}
	cout<<"YES\n";
}
int32_t main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}



 
