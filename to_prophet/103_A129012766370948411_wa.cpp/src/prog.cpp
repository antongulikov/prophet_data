#include <stdio.h>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <cstring>
#include <cctype>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <queue>
#include <deque>
#include <functional>
#include <algorithm>
#include <cmath>
#include <climits>
#include <cfloat>
#include <cassert>

using namespace std;

typedef long long ll;
typedef double real;
typedef pair<int, int> ii;

template <typename T>
string toString(T x) {
	if (x == 0) return "0";
	bool negative = x < 0;
	string res;
	while (x) {
		res.push_back('0' + x % 10);
		x /= 10;
	}
	if (negative) res.push_back('-');
	reverse(res.begin(), res.end());
	return res;
}

template <typename T>
T gcd(T a, T b) { return a == 0 ? b : gcd(b % a, a); }
template <typename T>
T lcm(T a, T b) { return a / gcd(a, b) * b; }

void ioFromFile(string inputFileName = "input.txt", 
				string outputFileName = "output.txt") {
	ifstream* fin = new ifstream(inputFileName);
	ofstream* fout = new ofstream(outputFileName);
	cin.rdbuf(fin->rdbuf());
	cout.rdbuf(fout->rdbuf());
}

int read() { int x; scanf("%d", &x); return x; }
void write(int x) { printf("%d ", x); }
//---------------------------------------------------

int main(){
	int n = read();
	ll tot = 0;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
	{
		a[i] = read();
		tot += a[i];
		tot += (a[i] - 1) * i;
	}
	cout << tot;

	return 0;
}

/*

1000000000000000 52 0

*/