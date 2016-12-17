// In the name of God

#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

typedef long long ll;
typedef pair<int,int> pii;

int a[100+10];
int vis[10000 + 10];

int main()
{
  ios_base::sync_with_stdio(false);
  int n;
  cin >> n;
  int maj = 0;
  for(int i=1;i<=n;++i)
    {cin >> a[i]; maj += a[i];}
  int ans = 0;
  for(int i=1;i<=n;++i)
    {
      memset(vis,0,sizeof vis);
      vis[0] = 1;
      if( (maj - a[i]) % 2 == 0){
	for(int l=1;l<=n;++l)
	  for(int j=( (maj-a[i])/2);j>=0;--j)
	    if(vis[j] == 1 && l != i && j + a[l] <= (maj-a[i])/2)
	      vis[j + a[l]] = 1; 
	if(vis[(maj-a[i])/2] == 1)
	  ans++;
      }
    }
  cout << ans << endl;
  return 0;
}
