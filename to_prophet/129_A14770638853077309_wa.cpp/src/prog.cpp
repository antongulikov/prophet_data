//Author: Khai Hanh Tang - khaihanhdk
#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <functional>
#include <iomanip>
#include <iostream>
#include <limits>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <utility>
#include <vector>
#include <cassert>
#include <cctype>
#include <climits>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>

#define FR(i, a, b)   for(int i = a; i < b; i++)
#define FOR(i, a, b)  for(int i = a; i <= b; i++)
#define LFOR(i, a, b) for(int i = a; i >= b; i--)
#define FRSZ(i, x)    for(int i = 0; i < (int)x.size(); i++)
#define RP(i, n)      for(int i = 0; i < n; i++)
#define repeat        do
#define until(x)      while(!(x))

using namespace std;

typedef long long int64;
typedef unsigned long long qword;
typedef long double ldouble;

int n,even,neven,s,i,x;

int main(){
    cin>>n;
    even=0;
    neven=0;
    s=0;
    for(i=1;i<=n;i++){
        cin>>x;
        s+=x;
        x%2==0?even++:neven++;}
    if(x%2==0)cout<<even;
    else cout<<neven;}
