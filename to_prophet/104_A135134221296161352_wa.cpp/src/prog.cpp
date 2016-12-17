#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <set>
#include <map>
#include <vector>
#include <deque>
#include <iterator>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <fstream>
#include <ctime>
#include <functional>
#include <bitset>

using namespace std;

//input - output
#define si(n) scanf("%d",&n)
#define sl(n) scanf("%I64d",&n)
#define sd(n) scanf("%lf",&n)
#define ss(n) scanf("%s",n)
#define pi(n) printf("%d ",n)
#define pil(n) printf("%d\n",n)

//constants
#define PI 2 * acos(1.0)
#define INF int(INFINITY)
#define MAXN 0
#define MAXM 0

//functions
#define pb push_back
#define ppb pop_back
#define MP make_pair
#define F first
#define S second
#define all(c) (c).begin(), (c).end()
#define SORT(c) sort(all(c))
#define sz(s) (int)((s).size())
#define clear(a) memset((a),0,sizeof(a))

//conatainers
#define pii pair<int, int>
#define pdd pair<double, double>
#define VI vector <int>
#define ll long long

//loops
#define FOR(i,a,b,c) for (int _n(b), i(a); i <= _n; i+=(int)(c))
#define FORD(i,a,b,c) for(int i=(a),_b=(b);i>=_b;i-=(int)(c))
#define rep(i,n) FOR(i,1,(n),1)
#define rept(i,n) FOR(i,0,(n)-1,1)

#define re return
#define id void

int n;

int main()
{
 #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  clock_t tClock = clock();
 #endif
 
 si(n);
 n -= 10;
 if(n <= 0 || n >= 12)
 {
  pi(0);
  return 0;
 }
 if(n >= 1 && n <= 11)
 {
  pi(4);
  return 0;
 }
 pi(15);
 #ifndef ONLINE_JUDGE
  printf("\nCompleted in %.0f sec\n" ,(double)(clock() - tClock) / 1000);
 #endif
}

