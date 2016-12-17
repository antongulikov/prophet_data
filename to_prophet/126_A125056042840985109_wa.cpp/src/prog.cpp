#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <cassert>
#include <cmath>
#include <cctype>
 
#include <algorithm>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <deque>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <bitset>
#include <list>
#include <iterator>
#include <functional>
 
using namespace std;
 
typedef long long int64;
typedef unsigned long long ull;
 
int64 labs(int64 a)
{
        return a<0 ? (-a) : a;
}
int64 max(int64 a, int64 b)
{
        return a>b?a:b;
}
int64 min(int64 a, int64 b)
{
        return a<b?a:b;
}
template<typename T> struct Point
{
        T x, y; Point(){} Point(T xx, T yy): x(xx), y(yy){}
};
template<typename T> bool operator <(const Point<T> &p1, const Point<T> &p2)
{
        return p1.x < p2.x || p1.x == p2.x && p1.y < p2.y;
}
 
#define mp make_pair
#define pb push_back
#define forn(i, n) for(int (i)=0; (i)<(n); (i)++)
#define forr(i, n) for(int (i)=(n)-1; (i)>=0; (i)--)
#define forit(i,c) for((i)=(c).begin(); (i)!=(c).end(); (i)++)
#define all(x) (x).begin(), (x).end()
#define zero(a) memset((a), 0, sizeof(a))
#define sqr(a) ((a)*(a))
 
typedef vector<int> vint;
typedef vector<bool> vbool;
typedef vector<int64> vint64;
typedef Point<int> pint;
typedef Point<int64> pint64;
typedef pair<int, int> pii;

double CalcT(int64 t1, int64 t2, int64 y1, int64 y2)
{
	return (double)(t1 * y1 + t2 * y2) / (y1 + y2);
}
const double EPS = 1e-9;
int main()
{
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "r", stdin);

	int64 t1, t2, x1, x2, t0;
	cin >> t1 >> t2 >> x1 >> x2 >> t0;
	
	int64 ry1 = 0, ry2 = x2;

	for(int64 y1 = 0; y1 <= x1; y1++)
	{
		int64 y2;
		if (t0 != t2)
			y2 = (int64)ceil((double)y1 * (t1 - t0) / (t0 - t2));
		else if (t1 == t2)
		{
			y2 = x2;
		}
		else
			continue;

		if (y2 > x2 || y1 == 0 && y2 == 0)
			continue;

		if (fabs(t0 - CalcT(t1, t2, ry1, ry2)) - fabs(t0 - CalcT(t1, t2, y1, y2)) < -EPS)
		{
			continue;
		}

		if (y1 + y2 > ry1 + ry2)
		{
			ry1 = y1;
			ry2 = y2;
		}
	}	
	
	cout << ry1 << " " << ry2 << endl;

	return 0;
}