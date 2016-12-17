#include <iostream>
#include <vector>
#include <cstdio>
#include <cstring>
using namespace std;
#define f first
#define s second
#define mp make_pair
#define pb push_back
#define INF (1<<30)
#define ll long long
#define PI 3.1415926535897932
#define EPS 1e-9
#define sqr(x) ((x)*(x))

char a[100005];
vector <int> g[27];
int k, kol[27];
string s;

int main()
{
  cin >> s >> k;
  for (int i = 0; i < s.size(); i++)
  {
    kol[s[i] - 'a']++;
    g[s[i] - 'a'].pb(i);
  }
  int mini, ind;
  while (true)
  {
    mini = 100005;
    for (int i = 0; i < 25; i++)
      if (kol[i] != 0 && kol[i] < mini)
        mini = kol[i], ind = i;
      if (mini > k)
        break;
    k -= mini;
    kol[ind] = 0;
  }
  int raz = 0;
  for (int i = 0; i < 25; raz += kol[i] != 0, i++)
    for (int j = 0; j < min(kol[i], (int)g[i].size()); j++)
      a[g[i][j]] = i + 'a';
  cout << raz << endl;
  for (int i = 0; i < s.size(); i++)
    if (a[i])
      cout << a[i];
  return 0;
}
