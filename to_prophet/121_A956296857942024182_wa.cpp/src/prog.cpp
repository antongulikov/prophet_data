#include <vector>
#include <list>
#include <map>
#include <math.h>
#include <cmath>
#include <set>
#include <queue>
#include <deque>
#include <string>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <string.h>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cstdlib>
#include <ctime>
using namespace std;
#define MOD 1000000007
#define oo 1e9
#define sorta(x) sort(x.begin(),x.end())
#define sortd(x) sort(x.begin(),x.end(),greater<int>())
#define revs(x) reverse(x.begin(),x.end());
#define set(x,y) memset(x,y,sizeof(x))
#define all(x) x.begin(),x.end()
#define s(x) scanf("%c",&x)
#define p(x) printf("%d",&x)
#define pb push_back
#define mp make_pair
int di4[] = { 0, 0, 1, -1 }, dj4[] = { -1, 1, 0, 0 };
int di8[] = { 0, 0, 1, 1, 1, -1, -1, -1 }, dj8[] = { -1, 1, -1, 0, 1, -1, 0, 1 };
int di6[] = { -1, 0, 1, -1, 0, 1 }, dj6[] = { -1, -1, 0, 0, 1, 1 };
int GCD(int a, int b) {
    if (!b) return a;
    return GCD(b, a%b);
}
int LCM(int a, int b) {
    return ((a*b) / GCD(a, b));
}
vector<long long>nexts;
void generate(long long cur) {
    if (cur > 0) {
        nexts.pb(cur);
    }
    if ((int)log10(cur) + 1 >= 10) return;
    cur *= 10;
    generate(cur + 4);
    generate(cur + 7);
}
long long next(long long x) {
    int low = 0, high = nexts.size() - 1, mid, choice = nexts.size();
    while (low <= high) {
        mid = (low + high) / 2;
        if (nexts[mid] >= x) {
            high = mid - 1;
            choice = min(mid, choice);
        }
        else {
            low = mid + 1;
        }
    }
    return nexts[choice];
}
int main() {
    generate(0);
    sorta(nexts);
    long long l, r;
    while(cin >> l >> r) {
    long long res = 0;
    int i=0,cur=l;
    while(nexts[i]<=r) {
        if(nexts[i]>=cur) {
        res+=nexts[i];
        cur++;
        }
        else {
            while(nexts[i]<cur) i++;
        }
    }
    cout << res << endl;
    }
    return 0;
}
