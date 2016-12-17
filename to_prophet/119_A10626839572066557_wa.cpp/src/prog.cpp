/*
 Muhammad Magdi Muhammad
 Oct 14, 2011
 A.cpp
 */
#include <map>
#include <deque>
#include <queue>
#include <stack>
#include <sstream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <vector>
#include <set>
#include <complex>

#define all(v)          v.begin(),v.end()
#define allr(v)         v.rbegin(),v.rend()
#define sz              size()
#define rep(i,m)        for(int i=0;i<m;i++)
#define REP(i,k,m)      for(int i=k;i<m;i++)
#define mem(a,b)        memset(a,b,sizeof(a))
#define mp              make_pair
#define pb              push_back
#define OO ((int)1e9)
#define MAX 100000

typedef long long ll;
ll gcd(ll a, ll b) {
    if (a < 0)
        return gcd(-a, b);
    if (b < 0)
        return gcd(a, -b);
    return (b == 0) ? a : gcd(b, a % b);
}

int sv[109][2] ;
int take[2];
int dp(int rem, int p) {
    if (rem < take[p] && rem < gcd(rem, take[p]) )
        return !p;
    if(sv[rem][p] != -1)
        return sv[rem][p];
    int a = dp(rem - take[p], !p);
    int b = dp(rem - gcd(rem, take[p]), !p);
    if (a == !p || b == !p)
        return sv[rem][p]=!p;
    return sv[rem][p]=p ;
}

int diri[] = { -1, 0, 1, 0, -1, 1, 1, -1 };
int dirj[] = { 0, 1, 0, -1, 1, 1, -1, -1 };
int compare(double d1, double d2) {
    if (fabs(d1 - d2) < 1e-9)
        return 0;
    if (d1 < d2)
        return -1;
    return 1;
}

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("1.in", "r", stdin);
//  freopen("A.in","r",stdin);
//  freopen("A.out", "w", stdout);
#endif
    int n ;
    mem(sv,-1) ;
    cin >> take[0] >> take[1] >> n ;
    cout << dp(n,0) << endl ;
    return 0;
}

