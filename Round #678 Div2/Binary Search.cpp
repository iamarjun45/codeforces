#include<bits/stdc++.h>
#define MOD 1000000007
#define int long long
using namespace std;
//#include <ext/pb_ds/assoc_container.hpp>
//using namespace __gnu_pbds;
//typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> ordered_set;

int32_t main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n,x,pos;
	cin>>n>>x>>pos;
	int smallPos=0;
	int largePos=0;
	int left=0,right=n;
	int arr[n];
	for(int i=0;i<pos;i++){
		arr[i]=x-1;
	}
	arr[pos]=x;
	for(int i=pos+1;i<n;i++){
		arr[i]=x+1;
	}
	while(left<right){
		int middle=(left+right)/2;
		if(arr[middle]==x)
			left=middle+1;
		else if(arr[middle]<x){
			left=middle+1;
			smallPos++;
		}else{
			right=middle;
			largePos++;
		}
	}
	int totalLarge=n-x;
	int totalSmall=x-1;
	int ans=1;
	if(largePos>totalLarge || smallPos>totalSmall)
		ans=0;
	else{
		for(int i=1;i<=largePos;i++){
			ans=(ans*totalLarge)%MOD;
			totalLarge--;
		}
		for(int i=1;i<=smallPos;i++){
			ans=(ans*totalSmall)%MOD;
			totalSmall--;
		}
		int sum=totalLarge+totalSmall;
		for(int i=1;i<=sum;i++){
			ans=(ans*i)%MOD;
		}
	}
	cout<<ans<<"\n";
	return 0;
}




