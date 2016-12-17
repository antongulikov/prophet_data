#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <string>
#include <cstring>
#include <ctime>
#include <string.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < n; ++i)
#define Rep(i,n) for(int i = 1; i <= n; ++i)
#define lowbit(x) ((x)&(-x))
//#pragma comment(linker,"/STACK:1024000000,1024000000")
#define eps 1e-6
#define sqr(x) ((x)*(x))
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<ld, ld> pdd;

const int inf = 0x3f3f3f3f, mod = 1e9 + 7;
const int maxn = 2e5 +100;
const ld PI = acos(-1.0);
ll gcd (ll a, ll b)
{return ( a ? gcd(b%a, a) : b );}
ll power(ll a, ll n)
{ll p = 1;while (n > 0) {if(n%2) {p = p * a;} n >>= 1; a *= a;} return p;}
ll power(ll a, ll n, ll mod)
{ll p = 1;while (n > 0) {if(n%2) {p = p * a; p %= mod;} n >>= 1; a *= a; a %= mod;} return p % mod;}
int n,m,all,k;
char s[10];
int main()
{
    while(~scanf("%s",s))
    {
       cin>>n;
       if((s[0]=='f'&&n==1)||(s[0]=='b'&&n==2))
       cout<<"L"<<endl;
       else cout<<"R"<<endl;

    }


    return 0;
}
