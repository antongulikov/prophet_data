#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
#define pb push_back
using namespace std;
vector<pair<string,int> > v;
set<string> st;
int main(){
	long long n,m,k,x;
	double r;
	cin>>n>>m>>r;
	k=int(r*10000000);
	string s;
	for(int i=0;i<n;i++){
		cin>>s>>x;
		long long ans=k*x/10000000;
		if(ans>=100){
			v.pb(make_pair(s,ans));
			st.insert(s);
		}
	}
	for(int i=0;i<m;i++){
		cin>>s;
		if(st.find(s)==st.end())
			v.pb(make_pair(s,0));
	}
	sort(v.begin(),v.end());
	cout<<v.size()<<endl;
	for(int i=0;i<v.size();i++)
		cout<<v[i].first<<' '<<v[i].second<<endl;
}

