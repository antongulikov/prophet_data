#define _CRT_SECURE_NO_DEPRECATE
#include<iostream>
#include<numeric>
#include<sstream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<memory>
#include<string>
#include<vector>
#include<cctype>
#include<list>
#include<queue>
#include<deque>
#include<stack>
#include<map>
#include<set>
#include<algorithm>
using namespace std;

typedef unsigned long long      ui64;
typedef long long               i64;
typedef	vector<int>             VI;
typedef	vector<string>          VS;
typedef	pair<int,int>           PII;
typedef	pair<double,double>     PDD;

#define PB                      push_back
#define MP                      make_pair
#define X                       first
#define Y                       second
#define FOR(i, a, b)            for(int i = (a); i < (b); ++i)
#define RFOR(i, a, b)           for(int i = (a) - 1; i >= (b); --i)
#define CLEAR(a, b)             memset(a, b, sizeof(a))
#define SZ(a)                   int((a).size())
#define ALL(a)                  (a).begin(), (a).end()
#define RALL(a)                 (a).rbegin(), (a).rend()
#define INF                     (2000000000)


int main()
{
	int a,b;
	scanf("%d:%d",&a,&b);
//	cout << a <<" " << b << endl;
	FOR(i,a,24){
		int qq;
		if(i==a)
			qq = b+1;
		else
			qq = 0;
		FOR(j,qq,60){
			int t = (j%10)*10 + j/10;
			if(t==i){
				cout << i << ":" << j << endl;
				return 0;
			}
		}
	}
	cout << "00:00\n";
	return 0;
}