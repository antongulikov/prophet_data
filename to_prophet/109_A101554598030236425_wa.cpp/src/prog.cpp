#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cassert>
#include <cmath>
#include <ctime>

#include <string>
#include <sstream>
#include <algorithm>
#include <iostream>
#include <vector>
#include <list>
#include <set>
#include <map>

using namespace std;

#define Eo(x) { cerr << #x << " = " << (x) << endl; }
#define E(x) { cerr << #x << " = " << (x) << "   "; }
#define Sz(x) (int((x).size()))

template<typename A, typename B> ostream& operator<<(ostream& os, const pair<A, B>& p) { return os << '(' << p.first << ", " << p.second << ')'; }

typedef double real;
typedef long long int64;
typedef unsigned long long uint64;
typedef pair<int, int> pip;

const int inf = 0x3f3f3f3f;
const int64 inf64 = 0x3f3f3f3f3f3f3f3fLL;
const real eps = 1e-5;



int main() {
	int n; cin >> n;
	for(int i=1; ; i++) {
		int mn = i*4;
		int mx = i*7;
		if(mn <= n && n <= mx) {
			bool ok = false;
			for(int j=0; j<=i; j++) {
				int cur = j*4 + (i-j)*7;
				if(cur == n) {
					ok = true;
					for(int k=0; k<j; k++) printf("4");
					for(int k=j; k<i; k++) printf("7");
					puts("");
					return 0;
				}
			}
			if(!ok) {
				puts("-1");
				return 0;
			}
		}
		if(mn > n) {
			puts("-1");
			return 0;
		}
	}
	
	return 0;
}
