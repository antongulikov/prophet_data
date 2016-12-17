#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <climits>
#include <cassert>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
#include <set>

using namespace std;

#define D(x) cout << #x << " = " << x << endl;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define repd(i,a,b) for(int i=b-1;i>=a;i--)
#define REP(i,n) rep(i,0,n)
#define REPD(i,n) repd(i,0,n)
#define pb push_back
#define mp make_pair

typedef long long int lld;
typedef vector<int> vi;
typedef vector<string> vs;
typedef pair<int,int> pii;
typedef vector<pii> vpii;

int valid(int i, int j){
  if(i < 0 or i >= 8 or j < 0 or j >= 8) return false;
  return true;
}

string statues(string cur,bool &valid){
  vpii pos;
  REP(i,8) REP(j,8) if(cur[i*8+j] == 'S')
    pos.pb(mp(i,j));

  valid = true;
  REP(k,pos.size()){
    int i = pos[k].first;
    int j = pos[k].second;
    cur[i*8+j] = '.';
    i++;
    if(i == 8) continue;
    if(cur[i*8+j] == 'M') valid = false;;
    cur[i*8+j] = 'S';
  }
  return cur;
}

int main(){
  string board;
  REP(i,8){
    string line;
    cin >> line;
    board += line;
  }

  bool ans = false;
  stack<string> Q;
  Q.push(board);
  set<string> S;

  int di[] = {-1,-1, 0, 1, 1, 1, 0,-1, 0};
  int dj[] = { 0, 1, 1, 1, 0,-1,-1,-1, 0};
   while(!Q.empty()){
    string st = Q.top(); Q.pop();
    // cout << "st" << endl;
    // cout << st << endl;
    
    int index = st.find("M");
    int i = index / 8;
    int j = index % 8;
    //D(i); D(j);
    
    REP(k,9){
      int ni = i + di[k];
      int nj = j + dj[k];

      string cur = st;
      if(!valid(ni,nj)) continue;

      int nindex = ni*8 + nj;
      if(cur[nindex] == 'S') continue;

      cur[index] = '.';
      cur[nindex] = 'M';
      //D(ni); D(nj);

      bool b;
      string ncur = statues(cur,b);
      //cout << cur << endl << ncur << endl;
      if(!b) continue;

      if(S.find(ncur) != S.end()) continue;
      Q.push(ncur);
      S.insert(ncur);
      if(ni == 0 and nj == 7) ans = true;
    }
    if(ans) break;
    //D(Q.size());
  }

  if(ans) cout << "WIN" << endl;
  else cout << "LOSE" << endl;

  return 0;
}
