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

int64 get(string& s);
int64 get(int64 cur) {
	stringstream ss;
	ss << cur;
	string s = ss.str();
	return get(s);
}
	
int64 get(string& s) {
	stringstream ss(s);
	int64 cur;
	ss >> cur;

	bool ok = true;
	for(char c : s) if(c != '4' && c != '7') {
		ok = false;
		break;
	}
	if(ok) return cur;
	
	int i=0;
	for(; ; i++) {
		if(s[i] != '4' && s[i] != '7') {
			break;
		}
	}
	s[i]++;
	for(; i>0; i--) {
		if(s[i] <= '9') return get(s);
		s[i] = '0';
		s[i-1]++;
	}
	if(s[0] == '9'+1) {
		s[0] = '0';
		s = "1"+s;
	}
	return get(s);
}

int main() {
	ios_base::sync_with_stdio(false);
	int64 l, r; cin >> l >> r;

	int64 res = 0;
	int64 cur = l;
	while(cur <= r) {
		int64 n = get(cur);
		res += (min(r, n)-cur+1)*n;
		//Eo(n); Eo(cur);
		cur = n+1;
		//Eo(cur);
	}
	cout << res << endl;

	return 0;
}
