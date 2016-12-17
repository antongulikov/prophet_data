#include<iostream>
#include<queue>
#include<vector>
using namespace std;

const int maxn = 2 * 1000 + 100;
bool ch[maxn];
int c[maxn] , mx;
vector < int > v[maxn];

void bfs(int x)
{
	queue <int> q;
	q . push(x);
	ch[x] = 1;
	c[x] = 1;
	mx = 0;
	while(!q . empty())
	{
		int x = q . front();
		q . pop();
		for(int i = 0; i < v[x] . size(); i++)
		{
			if(!ch[v[x][i]])
			{
				q . push(v[x][i]);
				c[v[x][i]] = c[x] + 1;
				mx = max(mx , c[v[x][i]]);
			}
		}
	}
	
}
	
		
int main()
{
	int n , a , ans = 0;
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		cin >> a;
		if(a != -1)
			v[a] . push_back(i);
	}
	
	for(int i = 1; i <= n; i++)
	{
		if(!ch[i])
		{
			bfs(i);
			ans = max(mx , ans);
		}
	}
	cout << max(ans , 1);
	return 0;
}
