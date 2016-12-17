#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<vector>
#include<cmath>
#include<string>
#include<sstream>
#include<set>
#include<map>
#include<stack>
#include<queue>
#include<deque>
#include<memory.h>
#include<ctime>
#include<cassert>
#include<limits.h>
#include<unordered_map>
#include<unordered_set>

#define pb push_back
#define sz(a) (int)a.size()
#define bs binary_search
#define np next_permutation
#define mp make_pair
#define all(a) a.begin(),a.end()
#define forn(i, n) for (int i = 0; i < n; ++i)
#define forv(i, v) for (int i = 0; i < sz(v); ++i)
#define forsint(it, s) for (set<int>::iterator it = s.begin(); it != s.end(); ++it)
#define _(a, b) memset(a, b, sizeof a)
#define pii pair<int, int>
#define pll pair<long long, long long>

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

template<class T> inline T sqr(T x) { return x * x; }

const double pi = acos(-1.0), eps = 1e-9, e = exp(1.0);
const int INF = 1000 * 1000 * 1000 + 7, MAXN = 100005, MOD = 1000000007, MAXBIT = 30, pHash = 53;
const ll INFL = 1e+18;

void prepare(string s) {
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
	//freopen("output.txt","w",stdout);
#else
	if (sz(s) != 0) {
		freopen((s + ".in").c_str(), "r", stdin);
		freopen((s + ".out").c_str(), "w", stdout);
	}
#endif
}

int n, p1, p2, p3, t1, t2, cur = 1, total = 0, last;

void solve()
{
	int l, r;
	cin >> n >> p1 >> p2 >> p3 >> t1 >> t2 >> l >> r;
	total += p1 * (r - l);
	last = r;
	for (int i = 1; i < n; i++) {
		cin >> l >> r;
		int t = l - last;
		if (t > t1) {
			total += t1 * p1;
			last += t1;
		} else {
			total += t * p1;
		}
		t = l - last;
		if (t > t2) {
			total += t2 * p2;
			last += t2;
			t = l - last;
			total += t * p3;
		} else {
			total += t * p2;
		}
		total += (r - l) * p1;
		last = r;
	}
	cout << total << endl;
}

int main()
{
	prepare("");

	solve();

	return 0;
}