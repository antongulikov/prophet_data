#include<iostream>
#include<sstream>
#include<fstream>
#include<string>
#include<cstring>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<iomanip>
#include<map>
#include<set>
#include<stack>
#include<cmath>

using namespace std;

#define all(v)			((v).begin(),(v).end())
#define sz(v)			((int)(v).size())
#define clr(v,d)		memset((v),(d),sizeof(v))
#define rep(i,v)		for(int i = 0 ; i < (int) sz(v) ; i++ )
#define lp(i,n)			for(int i = 0 ; i < (int) n; i++ )
#define lpu(i,j,n)		for(int i = (j) ; i < (int) n ; i++ )
#define lpd(i,j,n)		for(int i = (j) ; i >= (int) n ; i-- )

typedef long long ll;
typedef unsigned long long ull;
typedef double dd;

int main()
{
	ll h, m;
	char ch;
	cin >> h >> ch >> m;
	pair<ll, ll> p[16];
	p[0].first = 00;
	p[0].second = 00;
	p[1].first = 01;
	p[1].second = 10;
	p[2].first = 02;
	p[2].second = 20;
	p[3].first = 03;
	p[3].second = 30;
	p[4].first = 04;
	p[4].second = 40;
	p[5].first = 05;
	p[5].second = 50;
	p[6].first = 10;
	p[6].second = 01;
	p[7].first = 11;
	p[7].second = 11;
	p[8].first = 12;
	p[8].second = 21;
	p[9].first = 13;
	p[9].second = 31;
	p[10].first = 14;
	p[10].second = 41;
	p[11].first = 15;
	p[11].second = 51;
	p[12].first = 20;
	p[12].second = 02;
	p[13].first = 21;
	p[13].second = 12;
	p[14].first = 22;
	p[14].second = 22;
	p[15].first = 23;
	p[15].second = 32;
	ll i;
	for (i = 0; i < 16; i++)
	{
		if (p[i].first>h)
			break;
	}
	if (i == 16)
		cout << "00:00\n";
	else
	{
		if (p[i].first < 10)
			cout << 0 << p[i].first << ":";
		else
			cout << p[i].first << ":";
		if (p[i].second < 10)
			cout << 0 << p[i].second << endl;
		else
			cout << p[i].second << endl;
	}
	return 0;
} 