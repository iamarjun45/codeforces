#include<bits/stdc++.h>
#define MOD 1000000007
#define int long long
using namespace std;
//#include <ext/pb_ds/assoc_container.hpp>
//using namespace __gnu_pbds;
//typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> ordered_set;

int n,m;
vector<vector<int>> graph;
vector<pair<int,int>> edges;
vector<bool> visited;
vector<int> topo;
void dfs(int start){
	visited[start]=true;
	for(auto x:graph[start]){
		if(!visited[x])
			dfs(x);
	}
	topo.push_back(start);
}
void solve(){
	cin>>n>>m;
	graph=vector<vector<int>>(n);
	edges.clear();
	for(int i=0;i<m;i++){
		int type,src,dest;
		cin>>type>>src>>dest;
		--src;
		--dest;
		// Directed edge
		if(type==1){
			graph[src].push_back(dest);
		}
		edges.push_back(make_pair(src,dest));
	}
	visited=vector<bool>(n,0);
	topo.clear();
	// Creating topological sort for the current graph with only directed edges
	for(int i=0;i<n;i++){
		if(!visited[i])
			dfs(i);
	}
	vector<int> position(n);
	reverse(topo.begin(),topo.end());
	// Position of each vertex in topological sort
	for(int i=0;i<n;i++){
		position[topo[i]]=i;
	}
	bool okay=true;
	// Check for cycle
	for(int i=0;i<n;i++){
		for(auto x:graph[i]){
			if(position[i]>position[x])
				okay=false;
		}
	}
	// If cycle, not possible as we cant change the directed edges
	if(!okay){
		cout<<"NO\n";
		return;
	}
	// Otherwise, always possible
	cout<<"YES\n";
	// Print the edges according to topological sort
	for(auto x:edges){
		if(position[x.first]<position[x.second]){
			cout<<x.first+1<<" "<<x.second+1<<"\n";
		}else{
			cout<<x.second+1<<" "<<x.first+1<<"\n";
		}
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




