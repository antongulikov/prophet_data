#include<iostream>
#include<vector>
#define pb push_back
using namespace std;
const int maxn=3000;
vector<int> adj[maxn],v;
int ans=0;
void dfs(int x,int len){
	ans=max(ans,len);
	for(int i=0;i<adj[x].size();i++)
		dfs(adj[x][i],len+1);
}
int main(){
	int n,x;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x;
		if(x==-1)
			v.pb(i);
		else
			adj[x-1].pb(i);
	}
	for(int i=0;i<v.size();i++)
		dfs(i,1);
	cout<<ans<<endl;
}




