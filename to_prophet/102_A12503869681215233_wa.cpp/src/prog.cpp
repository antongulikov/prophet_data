#include <stdio.h>
#include <sstream>
#include <vector>
#include <list>
#include <set>
#include <stack>
#include <algorithm>
#include <iostream>
#include <string>
#include <bitset>
#include <cstring>
#include <queue>
#include <cmath>
#include <map>
#include <ctime>
#define y0 sdjgfwiofnuwnxiuewfiwje
#define y1 kdsgnhoewmcoirnvmawlkmf
#define EPS 1e-10
#define MAXLL 9223372036854775807ll
#define MAXINT 2147483647
#pragma comment(linker, "/STACK:256000000")

using namespace std;

long long mulmod(long long a, long long b, long long MOD){
	if (b == 0) return 0;
	long long res = mulmod(a, b >> 1, MOD);
	res += res;
	res %= MOD;
	return (b & 1)? (a + res) % MOD : res;
}

int main(){
	ios::sync_with_stdio(0);
	//freopen("input.txt", "rt", stdin);
	//freopen("output.txt", "wt", stdout);
	//cout.setf(ios::fixed);cout.precision(6);
	//time_t startTime = time (NULL);
	int n,m;
	cin>>n>>m;
	int a[113];
	for (int i=0;i<n;i++){
		cin>>a[i];
	}
	bool b[113][113];
	memset(b,0,sizeof(b));
	for (int i=0;i<m;i++){
		int t1,t2;
		cin>>t1>>t2;
		b[t1][t2]=1;
		b[t2][t1]=1;
	}
	int ans=1000000000;
	for (int i=0;i<n;i++){
		for (int j=i+1;j<n;j++){
			for (int k=j+1;k<n;k++){
				if (b[i][j] && b[i][k] && b[j][k]){
					ans=min(ans,a[i]+a[j]+a[k]);
				}
			}
		}
	}
	if (ans==1000000000) ans=-1;
	cout<<ans;
	//cout<<"Successful completed in "<<time (NULL)-startTime<<" second(s).\n";
	return 0;
}