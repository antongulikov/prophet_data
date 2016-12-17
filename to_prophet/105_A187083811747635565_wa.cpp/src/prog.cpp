#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <stdio.h>

using namespace std;

#define mp(x, y) make_pair(x, y)

map<string, int> ans;
int main(){
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, m;
	double kk;
	cin >> n >> m >> kk;
	int k = (int)(kk * 100.0);
	for (int i = 0; i < n; i++){
		string s;
		int x;
		cin >> s >> x;
		if (x * k < 10000) continue;
		ans[s] = k * x / 100;
	}

	for (int i =0 ; i < m; i++){
		string s;
		cin >> s;
		if (ans.count(s) == 0){
			ans[s] = 0;
		}
	}

	cout << ans.size() << endl;

	for (map<string, int> :: iterator it = ans.begin(); it != ans.end(); it++){
		cout << it->first << " " << it->second << endl;
	}
	return 0;
}