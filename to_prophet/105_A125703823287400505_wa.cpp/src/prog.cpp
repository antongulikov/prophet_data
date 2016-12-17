#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <algorithm>
#include <functional>
#include <cmath>
#include <sstream>
#include <memory.h>
#define forn(i,n) for (int i = 0; i < (int)(n); i++)
#define forv(i, a) for(int i=0; i<(int)a.size(); i++)
#define mset(a, val) memset(a, val, sizeof(a))
#define all(a) a.begin(),a.end()
#define mp make_pair
#define pb push_back
#define sz size()
#define VI vector< int >
#define VS vector< string >
#define PII pair< long long,long long >
#define PDD pair< double,double >
#define PIS pair< int, string >
#define sqr(a) ((a)*(a))
#define cube(a) ((a)*(a)*(a))
#define pi 3.1415926535897932384626433832795
const int inf=1000*1000*1000;
#define eps 1e-7
#define ll long long
#define clr(a, val) memset(a, val, sizeof(a));
using namespace std;

map<string, int> names;
int a[100];

int main(){
#ifdef _qwer
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

	int n, m, c, t=0, k;
	double tk;
	string str;

	cin>>n>>m>>tk;
	k=(int)(tk*100);

	forn(i, n)
	{
		cin>>str>>c;

		if((k*c)/100 < 100) continue;

		a[t]=(c*k)/100;
		names[str]=t++;
	}

	forn(i, m)
	{
		cin>>str;
		if(names.count(str)==0)
		{
			a[t]=0;
			names[str]=t++;
		}
	}

	cout<<t<<endl;

	for(map<string, int>::iterator it=names.begin(); it!=names.end(); ++it)
	{
		cout<<it->first<<" "<<a[it->second]<<endl;
	}
	
} 