#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;

int N,M,to[1002],from[1002],F;
vector<int> adj[1002],D[1002];

class node
{
	public:
	int a,b,d;
};

vector<node> ret;

int flood(int ind)
{
	if(adj[ind].size()==0)
	{
		F=ind;
		return 1<<30;
	}
	return min(D[ind][0],flood(adj[ind][0]));
}

bool cmp(const node &a,const node &b)
{
	return a.a<b.a;
}

int main()
{
	scanf("%d %d",&N,&M);
	
	for(int i=0;i<M;i++)
	{
		int a,b,d;
		scanf("%d %d %d",&a,&b,&d);
		adj[a].push_back(b);
		D[a].push_back(d);
		to[b]=1;
		from[a]=1;
	}
	
	for(int i=0;i<N;i++)
	{
		if(from[i] && !to[i])
		{
			int x=flood(i);
			node t;
			t.a=i;
			t.b=F;
			t.d=x;
			ret.push_back(t);
		}
	}
	sort(ret.begin(),ret.end(),cmp);
	printf("%d\n",ret.size());
	for(int i=0;i<(int)ret.size();i++)
	{
		printf("%d %d %d\n",ret[i].a,ret[i].b,ret[i].d);
	}
}
