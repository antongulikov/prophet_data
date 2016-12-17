#include <cmath>
#include <cstdio>
#include <cctype>
#include <cstdlib>
#include <cstring>
#include <map>
#include <set>
#include <queue>
#include <string>
#include <vector>
#include <sstream>
#include <iostream>
#include <algorithm>

using namespace std;

#define DB(x) cerr << #x << "=" << x << "\n"
#define DBG(x, y) cerr << #x << "=" << x << "  " << #y << "=" << y << "\n"

#define f first
#define s second
#define mp make_pair
#define pb push_back
#define SZ(v) (int)(v).size()
#define ALL(v) (v).begin(), (v).end()
#define FOR(it, v) for (__typeof((v).begin()) it = (v).begin(); it != (v).end(); it++)
#define FILE ""

typedef long long LL;

const LL inf = 1LL << 62;

LL t1, t2, x1, x2, t0;

int main(){
	#ifndef ONLINE_JUDGE
	freopen(FILE".in", "r", stdin);
	#endif  
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin >> t1 >> t2 >> x1 >> x2 >> t0;
	LL x, y, maxFlow = 0;
	double d = double(inf);
	for (LL y1 = 0; y1 <= x1; y1++){
		LL y2;
		if (t0 == t2) y2 = x2;
		else y2 = (y1 * (t0 - t1)) / (t2 - t0);
		for (LL j = max(0LL, y2 - 100); j <= min(y2 + 100, x2); j++){
			double t = double(t1 * y1 + t2 * j) / double(y1 + j);
			if (t < t0) continue;
			if (t - double(t0) < d){
				d = t - double(t0);
				maxFlow = y1 + j;
				x = y1;
				y = j;
			}
			else if (t - double(t0) == d && y1 + j > maxFlow){
				maxFlow = y1 + j;
				x = y1;
				y = j;				
			}	
		}		
	}	
	cout << x << " " << y;

	return 0;
}