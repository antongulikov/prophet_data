#define _CRT_SECURE_NO_DEPRECATE

#pragma comment(linker,"/STACK:67108864")

#include <iostream>
#include <ctime>
#include <cstdio>
#include <memory>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <list>
#include <stack>
#include <string>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <ctime>
#include <utility>
#include <iterator>
#include <bitset>
#include <sstream>
#include <numeric>

#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define pdd pair<double,double>
#define LL long long
#define ULL unsigned LL
#define VI vector<int>
#define X first
#define Y second
#define sz(_v) ((int)_v.size())
#define all(_v) (_v).begin(),(_v).end()
#define FOR(i,a,b) for (int i(a); i<=(b); ++i)
#define rep(i,a) FOR(i,1,a)
#define rept(i,a) FOR(i,0,(int)(a)-1)
#define x1 X1
#define y1 Y1
#define sqr(a) ((a)*(a))
#define INF 2000000000
#define PI 3.141592653589
#define eps 0.00000000001
#define MOD 1000000009

using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    {
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    }
#endif
    int n;
    scanf("%d",&n);
    int need(0);
    LL res(0ll);
    rept(i,n)
    {
        int a;
        scanf("%d",&a);
        res+=(a-1)*need+a;
        ++need;
    }
    printf("%I64d\n",res);
    return 0;
}