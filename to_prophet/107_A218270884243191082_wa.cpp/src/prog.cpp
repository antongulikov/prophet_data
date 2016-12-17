#include<iostream>
#include<set>
#include<map>
#include<vector>
#include<list>
#include<string.h>
#include<cmath>
#include<cstdio>
#include<algorithm>
#include <queue> 
#include<string>
#include<sstream>
#include<stack>
#include <iomanip> 
using namespace std;

typedef unsigned long long int ull;
typedef long long int ll;
#define rep(i,A,B) for(int i=A;i<=B;i++)
#define pb push_back
#define mp make_pair
#define S second
#define F first
#define all(c) (c).begin(), (c).end()
#define vectorIterate(v) for(auto it=v.begin(); it!=v.end();it++)
#define mod 1000000007

ll gcd(ll a, ll b)
{
   if (b==0) return a;
   return gcd(b,a%b);
}
ll lcm(ll a, ll b)
{
   return b*a/gcd(a,b);
}

ll abs1(ll a)
{
	if(a<0)
	return -1*a;
	else return a;
}
ll max(ll a,ll b)
{
	if(a>b)
	return a;
	return b;
}
ll fast_pow(long long base, long long n)
{
    if(n==0)
       return 1;
    if(n==1)
    return base;
    long long halfn=fast_pow(base,n/2);
    if(n%2==0)
        return ( halfn * halfn );
    else
        return ( ( ( halfn * halfn )  ) * base ) ;
}
ll findMMI_fermat(ll n,ll M)
{
    return fast_pow(n,M-2);
}
const double PI = 3.14159265358979323846;
vector<pair<int,int> > v[10000];
map<int,int> ma,pa,sa;
bool b[100000];
int dfs(int i,int j,int m)
{
	
//	cout<<i<<'\n';
	if(b[i]==true)
	return 0;
	b[i]=true;
	int count=0;
	int max=10000000;
	for(int p=0;p<v[i].size();p++)
	{
		
		count=1;
//		if(m!=0)
		m=min(m,v[i][p].S);
		int r=dfs(v[i][p].F,j,m);
		if(r!=0)
			max=min(max,r);
		
		
	}
	if(count==0)
	{
		sa[i]=j;
		
		//cout<<m<<'\n';
	return m;
     }
	
	return max;
	
}
int main()
{
	memset(b,false,sizeof(b));
       int n,p;
       cin>>n>>p;
       while(p--)
       {
       	int a,b,c;
       	cin>>a>>b>>c;
       	v[a].pb(mp(b,c));
       	//v[b].pb(mp(a,c));
       	ma[a]++;
       	pa[b]++;
       	
	   }
	   map<int,int> la;
	   for(int i=1;i<=n;i++)
	   {
	   	
	   	   if(ma[i]>0&&pa[i]==0)
	   	   {
	   	   	
	   	   	  la[i]=dfs(i,i,1000000000);
	   	   	
			  }
	   	
	   	
	   }
       int count=0;
       vector<pair<int,pair<int,int> > > o;
       for(int i=1;i<=n;i++)
       {
       	  if(sa[i]!=0)
       	  {
       	  	
       	  	 o.pb(mp(sa[i],mp(i,la[sa[i]])));
       	  	
			 }
       	
	   }
	   cout<<o.size()<<'\n';
	   
	   for(int i=0;i<o.size();i++)
	   {
	   	cout<<o[i].F<<" "<<o[i].S.F<<" "<<o[i].S.S<<'\n';
	   }
       
	return 0;
}