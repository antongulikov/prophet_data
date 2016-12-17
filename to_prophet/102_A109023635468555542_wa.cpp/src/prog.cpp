#include<iostream>
using namespace std;

const int oo = 110, INF = 10001000;
int n, m, a[oo], x, y, mi = INF;
bool c[oo][oo];

int main(){
  cin >> n >> m;
  for(int i = 0; i < n; i++)
    cin >> a[i];
  for(int i = 0; i < m; i++){
    cin >> x >> y;
    c[x][y] = c[y][x] = true;
  }
  for(int i = 0; i < n - 2; i++)
    for(int j = i + 1; j < n - 1; j++)
      for(int k = j + 1; k < n; k++)
        if(c[i][j] && c[j][k] && c[k][i])
          mi = min(mi, a[i] + a[j] + a[k]);
  if(mi == INF)
    cout << -1;
  else
    cout << mi;
  return 0;
}
 