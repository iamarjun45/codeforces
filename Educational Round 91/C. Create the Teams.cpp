#include<bits/stdc++.h>
#define MOD 1000000007
#define ll long long 
using namespace std;
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","r",stdout);
	int t;
	cin>>t;
	while(t--){
		ll n,k;
		cin>>n>>k;
		ll arr[n];
		for(int i=0;i<n;i++)
		cin>>arr[i];
		sort(arr,arr+n);
		ll team=0,x=0;
		for(int i=n-1;i>=0;i--){
			x++;
			if(arr[i]*x>=k){
				team++;
				x=0;
			}
		}
		cout<<team<<endl;
	}
}
