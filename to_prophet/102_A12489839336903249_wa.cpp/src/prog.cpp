#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;

const int max_nm = 1000 * 100; 
int n, m, a[max_nm], min_t = -1, parent[max_nm];
bool chek[max_nm];
vector<int> v[max_nm];

void dfs(int x)
{
	chek[x] = true;
	for(int i = 0; i < (int) v[x].size(); i++)
	{
		if(chek[v[x][i]] == false)
		{
			parent[v[x][i]] = x;
			dfs(v[x][i]);
		}
		else if(parent[parent[x]] == v[x][i] && x != parent[x] && x != v[x][i] && v[x][i] != parent[x])
		{
			if(min_t == -1)
			{
				min_t = a[x] + a[parent[x]] + a[v[x][i]];
				continue;
			}
			min_t = min(min_t, a[x] + a[parent[x]] + a[v[x][i]]);
		}
		else
			for(int j = 0; j < (int) v[v[x][i]].size(); j++)
				if(parent[x] == v[v[x][i]][j])
				{
					if(min_t == -1)
						min_t = a[x] + a[parent[x]] + a[v[x][i]];
					else
						min_t = min(min_t, a[x] + a[parent[x]] + a[v[x][i]]);
						break;
				}
	}
}
int main()
{
	int x, y;
	cin >> n >> m;
	for(int i = 0; i < n; i++)
		cin >> a[i];
	for(int i = 0; i < m; i++)
	{
		cin >> x >> y;
		x--;
		y--;
		v[y].push_back(x);
		v[x].push_back(y);
	}
	dfs(0);
	cout << min_t << endl;
	return 0;
}
