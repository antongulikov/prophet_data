#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int xs[11111], ys[11111];
int k = 0;
int q = 0, e = 0;
int tx, ty, tt;
struct { int x,y,z; } w[11111111];
bool a[11][11][111111];

void rec(int x, int y) 
{
	if (x>0 && x<9 && y>0 && y<9 && !a[x][y][tt+1]) {
		bool flag = true;
		for (int i = 0; i < k; ++i) {
			if (xs[i]+tt+1==x && y==ys[i]) {
				flag = false;
				break;
			}
			else if (xs[i]+tt==x && y==ys[i]) {
				flag = false;
				break;
			}
		}
		if (flag) {
			++e;
			w[e].x = x;
			w[e].y = y;
			w[e].z = tt+1;
			a[x][y][tt+1] = true;
		}
	}
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	for (int i = 1; i <= 8; ++i) {
		string s;
		getline(cin, s);
		for (int j = 1; j<=8; ++j) {
			if (s[j-1] == 'S') {
				xs[k] = i;
				ys[k] = j;
				++k;
			}
		}
	}
	
	
	w[0].x = 8;
	w[0].y = 1;
	w[0].z = 0;
	a[8][1][0] = true;
	while (q<=e) {
		tx = w[q].x;
		ty = w[q].y;
		tt = w[q].z;
		if (tt==8) {
			int q = 2;
		}
		if (tt == 9) {
			cout << "WIN" << endl;
			return 0;
		}
		rec(tx+1,ty);
		rec(tx-1,ty);
		rec(tx,ty+1);
		rec(tx,ty-1);
		rec(tx+1,ty+1);
		rec(tx+1,ty-1);
		rec(tx-1,ty+1);
		rec(tx-1,ty-1);
		++q;
	}
	cout << "LOSE" << endl;
	return 0;
}
