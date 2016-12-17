#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <complex>
#include <cstring>
#include <cstdlib>
#include <string>
#include <cmath>
#include <queue>
#include <set>
#include <map>
using namespace std;

#define REP(i,n) for(int i=0;i<(int)n;++i)
#define FOR(i,c) for(__typeof((c).begin())i=(c).begin();i!=(c).end();++i)
#define ALL(c) (c).begin(), (c).end()
const int INF = 1<<29;

typedef pair<int,int> pii;
vector<int> subsum(vector<pii> v, int s) {
  vector<bool> dp(s+1);
  vector<vector<int> > se(s+1);
  dp[0] = 1;
  // FOR(it, v) 
  //   printf("(%d,%d)", it->first,it->second);

  // cout <<" " << s <<endl;
  REP(i,v.size()) {
    for (int j=s; j>=0 && j-v[i].first>=0; --j) {
      if (dp[j]==0&&dp[j-v[i].first]) {
        se[j] = se[j-v[i].first];
        se[j].push_back(i);
        dp[j] = 1;
      }
    }
  }
  // FOR(it, se[s]) {
  //   printf("%d ",*it);
  // }
  // cout << endl;
  return se[s];
}

int main() {
  string s;
  cin >> s;
  if (s.size() <= 3) {
    cout << "YES" << endl;
    cout << s << endl;
    return 0;
  }
  int n = s.size();
//  int n = 1000;
  vector<int> v(n);
  vector<pii> hoge;
  hoge.push_back(pii(1, 1));
  v[0] = 1;
  for (int i=2; i<=n; ++i) {
    if (v[i-1] == 0) {
      int cnt = 0;
      for (int j=i; j<=n; j+=i) {
        if (v[j-1]==0) {
          v[j-1] = i;
          cnt++;
        }
      }
      hoge.push_back(pii(cnt,i));
    }
  }
  // REP(i, n) {
  //   cout << v[i] << " ";
  // }cout << endl;
  int num[26] = {};
  REP(i, s.size()) {
    num[s[i]-'a']++;
  }
  typedef pair<int,char> pic;
  vector<pic> vv;
  REP(i, 26) {
    vv.push_back(pic(num[i], 'a'+i));
  }
  sort(ALL(vv));
 
  // cout << "!"<<hoge.size() << endl;
  // FOR(it, hoge) {
  //   printf("(%d,%d) ", it->first, it->second);
  // }
  // cout << endl;
  char mp[1001];
  bool f = 0;
  REP(i, vv.size()) {
    vector<int> tmp = subsum(hoge, vv[i].first);
    if (vv[i].first && tmp.size()==0) {
      f = 1;
      break;
    }
    sort(ALL(tmp), greater<int>());
    REP(j, tmp.size()) {
      mp[hoge[tmp[j]].second] = vv[i].second;
      //cout << hoge[tmp[j]].second << " " << vv[i].second << endl;
      hoge.erase(hoge.begin()+tmp[j]);
    }
  }
  if (!f) {
    cout << "YES" << endl;
    REP(i, n) {
      cout << mp[v[i]];
    }cout << endl;
  } else {
    cout << "NO" << endl;
  }
}
