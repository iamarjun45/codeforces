#include<bits/stdc++.h>
using namespace std;


int gogo(string s,int n){
	int alice=0;
	bool chance=1;
	for(;;){
		int begin=-1;
		int count=0;
		int maxCount=0;
		for(int j=0;j<n;j++){
			if(s[j]=='0'){
				if(count>maxCount){
					begin=j-count;
					maxCount=count;
				}
				count=0;
			}else{
				count++;
			}
		}
		if(count>maxCount){
			begin=n-count;
			maxCount=count;
		}
		if(maxCount==0)
			break;
		if(chance){
			alice+=maxCount;
		}
		int j=0;
		while(j<=maxCount){
			s[begin+j]='0';
			j++;
		}
		if(chance)
			chance=0;
		else
			chance=1;
	}
	return alice;
}
void solve(){
	string s;
	int n;
	cin>>s;
	int alice=0;
	n=s.length();
	cout<<gogo(s,n)<<"\n";
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}





