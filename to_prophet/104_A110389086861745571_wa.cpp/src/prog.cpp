#include <cstdio>
#include <cassert>
#include <cctype>
#include <climits>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <limits>
#include <string>
#include <iostream>
#include <sstream>
#include <functional>
#include <algorithm>
#include <bitset>
#include <deque>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <vector>
using namespace std;
#define all(c) (c).begin(), (c).end()
#define present(c,x) ((c).find(x) != (c).end())
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef pair<int, int>  ii;
typedef vector<int>     vi;
typedef vector< ii >    vii;

//int dx[]={0,1,0,-1},dy[]={-1,0,1,0};
//int dx[]={0,1,1,1,0,-1,-1,-1},dy[]={-1,-1,0,1,1,1,0,-1};

template<class T> bool checkMin(T& a, T b) { if(a > b){ a = b;return 1;}return 0;}
template<class T> bool checkMax(T& a, T b) { if(a < b){ a = b;return 1;}return 0;}
template<class T> string itostr(T x) {stringstream ss; ss<<x;return ss.str();}
long long strtoll(string s){stringstream ss(s);long long x;ss>>x;return x;}
char buf[1024];

const double EPS = 1e-9;
const double PI = acos(-1);
const int INF = (int)(1e9);
const int MN = (int)1e0;

int solve(int n){
	if(n <= 10 || n > 21)
		return 0;
	if(n == 21)
		return 1;
	if(n == 20)
		return 15;
	return 4;
}
int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
#endif
	int S = 10, n;
	scanf("%d", &n);
	printf("%d\n", solve(n));
}
