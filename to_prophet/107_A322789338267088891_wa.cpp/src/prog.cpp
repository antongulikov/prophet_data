#include <string>
#include <vector>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstring>
#include <fstream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <iterator>
#include <cassert>
#include <stack>
#include <queue>
#include <ctime>
#include <vector>
#include <map>
#include <set>
#include <utility>

using namespace std;

#define FORALL(i,a,b) for (int i = (a); i <= (b); i++)
#define FOR(i,n) for (int i=0;i<n;i++)
#define FORB(i,a,b) for (int i = (a); i >= (b); i--)
#define FORIN(it,type,b) for(type::iterator it = (b).begin(); it != (b).end(); it++)
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef long double ld;

#define in cin
#define out cout
#define dout if(true) cout

#define MAXN 1000
pair<int,int> outedge[MAXN];
pair<int,int> inedge[MAXN];

#define INF 1000010

int src[MAXN];
int flow[MAXN];

int main()
{
	int N,P;
	in >> N >> P;
	FOR(j,P){
		int a,b,c;
		in >> a >> b >> c;
		
		outedge[a] = mp(b,c);
		inedge[b] = mp(a,c);
	}
	
	//pair<int,int> prs;
	//vector<int> flow;
	
	queue<int> Q;
	FORALL(i,1,N){
		if (inedge[i].first == 0){
			Q.push(i);
			src[i] = i;
			flow[i] = INF;
		}
	}
	
	while(!Q.empty()){
		int i = Q.front();Q.pop();
		if (outedge[i].first != 0){
			int j = outedge[i].first;
			int c = outedge[i].second;
			src[j] = src[i];
			flow[j] = min(flow[i],c);
			Q.push(j);
		}
	}
	
	int ans = 0;
	FORALL(i,1,N){
		if (outedge[i].first == 0 && flow[i] < INF) ans++;
	}
	
	cout << ans << endl;
	FORALL(i,1,N){
		if (outedge[i].first == 0 && flow[i] < INF){
			cout << src[i] << " " << i << " " << flow[i] << endl;
		}
	}
}




