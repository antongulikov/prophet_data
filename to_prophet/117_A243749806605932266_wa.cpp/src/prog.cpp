#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main() {
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int z, y, n, m, s, f, t, t1, t2, x;
	scanf("%d%d", &n, &m);
	m -= 1;
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &s, &f, &t);
		s--;
		f--;
		if (s == f) {
			printf("%d\n", 0);
			continue;
		}
		if (f < s) {
			f = m + m - f;
			s = m + m - s;
		}
		y = t % (2 * m);
		t1 = (s - y + m + m) % (m + m) + f - s;
		printf("%d\n", t + t1);
	}




	return 0;
}