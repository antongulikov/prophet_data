#include<iostream>
#include<set>
#include<map>
#include<vector>
#include<list>
#include<string.h>
#include<cmath>
#include<algorithm>
#include<string>
#include<iomanip>
#include<sstream>
#include<stack>
#include<queue>
#include<ctype.h>
using namespace std;

typedef unsigned long long int ull;
typedef long long int ll;

#define pb push_back
#define mp make_pair

#define S second
#define F first

#define all(c) (c).begin(), (c).end()

string lower(string s)
{
	for(int i=0;i<s.length();i++)
	s[i]=(char)tolower(s[i]);
	return s;
}

string upper(string s)
{
	for(int i=0;i<s.length();i++)
	s[i]=(char)toupper(s[i]);
	return s;
}

ll gcd(ll a, ll b)
{
   if (b==0) return a;
   return gcd(b,a%b);
}

ll abs1(ll a)
{
	if(a<0)
	return -1*a;
	else return a;
}

ll power(ll base, ll n, ll M)
{
    if(n==0)
    return 1;
    if(n==1)
    return base;
    ll halfn=power(base,n/2,M);
    if(n%2==0)
    return ( halfn * halfn ) % M;
    else
    return ( ( ( halfn * halfn ) % M ) * base ) % M;
}

ll findMMI(ll n,ll M)
{
    return power(n,M-2,M);
}

ll max2(ll a, ll b)
{
	if(a>b)
	return a;
	else return b;
}

ll max3(ll a, ll b, ll c)
{
	return max2(max2(a, b), c);
}

ll min2(ll a, ll b)
{
	if(a<b)
	return a;
	else return b;
}

ll min3(ll a, ll b, ll c)
{
	return min2(min2(a, b), c);
}

int arr[1005], dia[1005], vis[1005], omg[1005];

pair<int, int> dfs(int cur, int si)
{
	if(vis[cur]==1)
	return mp(-1, -1);
	vis[cur]=1;
	if(arr[cur]==-1)
	return mp(si, cur);
	return dfs(arr[cur], min2(si, dia[cur]));
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, p;
	cin>>n>>p;
	for(int i=0;i<=n;i++)
	{
		arr[i]=-1;
		dia[i]=-1;
		vis[i]=-1;
		omg[i]=-1;
	}
	for(int i=0;i<p;i++)
	{
		int a;
		cin>>a;
		cin>>arr[a]>>dia[a];
		omg[arr[a]]=1;
	}
	vector<pair<pair<int, int>, int> > ans;
	if(p==0)
	{
		cout<<0;
		return 0;
	}
	for(int i=1;i<=n;i++)
	{
		pair<int, int> aa;
		if(vis[i]==-1&&omg[i]==-1)
		{
			aa=dfs(i, 10000000);
			if(aa.F!=-1)
			ans.pb(mp(mp(i, aa.S), aa.F));
		}
	}
	cout<<ans.size()<<endl;
	for(int i=0;i<ans.size();i++)
	cout<<ans[i].F.F<<" "<<ans[i].F.S<<" "<<ans[i].S<<endl;
	return 0;
}
