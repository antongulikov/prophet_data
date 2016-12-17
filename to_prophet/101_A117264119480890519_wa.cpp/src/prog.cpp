#include <cmath>
#include <ctime>
#include <string>
#include <vector>
#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

#define fi first
typedef double D;
#define se second
typedef string S;
#define re return 0
typedef long long ll;
#define pb push_back
typedef long double ld;
#define mp make_pair
typedef vector<int > vi;
#define sz(x) (int)x.size()
typedef pair<int, int> ii;
#define max(x,y,z) max(max(x,y),z)
typedef vector<ii > vii;
#define rep(m,n) for(int i=m;i<=n;i++)

int b,z,an,x;
string a;
vector <pair<char,int> > c;
vector <pair<int,char> > k;

int main()
{
	cin>>a>>b;
	if(sz(a)<=b) {cout<<0; re;}
	
	rep(0,sz(a)-1)
	c.pb(mp(a[i],i));
	sort(c.begin(),c.end());
	k.pb(mp(1,c[0].fi)); z=1;
	rep(1,sz(a)-1)
	
	if(c[i].fi==c[i-1].fi)	k[z-1].fi++;
	else	k.resize(sz(k)+1),k[z].fi++,k[z].se=c[i].fi,k[z].fi=1,z++;
	sort(k.begin(),k.end());
	rep(0,z-1)
	if(k[i].fi>b)
	{
		k[i].fi=b;an=i;
		cout<<z-i<<endl;
		break;
	}
	else
	b-=k[i].fi;
	
	for(int i=0;i<sz(a);i++)
	{
		for(int j=0;j<=an;j++)
		if(k[j].fi>0 && k[j].se==a[i])	{k[j].fi--;x=1;break;}
		if(x==0) printf("%c",a[i]);
	}
}
