#include <iostream>
#include <string>
#include <cstdio>
#include <cmath>
#include <map>
#include <algorithm>
#include <set>
#include <queue>
#include <vector>

using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define sz size()
#define len length()
#define fi(x) freopen((x),"r",stdin)
#define fo(x) freopen((x),"w",stdout)

bool is_palin (int t) {
	string s;
	s += t / 600 - '0';
	s += t / 60 % 10 - '0';
	s += t % 60 / 10 - '0';
	s += t % 60 % 10 - '0';

	string st = s;
	reverse (st.begin(), st.end());
	if (st == s)
		return true;
		return false;
}	

int main () {
//	fi ("zzz.in");
//	fo ("zzz.out");

		string s;
		cin >> s;

		int h = (s[0] - '0') * 10 + (s[1] - '0');
		int m = (s[3] - '0') * 10 + (s[4] - '0');
		int t = h * 60 + m;
		while (true) {
			t ++;

			if (is_palin(t)) {
				cout << t / 600 << t / 60 % 10 << ":" << t % 60 / 10 << t % 60 % 10;
				return 0;
			}
		}
	return 0;
}
