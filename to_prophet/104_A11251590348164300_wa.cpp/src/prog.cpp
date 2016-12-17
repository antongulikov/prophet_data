#include<iostream>
#include<cstdio>
#include<sstream>
#include<string>
#include<cstring>
#include<map>
#include<set>
#include<queue>
#include<stack>
#include<vector>
#include<algorithm>
#include<cmath>
#include<cstdlib>
#include<bitset>
using namespace std;

typedef long long ll;
#define INF 2023456789
#define EPS 1e-11
#define FOR(i,a,b) for(int i = a; i < b; ++i)
#define REP(i,a,b) for(int i = a; i <= b; ++i)
#define FORD(i,a,b) for(int i = a; i >= b; --i)

int gcd(int x, int y) {
    return y == 0 ? x : gcd(y, x % y);
}

int n;

int f[11];
void read() {
    cin >> n;
}

void init() {
    f[1] = 4;
    f[0] = 0;

    REP(i,2,9){
        f[i] = 4;
    }
    f[10] = 15;
    f[11] = 4;
}

void solve() {
    if(n < 10){
        cout << 0;
    }
    else
        cout << f[ n - 10 ];
}
int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);
#endif
    read();
    init();
    solve();

}
