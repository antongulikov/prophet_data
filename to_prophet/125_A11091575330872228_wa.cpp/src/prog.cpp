#include<iostream>
#include<utility>
#include<cmath>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
#include<cstdio>
#include<cstdlib>
#include<fstream>
#include<string>
#include<string.h>
#include<sstream>
#include<limits>
#include<map>
#include<assert.h>
#define L length()
#define eps 1e-12
#define F first
#define S second
#define inf numeric_limits<int> :: max()
#define For(i,a,b) for(int i=a;i<=b;i++)
#define FOR(i,a,b) for(int i=a;i>=b;i--)
using namespace std;

int n;

int main()
{
 #ifndef ONLINE_JUDGE
  freopen("input.txt","rt",stdin);
  freopen("output.txt","wt",stdout);
 #endif

  scanf("%d\n",&n);
  int q;
  if (n%36>=18) q=n/36+1; else q=n/36;
  n%=36;
  if (n%3==2) cout<<q<<" "<<n/3+1;
  else cout<<q<<" "<<n/3;

 fclose(stdin);fclose(stdout);
 return 0;
}
