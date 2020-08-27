#include<bits/stdc++.h>
#define MOD 1000000007
#define int long long
using namespace std;
//#include <ext/pb_ds/assoc_container.hpp>
//using namespace __gnu_pbds;
//typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> ordered_set;

int n;
string s;
string t="abacaba";
void replaceAll(){
	for(int i=0;i<n;i++){
		if(s[i]=='?')
			s[i]='z';
	}
}
int gogo(string s1){
	int count=0;
	for(int i=0;i<n;i++){
		int j=0;
		int start=i;
		while(j<7 && start<n){
			if(t[j]==s1[start]){
				j++;
				start++;
			}else{
				break;
			}
		}
		if(j==7)
			count++;
	}
	return count;
}
void solve(){
	cin>>n>>s;
	// Count the number of occurences of "abacaba" in the input string
	int count=gogo(s);
	// If frequency is one, we have our answer
	if(count==1){
		// Replace all ? with z
		replaceAll();
		cout<<"Yes\n";
		cout<<s<<"\n";
		return;
	}
	// If frequency is greater than 1, then answer is no
	if(count>1){
		cout<<"No\n";
		return;
	}
	string small="aba";
	for(int i=0;i<n;i++){
		// seperating "abacaba" into 3 parts- "aba", "c", "aba"
		if((s[i]=='c'||s[i]=='?') && i+3<n && i-3>=0){
			string check=s;
			check[i]='c';
			bool okay=true;
			count=1;
			// checking for 1st "aba"
			while(okay && count<=3){
				if(check[i-count]==small[count-1] || check[i-count]=='?'){
					check[i-count]=small[count-1];
				}else{
					okay=false;
				}
				count++;
			}
			count=1;
			// checking for 2nd "aba"
			while(okay && count<=3){
				if(check[i+count]==small[count-1] || check[i+count]=='?'){
					check[i+count]=small[count-1];
				}else{
					okay=false;
				}
				count++;
			}
			// if its okay to form "abacaba"
			if(okay && gogo(check)==1){
				s=check;
				// replace all '?' with z
				replaceAll();
				cout<<"Yes\n";
				cout<<s<<"\n";
				return;
			}
		}
	}
	cout<<"No\n";
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
